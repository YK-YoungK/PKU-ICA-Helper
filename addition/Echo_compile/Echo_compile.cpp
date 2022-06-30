//对拍程序-编译部分 by zlx
//此程序在yk的评测机基础上修改而成


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

int judging_result = -1;
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
    // argv[3]:1 or 2 or 3

    //生成judgement_log.txt的绝对路径,此文档用于评测过程中命令行输出%errorlevel%结果的捕获
    string check_file_path{};
    check_file_path.append(argv[2]);
    check_file_path.append("\\judgement_log.txt");

    string compile_message{};
    compile_message.append(argv[2]);
    if(atoi(argv[3])==1)
        compile_message.append("\\EchoCompile_std.bat ");
    else if(atoi(argv[3])==2)
        compile_message.append("\\EchoCompile_test.bat ");
    else if(atoi(argv[3])==3)
        compile_message.append("\\EchoCompile_input.bat ");
    compile_message.append(argv[2]); //参数1:评测相关路径
    compile_message.append(" ");
    compile_message.append(argv[1]); //参数2:提交的.cpp路径

    system(compile_message.c_str());

    ifstream compile_checkfile(check_file_path, ios::in);
    int compile_code;
    compile_checkfile >> compile_code;
    if (compile_checkfile.fail() == 1 || compile_code != 0) //非标准退出,即编译错误
    {
        cout << "ce" << endl;
        compile_checkfile.close();
        return 0;
    }
    cout << "ok" << endl;
    compile_checkfile.close();
    return 0;
}