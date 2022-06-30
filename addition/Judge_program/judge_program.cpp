//评测机程序 judgement V1.3
// recently updated:2022.6.25
//2022.5.12update:修改代码结构,三部分分别用三个.bat实现;删除无用代码
//2022.5.13update:补充开头的注释
//2022.6.25update:compile.bat,使其支持c++11特性
// author:yk
//功能:提交.cpp文件,编译并运行,检查能否编译、是否超时、运行时是否错误、输出结果是否正确
//方法:使用三个批处理文件compile.bat,run.bat,compare.bat分别完成编译、运行、比对
//批处理文件中重定向输出%errorlevel%,用于判断各个步骤是否正常结束
//检查超时办法:多线程,主线程休眠time_limit时长后尝试结束子线程,当且仅当成功结束子线程时代表程序运行超时
//使用前需保证系统上安装了mingw并将其添加到环境变量中,检查办法:打开cmd,输入g++ -v,若不报错即可使用
#include <iostream>
#include <cstdlib> //实现程序中调用命令行指令，方式为system(命令行指令)
#include <direct.h>
#include <windows.h>
#include <fstream>
//以下头文件为多线程相关
#include <thread>
#include <chrono>
#include <pthread.h>
using namespace std;

int time_limit = 0; //程序运行时限,以ms为单位
int judging_result = -1;
// judging_result含义
//-1:waiting   0:accepted   1:wrong answer   2:time limit exceeded
//  3:compile error   4:runtime error   5:presentation error

//以下为子线程运行函数
void *run(void *arg)
{
    string message = *((string *)arg);
    system(message.c_str()); //调用批处理文件run.bat并通过echo编译返回的错误值(%errorlevel%)
    return NULL;
}

int main(int argc, char *argv[])
{
    // argv参数表
    // argv[0]:评测机程序本身
    // argv[1]:提交的cpp文件路径
    // argv[2]:样例位置,即qt位置,也即编译出的test.exe位置,也即批处理文件judge.bat的位置
    // Rmk.样例输入与输出存储在qt主程序所在文件夹下的problem_case文件夹内,输入与输出文件名均为argv[3]题目编号,后缀为.in,.out
    // argv[3]:题目编号,对应标准答案的文件名
    // argv[4]:时间限制
    time_limit = atoi(argv[4]);

    //生成judgement_log.txt的绝对路径,此文档用于评测过程中命令行输出%errorlevel%结果的捕获
    string check_file_path{};
    check_file_path.append(argv[2]);
    check_file_path.append("\\judgement_log.txt");

    // step1:compile
    string compile_message{};
    //将提交的cpp文件,编译出test.exe至样例文件夹下
    compile_message.append(argv[2]);
    compile_message.append("\\compile.bat ");
    compile_message.append(argv[2]); //参数1:评测相关路径
    compile_message.append(" ");
    compile_message.append(argv[1]); //参数2:提交的.cpp路径

    system(compile_message.c_str()); //调用批处理文件compile.bat并通过echo编译返回的错误值(%errorlevel%)

    ifstream compile_checkfile(check_file_path, ios::in);
    int compile_code;
    compile_checkfile >> compile_code;
    if (compile_checkfile.fail() == 1 || compile_code != 0) //非标准退出,即编译错误
    {
        judging_result = 3;
        cout << "compile error" << endl;
        return 0;
    }
    compile_checkfile.close();

    // step2:run in the limited time
    string run_message{};
    run_message.append(argv[2]);
    run_message.append("\\run.bat ");
    run_message.append(argv[2]); //参数1:路径
    run_message.append(" ");
    run_message.append(argv[3]); //参数2:题目编号

    pthread_t run_thread;
    //通过子线程调用批处理文件run.bat并通过echo编译返回的错误值(%errorlevel%)
    pthread_create(&run_thread, NULL, run, &run_message); // argv[1]是.cpp文件路径与文件名

    Sleep(time_limit);

    //尝试终止子线程
    // reference1:https://baike.baidu.com/item/pthread_cancel/809830
    // reference2:https://wenku.baidu.com/view/a39496a5b9d528ea80c77905.html
    int result = pthread_kill(run_thread, 0);
    if (result == 0) //成功终止子线程,代表程序运行超时
    {
        system("taskkill /f /t /im test.exe"); //通过命令行终止test.exe的运行
        judging_result = 2;
        cout << "time limit exceeded" << endl;
        return 0;
    }

    ifstream run_checkfile(check_file_path, ios::in);
    int run_code;
    run_checkfile >> run_code;
    if (run_checkfile.fail() == 1 || run_code != 0) //没有输入或输入的结果非0,即runtime error
    {
        judging_result = 4;
        cout << "runtime error" << endl;
        return 0;
    }
    run_checkfile.close();

    // step3:compare
    string compare_message{};
    compare_message.append(argv[2]);
    compare_message.append("\\compare.bat ");
    compare_message.append(argv[2]); //参数1:路径
    compare_message.append(" ");
    compare_message.append(argv[3]); //参数2:题目编号
    system(compare_message.c_str()); //调用批处理文件compare.bat并通过echo编译返回的错误值(%errorlevel%)
    ifstream compare_checkfile(check_file_path, ios::in);
    int result1, result2;
    compare_checkfile >> result1 >> result2;
    if (result1 == 0) // errorlevel为0代表上一次比对结果完全相同
    {
        judging_result = 0;
        cout << "accepted" << endl;
    }
    else if (result2 == 0)
    {
        judging_result = 5;
        cout << "presentation error" << endl;
    }
    else if (result2 == 1)
    {
        judging_result = 1;
        cout << "wrong answer" << endl;
    }
    compare_checkfile.close();
    return 0;
}