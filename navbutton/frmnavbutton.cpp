//导航:
//z1.主界面相关 by zlx
    //参考:navbutton/iconhelper类
//y1.模拟测试 by yk
    //参考:test_problems类, 及Judge_program文件夹(位于附加程序文件夹下)
//z2.程序对拍 by zlx
    //参考:echo类, 及Echo_compile文件夹(位于附加程序文件夹下)
//y2.自由练习 by yk
    //全部功能均在本文件中实现
//y3.更多功能 by yk
    //全部功能均在本文件中实现
//l1.教学演示 by lxc
    //参考:algorithm1/bool1/plusm/turing_pre类

#pragma execution_character_set("utf-8")

#include "frmnavbutton.h"
#include "ui_frmnavbutton.h"
#include "navbutton.h"
#include "iconhelper.h"
#include "qdebug.h"
#include "QFileDialog"
#include "echo.h"
#include "test_problems.h"
#include<iostream>
#include<plusm.h>
#include<algorithm1.h>
#include<teaching_p.h>
#include<turing_pre.h>
#include<bool1.h>



//z1.主界面相关 by zlx
frmNavButton::frmNavButton(QWidget *parent) : QWidget(parent), ui(new Ui::frmNavButton)
{
    std::cout << "MAIN" << endl;
    std::cout << "main" << endl;
    ui->setupUi(this);
    this->initForm();//初始化主界面
    this->initBtn();//初始化左侧按钮
    this->initEchoPage();//初始化对拍界面
    this->initPractice();//初始化自由练习界面
    this->init_acnum();//初始化通过情况
    ui->more_function->setCurrentIndex(0);//初始化【更多】界面
    this->init_morefunction_links();//绘制【更多】界面链接的按钮
    this->set_function_buttoncolor();//设置【更多】四个功能按钮的背景色与字体色
}

frmNavButton::~frmNavButton()
{
    delete ui;
}

//主界面初始化
void frmNavButton::initForm()
{
    icons << 0xf17b << 0xf002 << 0xf013 << 0xf021 << 0xf0e0 << 0xf135;
    ui->navButton1->setChecked(true);//初始状态默认显示主界面
    this->setWindowIcon(QIcon("://images/lion.png"));//设置主页面图标
    this->setWindowTitle("PKU ICA Helper 0.1.0");//设置主页面标题
    QIntValidator* aIntValidator = new QIntValidator;
    aIntValidator->setRange(0, 100);
    ui->loop_num->setValidator(aIntValidator);
}

//主界面左侧导航按钮初始化
void frmNavButton::initBtn()
{
    quint32 size = 15;
    quint32 pixWidth = 15;
    quint32 pixHeight = 15;

    int icon = 0xf105;
    QPixmap iconNormal = IconHelper::getPixmap(QColor(100, 100, 100).name(), icon, size, pixWidth, pixHeight);
    QPixmap iconHover = IconHelper::getPixmap(QColor(255, 255, 255).name(), icon, size, pixWidth, pixHeight);
    QPixmap iconCheck = IconHelper::getPixmap(QColor(255, 255, 255).name(), icon, size, pixWidth, pixHeight);

    btns << ui->navButton0 << ui->navButton1 << ui->navButton2 << ui->navButton3 << ui->navButton4 << ui->navButton5 << ui->navButton6 << ui->navButton7;
    for (int i = 0; i < btns.count(); i++) {
        NavButton *btn = btns.at(i);
        btn->setLineSpace(10);
        btn->setLineWidth(10);
        btn->setPaddingRight(35);
        btn->setShowTriangle(true);
        btn->setTextAlign(NavButton::TextAlign_Right);
        btn->setTrianglePosition(NavButton::TrianglePosition_Left);
        btn->setLinePosition(NavButton::LinePosition_Right);
        btn->buttonID=i;

        btn->setShowIcon(true);
        btn->setIconSpace(20);
        btn->setIconSize(QSize(15, 15));
        btn->setIconNormal(iconNormal);
        btn->setIconHover(iconHover);
        btn->setIconCheck(iconCheck);

        connect(btn, SIGNAL(clicked(bool)), this, SLOT(buttonClick()));
    }
    ui->navButton0->click();
}

//左侧导航按钮被按下后的情况
void frmNavButton::buttonClick()
{
    NavButton *b = (NavButton *)sender();
    for (int i = 0; i < btns.count(); i++) {
        NavButton *btn = btns.at(i);
        btn->setChecked(b == btn);
    }

    if(b->buttonID==7) exit(0);//如果点击退出则结束程序
    else ui->stackedWidget->setCurrentIndex(b->buttonID);//否则切换对应界面

}


//y1.模拟测试
//recently updated:2022.6.27
//以下为主界面模拟测试下的按钮触发函数
void frmNavButton::on_test_main_reset_clicked()
{
    ui->diff_easy->setAutoExclusive(false);
    ui->diff_easy->setChecked(false);
    ui->diff_easy->setAutoExclusive(true);
    ui->diff_medium->setAutoExclusive(false);
    ui->diff_medium->setChecked(false);
    ui->diff_medium->setAutoExclusive(true);
    ui->diff_hard->setAutoExclusive(false);
    ui->diff_hard->setChecked(false);
    ui->diff_hard->setAutoExclusive(true);

    ui->num4->setAutoExclusive(false);
    ui->num4->setChecked(false);
    ui->num4->setAutoExclusive(true);
    ui->num5->setAutoExclusive(false);
    ui->num5->setChecked(false);
    ui->num5->setAutoExclusive(true);
    ui->num6->setAutoExclusive(false);
    ui->num6->setChecked(false);
    ui->num6->setAutoExclusive(true);
    ui->num7->setAutoExclusive(false);
    ui->num7->setChecked(false);
    ui->num7->setAutoExclusive(true);
    ui->num8->setAutoExclusive(false);
    ui->num8->setChecked(false);
    ui->num8->setAutoExclusive(true);
    ui->num9->setAutoExclusive(false);
    ui->num9->setChecked(false);
    ui->num9->setAutoExclusive(true);

    ui->point1->setChecked(false);
    ui->point2->setChecked(false);
    ui->point3->setChecked(false);
    ui->point4->setChecked(false);
    ui->point5->setChecked(false);
    ui->point6->setChecked(false);
    ui->point7->setChecked(false);
    ui->point8->setChecked(false);
    ui->point9->setChecked(false);

    ui->test_main_begin->setEnabled(false);
}

//以下为每按下一个按钮，均检查是否选择全部特性以可以开始考试
void frmNavButton::on_diff_easy_clicked()
{
    if (ui->diff_easy->isChecked()||ui->diff_medium->isChecked()||ui->diff_hard->isChecked());
    else
    {
        ui->test_main_begin->setEnabled(false);
        return;
    }
    if (ui->num4->isChecked()||ui->num5->isChecked()||ui->num6->isChecked()||
            ui->num7->isChecked()||ui->num8->isChecked()||ui->num9->isChecked());
    else
    {
        ui->test_main_begin->setEnabled(false);
        return;
    }
    if (ui->point1->isChecked()+ui->point2->isChecked()+ui->point3->isChecked()+
            ui->point4->isChecked()+ui->point5->isChecked()+ui->point6->isChecked()+
            ui->point7->isChecked()+ui->point8->isChecked()+ui->point9->isChecked()>=3);
    //至少选择3个模块才可以
    else
    {
        ui->test_main_begin->setEnabled(false);
        return;
    }
    ui->test_main_begin->setEnabled(true);
}
void frmNavButton::on_diff_medium_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}
void frmNavButton::on_diff_hard_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}
void frmNavButton::on_num4_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}
void frmNavButton::on_num5_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_num6_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_num7_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_num8_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_num9_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point1_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point2_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point3_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point4_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point5_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point6_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point7_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point8_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_point9_clicked()
{
    frmNavButton::on_diff_easy_clicked();
}

void frmNavButton::on_test_main_begin_clicked()
{
    std::string test_message{};
    int time_difficulty=0;//获取难度，用于计算时间
    if (ui->diff_easy->isChecked())
    {
        test_message.append("【难度】简单/Easy\n");
        time_difficulty=900;//简单，平均15分钟/题（900秒）
    }
    else if (ui->diff_medium->isChecked())
    {
        test_message.append("【难度】中等/Medium\n");
        time_difficulty=1200;//中等，平均20分钟/题（1200秒）
    }
    else if (ui->diff_hard->isChecked())
    {
        test_message.append("【难度】困难/Hard\n");
        time_difficulty=1500;//困难，平均25分钟/题（1500秒）
    }

    int time_problemnum=0;//获取题目数，用于计算时间
    if (ui->num4->isChecked())
    {
        test_message.append("【题数】4\n");
        time_problemnum=4;
    }
    else if (ui->num5->isChecked())
    {
        test_message.append("【题数】5\n");
        time_problemnum=5;
    }
    else if (ui->num6->isChecked())
    {
        test_message.append("【题数】6\n");
        time_problemnum=6;
    }
    else if (ui->num7->isChecked())
    {
        test_message.append("【题数】7\n");
        time_problemnum=7;
    }
    else if (ui->num8->isChecked())
    {
        test_message.append("【题数】8\n");
        time_problemnum=8;
    }
    else if (ui->num9->isChecked())
    {
        test_message.append("【题数】9\n");
        time_problemnum=9;
    }

    int exam_points_include[10]={0};
    test_message.append("【考点范围】");
    if (ui->point1->isChecked())
    {
        test_message.append("输入输出基础 ");
        exam_points_include[1]=1;
    }
    if (ui->point2->isChecked())
    {
        test_message.append("变量基础 ");
        exam_points_include[2]=1;
    }
    if (ui->point3->isChecked())
    {
        test_message.append("顺序、分支与循环 ");
        exam_points_include[3]=1;
    }
    if (ui->point4->isChecked())
    {
        test_message.append("数组 ");
        exam_points_include[4]=1;
    }
    if (ui->point5->isChecked())
    {
        test_message.append("字符串 ");
        exam_points_include[5]=1;
    }
    if (ui->point6->isChecked())
    {
        test_message.append("函数与递归 ");
        exam_points_include[6]=1;
    }
    if (ui->point7->isChecked())
    {
        test_message.append("深度优先搜索 ");
        exam_points_include[7]=1;
    }
    if (ui->point8->isChecked())
    {
        test_message.append("动态规划 ");
        exam_points_include[8]=1;
    }
    if (ui->point9->isChecked())
    {
        test_message.append("选学内容 ");
        exam_points_include[9]=1;
    }

    test_message.append("\n【建议考试用时】");
    int limited_hour=time_difficulty*time_problemnum/3600;
    int limited_miniute=(time_difficulty*time_problemnum%3600)/60;
    test_message.append(std::to_string(limited_hour));
    test_message.append("时");
    test_message.append(std::to_string(limited_miniute));
    test_message.append("分\n");
    test_message.append("预祝考试顺利！");

    int confirm=QMessageBox::question(this,tr("确认模拟测试信息"),tr(test_message.c_str()),QMessageBox::Ok,QMessageBox::Cancel);
    if (confirm==QMessageBox::Ok)
    {
        test_problems* start_exam=new test_problems(this);
        start_exam->exam_totaltime=time_difficulty*time_problemnum;//设置限时
        start_exam->exam_nowtime=start_exam->exam_totaltime;//设置剩余时间
        start_exam->exam_problemnum=time_problemnum;//设置题目数
        start_exam->exam_difficulty=(time_difficulty-900)/300;//模拟考试难度
        start_exam->set_exam_problem();//设置多余题目按钮不可用
        for (int i=0;i<10;i++)
            start_exam->exam_points[i]=exam_points_include[i];
        start_exam->choose_problems();//抽取题目
        start_exam->show();
        if (start_exam->exam_time->isActive()==false)
            start_exam->exam_counttime();//开始计时
    }
}
//【模拟测试】相关函数到此结束
//recently updated:2022.6.27



//z2.程序对拍-初始化部分 by zlx
//z2-1.程序对拍界面初始化
void frmNavButton::initEchoPage(){
    ui->std_display->setPlaceholderText("请提交cpp文件...");
    ui->std_display->setReadOnly(1);
    ui->test_display->setPlaceholderText("请提交cpp文件...");
    ui->test_display->setReadOnly(1);
    ui->input_display->setPlaceholderText("请提交cpp文件...");
    ui->input_display->setReadOnly(1);
    ui->echo_main_begin->setEnabled(0);//默认无法点击
    on_echo_reset_clicked();
}

//z2-2.标准程序、测试程序和输入数据的选择和重置
QString std_filePath, test_filePath, input_filePath;
bool std_chosen=0,test_chosen=0,input_chosen=0;
int input_state=-1;
//input_state的含义:
//-1:未选择   0:程序生成输入
// 1:手动输入 2:无输入

//z2-2-1.选择相关文件
//判断能否开始对拍
inline bool all_chosen(){
    return std_chosen && test_chosen && ((input_state==0&&input_chosen) || input_state==1 || input_state==2);
}

//选择标准程序路径
void frmNavButton::on_std_path_clicked()
{
    std_filePath = QFileDialog::getOpenFileName(this,"文件对话框",".","cpp Files(*.cpp)");
    if(std_filePath.length()==0) return;
    ui->std_display->setText(std_filePath);
    std_chosen=1;
    if(all_chosen())
        ui->echo_main_begin->setEnabled(1);
}

//选择测试程序路径
void frmNavButton::on_test_path_clicked()
{
    test_filePath = QFileDialog::getOpenFileName(this,"文件对话框",".","cpp Files(*.cpp)");
    if(test_filePath.length()==0) return;
    ui->test_display->setText(test_filePath);
    test_chosen=1;
    if(all_chosen())
        ui->echo_main_begin->setEnabled(1);
}

//选择输入生成程序路径
void frmNavButton::on_input_path_clicked()
{
    input_filePath = QFileDialog::getOpenFileName(this,"文件对话框",".","cpp Files(*.cpp)");
    if(input_filePath.length()==0) return;
    ui->input_display->setText(input_filePath);
    input_chosen=1;
    if(all_chosen())
        ui->echo_main_begin->setEnabled(1);
}

//z2-2-2.选择对拍次数和方式
//重置循环次数, 默认为1
void frmNavButton::on_loop_reset_clicked()
{
    ui->loop_num->setText("1");
}

//选择1.由程序自动生成输入, 需上传生成程序
void frmNavButton::on_program_generation_clicked()
{
    ui->input_path->setEnabled(1);
    ui->input_display->setEnabled(1);
    ui->input_display->setText("");
    input_state=0;
    if(all_chosen())
        ui->echo_main_begin->setEnabled(1);
    //允许用户设置对拍次数
    ui->loop_num->setEnabled(true);
    ui->loop_reset->setEnabled(true);
}

//选择2.无需输入
void frmNavButton::on_No_input_clicked()
{
    ui->input_path->setEnabled(0);
    ui->input_display->setEnabled(0);
    ui->input_display->setText("");
    input_state=2;
    if(all_chosen())
        ui->echo_main_begin->setEnabled(1);
    //禁止用户设置对拍次数并将对拍次数重置为1
    ui->loop_num->setEnabled(false);
    ui->loop_num->setText("1");
    ui->loop_reset->setEnabled(false);
}

//选择3.手动输入
void frmNavButton::on_manual_input_clicked()
{
    ui->input_path->setEnabled(0);
    ui->input_display->setEnabled(0);
    ui->input_display->setText("");
    input_state=1;
    if(all_chosen())
        ui->echo_main_begin->setEnabled(1);
    //禁止用户设置对拍次数并将对拍次数重置为1
    ui->loop_num->setEnabled(false);
    ui->loop_num->setText("1");
    ui->loop_reset->setEnabled(false);
}

//全部重置按钮
void frmNavButton::on_echo_reset_clicked()
{
    std_chosen=test_chosen=input_chosen=0;
    input_state=-1;
    ui->std_display->setText("");
    ui->test_display->setText("");
    ui->input_display->setText("");
    ui->input_display->setEnabled(0);

    //Reference:https://blog.csdn.net/yljxh/article/details/72899460
    ui->program_generation->setAutoExclusive(0);
    ui->manual_input->setAutoExclusive(0);
    ui->No_input->setAutoExclusive(0);
    ui->program_generation->setChecked(0);
    ui->manual_input->setChecked(0);
    ui->No_input->setChecked(0);
    ui->program_generation->setAutoExclusive(1);
    ui->manual_input->setAutoExclusive(1);
    ui->No_input->setAutoExclusive(1);

    ui->input_path->setEnabled(0);
    ui->loop_num->setText("1");

    //重置后将【开始对拍】按钮设置为不可用
    ui->echo_main_begin->setEnabled(false);
    //禁止用户设置对拍次数并将对拍次数重置为1
    ui->loop_num->setEnabled(false);
    ui->loop_num->setText("1");
    ui->loop_reset->setEnabled(false);
}

//z2-3.开始对拍

//编译提交的程序, 并打开对拍页面
void frmNavButton::on_echo_main_begin_clicked()
{
    int confirm=QMessageBox::question(this,tr("对拍确认"),tr("确认开始对拍？"),QMessageBox::Ok,QMessageBox::Cancel);
    if(confirm==QMessageBox::Ok){

        QByteArray tmp_std=std_filePath.toLatin1();
        QByteArray tmp_test=test_filePath.toLatin1();
        QByteArray tmp_input=input_filePath.toLatin1();
        char * stdpath=tmp_std.data();
        char * testpath=tmp_test.data();
        char * inputpath=tmp_input.data();

        //编译
        char cwd[500];
        _getcwd(cwd,500);

        QStringList l;
        l<< stdpath  << cwd << "1";
        char std_path_EchoProgram[600]={};
        sprintf(std_path_EchoProgram,"%s%s",cwd,"\\Echo_compile.exe");
        //编译, 调用的"Echo_compile.exe"基于yk的评测机程序修改而成
        QProcess cmd1(this);
        cmd1.start(std_path_EchoProgram,l);
        cmd1.waitForFinished();
        QByteArray Echo_std_result = cmd1.readAllStandardOutput();
        int len_std=Echo_std_result.length();
        char* s_std=Echo_std_result.data();
        if(s_std[len_std-3]=='e'){
            int confirm=QMessageBox::information(this,tr("警告"),tr(stdpath),QMessageBox::Ok);
            //https://blog.csdn.net/qq_42250189/article/details/105178379?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522165364870916782395368594%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=165364870916782395368594&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-105178379-null-null.142^v11^control,157^v12^control&utm_term=qmessagebox&spm=1018.2226.3001.4187
            return;
        }

        QStringList ll;
        ll<<testpath <<cwd << "2";
        char test_path_EchoProgram[600]={};
        sprintf(test_path_EchoProgram,"%s%s",cwd,"\\Echo_compile.exe");
        QProcess cmd2(this);
        cmd2.start(test_path_EchoProgram,ll);
        cmd2.waitForFinished();
        QByteArray Echo_test_result = cmd2.readAllStandardOutput();
        int len_test=Echo_test_result.length();
        char* s_test=Echo_test_result.data();
        if(s_test[len_test-3]=='e'){
            int confirm=QMessageBox::information(this,tr("警告"),tr("测试程序出现编译错误!\n请确认程序可正确运行后重试。"),QMessageBox::Ok);
            return;
        }

        if(input_state==0){
        QStringList lll;
        lll<< inputpath <<cwd << "3";
        char input_path_EchoProgram[600]={};
        sprintf(input_path_EchoProgram,"%s%s",cwd,"\\Echo_compile.exe");
        QProcess cmd3(this);
        cmd3.start(input_path_EchoProgram,lll);
        cmd3.waitForFinished();
        QByteArray Echo_input_result = cmd3.readAllStandardOutput();
        int len_input=Echo_input_result.length();
        char* s_input=Echo_input_result.data();
        if(s_input[len_input-3]=='e'){
            int confirm=QMessageBox::information(this,tr("警告"),tr("输入生成程序出现编译错误!\n请确认程序可正确运行后重试。"),QMessageBox::Ok);
            return;
        }
        }

        echo* start_echo=new echo();
        start_echo->inputState=input_state;
        start_echo->loopNum=ui->loop_num->text().toInt();
        start_echo->show();
        start_echo->init();
    }
}




//y2.自由练习 by yk
//以下为【自由练习】界面相关函数
//recently updated:2022.6.27
void frmNavButton::initPractice()//初始化自由练习界面
{
    //读取所有题目的时间
    int tmpcnt=0;
    std::string problemtime_file_path{"./problem_time_limitation.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problemtime(problemtime_file_path.c_str());
    if(!problemtime.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream txtInput(&problemtime);
    while(!txtInput.atEnd()&&tmpcnt<4500)
    {
        practice_problem_time_limitation[1+tmpcnt/500][(tmpcnt%500)/100][tmpcnt%100]=txtInput.readLine().toInt();
        if (practice_problem_time_limitation[1+tmpcnt/500][(tmpcnt%500)/100][tmpcnt%100]!=0)
            practice_problem_available.push_back((1+tmpcnt/500)*1000+((tmpcnt%500)/100)*100+tmpcnt%100);
        tmpcnt++;
    }
    problemtime.close();
    practice_problem_id_now=-1;//自由练习,提交的题号,初始值-1
    //设置自由练习内的题号数据范围, by yk
    ui->practice_get_problemid->setValidator(new QIntValidator(1000,9999,this));
}

void frmNavButton::on_practice_show_problem_clicked()
{
    QString tmp_id=ui->practice_get_problemid->text();
    int problem_id=tmp_id.toInt();
    if (problem_id<1000||(problem_id/100)%10>=5)
    {
        QMessageBox::warning(this,tr("警告"),tr("找不到题目，请重试！"),QMessageBox::Ok);
        return;
    }
    if (practice_problem_time_limitation[problem_id/1000][(problem_id/100)%5][problem_id%100]==0)
    {
        QMessageBox::warning(this,tr("警告"),tr("找不到题目，请重试！"),QMessageBox::Ok);
        return;
    }
    practice_problem_id_now=problem_id;

    //显示题面
    std::string problem_file_path{"./problems/P"};
    problem_file_path.append(std::to_string(problem_id));
    problem_file_path.append(".txt");
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problem(problem_file_path.c_str());
    if(!problem.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->practice_problem->setText(problem_file_path.c_str());
        return;
    }
    QTextStream txtInput(&problem);
    txtInput.setCodec("utf-8");
    QString lineStr;
    while(!txtInput.atEnd())
    {
        lineStr = lineStr + txtInput.readLine() + "\n";
    }
    ui->practice_problem->setText(lineStr);//显示txt文件内容
    problem.close();

    //评测结果清空
    ui->practice_label->setText("");

    //激活提交按钮
    ui->practice_submit->setEnabled(true);
}

void frmNavButton::on_practice_random_clicked()
{
    //抽取题号
    std::random_shuffle(practice_problem_available.begin(),practice_problem_available.end());
    practice_problem_id_now=practice_problem_available[0];
    //显示题号
    ui->practice_get_problemid->setText(QString::number(practice_problem_id_now, 10));

    //显示题面
    std::string problem_file_path{"./problems/P"};
    problem_file_path.append(std::to_string(practice_problem_id_now));
    problem_file_path.append(".txt");
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problem(problem_file_path.c_str());
    if(!problem.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->practice_problem->setText(problem_file_path.c_str());
        return;
    }
    QTextStream txtInput(&problem);
    txtInput.setCodec("utf-8");
    QString lineStr;
    while(!txtInput.atEnd())
    {
        lineStr = lineStr + txtInput.readLine() + "\n";
    }
    ui->practice_problem->setText(lineStr);//显示txt文件内容
    problem.close();

    //评测结果清空
    ui->practice_label->setText("");

    //激活提交按钮
    ui->practice_submit->setEnabled(true);
}

void frmNavButton::on_practice_reset_clicked()
{
    //评测结果清空
    ui->practice_label->setText("");

    //激活提交按钮
    ui->practice_submit->setEnabled(false);

    //题面内容清空
    ui->practice_problem->setText("");//显示txt文件内容

    //题目代号恢复初始化
    ui->practice_get_problemid->setText("1000");

    practice_problem_id_now=-1;
}

void frmNavButton::upd_accepted(int pro_id,int re)
{
    //修改通过情况
    if (re==1)//ac
        practice_problem_accepted[pro_id/1000][(pro_id/100)%5][pro_id%100]=1;
    else if (practice_problem_accepted[pro_id/1000][(pro_id/100)%5][pro_id%100]==0)//之前从未尝试过
        practice_problem_accepted[pro_id/1000][(pro_id/100)%5][pro_id%100]=-1;
    else
        return;

    //写入文件
    std::string ac_file_path{"./accepted_problem.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile ac_file(ac_file_path.c_str());
    if(!ac_file.open(QIODevice::WriteOnly | QIODevice::Truncate))
    //reference:http://c.biancheng.net/view/1877.html
    //reference:https://blog.csdn.net/zhouyingge1104/article/details/124696616
    {
        QMessageBox::critical(this,tr("错误"),tr("遇到未知错误，请重试！"),QMessageBox::Ok);
        return;
    }
    QTextStream txtoutput(&ac_file);
    for (int i=1;i<=9;i++)
    {
        for (int j=0;j<=4;j++)
        {
            for (int k=0;k<100;k++)
                txtoutput<<practice_problem_accepted[i][j][k]<<"\n";
        }
    }
    ac_file.close();
}

void frmNavButton::on_practice_submit_clicked()
{
    ui->practice_label->setText("");
    QString sPath = QFileDialog::getOpenFileName(this,"文件对话框",".","c++ files(*.cpp)");
    if (sPath.length()==0)//没有提交
        return;
    //上面最后一个参数限定了只能提交.cpp文件
    //以下三行是将选取文件的路径转化为char*，reference:https://blog.csdn.net/qq_41240191/article/details/106138303
    char*  ch;
    QByteArray tmp = sPath.toLatin1(); // must
    ch=tmp.data();
    char cwd[500];
    _getcwd(cwd, 500); //获取文件路径名
    //cout<<cwd<<endl;
    //cout<<ch<<endl;
    QStringList l;
    l<<ch<<cwd;//ch为.cpp路径名，cwd为本qt文件位置，也即样例的位置
    std::string problem_name{};
    problem_name.append("P");
    problem_name.append(std::to_string(practice_problem_id_now));
    l<<problem_name.c_str();
    std::string test_time=std::to_string(practice_problem_time_limitation[practice_problem_id_now/1000][(practice_problem_id_now/100)%10][practice_problem_id_now%100]);
    l<<test_time.c_str();
    char path_judgingprogram[600]={};
    sprintf(path_judgingprogram,"%s%s",cwd,"\\judge_program.exe");
    QProcess cmd(this);
    cmd.start(path_judgingprogram, l);
    cmd.waitForFinished();
    QByteArray judge_result = cmd.readAllStandardOutput();
    int len=judge_result.length();//评测程序日志长度
    char* s=judge_result.data();//评测程序日志
    //printf("%s",s);
    //cout<<s[len-5]<<endl;//-5是倒数第3位，我也不知道为啥…什么玄学玩意，估计是\r\n结尾吧…
    if (s[len-5]=='d')
    {
        ui->practice_label->setText("TLE");
        QFont font("Microsoft YaHei");
        ui->practice_label->setFont(font);
        ui->practice_label->setStyleSheet("color:red");
        upd_accepted(practice_problem_id_now,-1);
    }
    else if (s[len-5]=='t')
    {
        ui->practice_label->setText("Accepted");
        QFont font("Microsoft YaHei");
        ui->practice_label->setFont(font);
        ui->practice_label->setStyleSheet("color:blue");
        upd_accepted(practice_problem_id_now,1);
    }
    else if (s[len-5]=='w')
    {
        ui->practice_label->setText("Wrong Answer");
        QFont font("Microsoft YaHei");
        ui->practice_label->setFont(font);
        ui->practice_label->setStyleSheet("color:red");
        upd_accepted(practice_problem_id_now,-1);
    }
    else if (s[len-5]=='r')
    {
        if (s[len-10]=='l')
        {
            ui->practice_label->setText("Compile Error");
            QFont font("Microsoft YaHei");
            ui->practice_label->setFont(font);
            ui->practice_label->setStyleSheet("color:green");
            upd_accepted(practice_problem_id_now,-1);
        }
        else if (s[len-10]=='m')
        {
            ui->practice_label->setText("Runtime Error");
            QFont font("Microsoft YaHei");
            ui->practice_label->setFont(font);
            ui->practice_label->setStyleSheet("color:red");
            upd_accepted(practice_problem_id_now,-1);
        }
        else if (s[len-10]=='o')
        {
            ui->practice_label->setText("Presentation Error");
            QFont font("Microsoft YaHei");
            ui->practice_label->setFont(font);
            ui->practice_label->setStyleSheet("color:red");
            upd_accepted(practice_problem_id_now,-1);
        }
    }
}
//【自由练习】功能相关函数到此结束
//recently updated:2022.6.27





//y3.更多功能 by yk
//以下为【更多功能】界面的相关函数
//recently updated:2022.6.27
//以下为初始化四个按钮的背景色与文字颜色
void frmNavButton::set_function_buttoncolor()//设置【更多】四个功能按钮的背景色与字体色
{
    //reference:http://wjhsh.net/jiangson-p-6024566.html
    ui->morefun_add_problem->setStyleSheet("background-color:rgb(230,230,230);color:rgb(80,80,80);border-style:flat");
    ui->morefun_statistics->setStyleSheet("background-color:rgb(230,230,230);color:rgb(80,80,80);border-style:flat");
    ui->morefun_beginner->setStyleSheet("background-color:rgb(230,230,230);color:rgb(80,80,80);border-style:flat");
    ui->morefun_links->setStyleSheet("background-color:rgb(230,230,230);color:rgb(80,80,80);border-style:flat");
}

//以下四个函数为更多功能界面按对应按钮触发不同界面
void frmNavButton::on_morefun_add_problem_clicked()//初始化【添加题目】界面
{
    ui->more_function->setCurrentIndex(1);
    set_function_buttoncolor();
    ui->morefun_add_problem->setStyleSheet("background-color:rgb(80,80,80);color:rgb(255,255,255);border-style:flat");
}
void frmNavButton::on_morefun_statistics_clicked()//初始化【数据统计】界面
{
    ui->more_function->setCurrentIndex(2);
    //修改颜色
    set_function_buttoncolor();
    ui->morefun_statistics->setStyleSheet("background-color:rgb(80,80,80);color:rgb(255,255,255);border-style:flat");
    //初始化界面上的所有信息
    int totalcnt=0,accnt=0,failcnt=0;
    std::string ac_problem{},fail_problem{};
    for (int i=1;i<=9;i++)
    {
        for (int j=0;j<=4;j++)
        {
            for (int k=0;k<100;k++)
            {
                if (practice_problem_time_limitation[i][j][k]!=0)//the problem existss
                {
                    totalcnt++;
                    if (practice_problem_accepted[i][j][k]==1)
                    {
                        accnt++;
                        ac_problem.append(std::to_string(1000*i+100*j+k));
                        if (accnt%3==0)
                            ac_problem.append("\n");
                        else
                            ac_problem.append("     ");
                    }
                    else if (practice_problem_accepted[i][j][k]==-1)
                    {
                        failcnt++;
                        fail_problem.append(std::to_string(1000*i+100*j+k));
                        if (failcnt%3==0)
                            fail_problem.append("\n");
                        else
                            fail_problem.append("          ");
                    }
                }
            }
        }
    }
    std::string a{},b{};
    a.append("题目总数：");
    a.append(std::to_string(totalcnt));
    b.append("已解决题目总数：");
    b.append(std::to_string(accnt));
    ui->total_problem->setText(a.c_str());
    ui->p_problem_num->setText(b.c_str());
    ui->pass_problem->setText(ac_problem.c_str());
    ui->no_pass_problem->setText(fail_problem.c_str());
}
void frmNavButton::on_morefun_beginner_clicked()//初始化【快速入门】界面
{
    ui->more_function->setCurrentIndex(3);
    //修改颜色
    set_function_buttoncolor();
    ui->morefun_beginner->setStyleSheet("background-color:rgb(80,80,80);color:rgb(255,255,255);border-style:flat");
}
void frmNavButton::on_morefun_links_clicked()//初始化【友情链接】界面
{
    ui->more_function->setCurrentIndex(4);
    //修改颜色
    set_function_buttoncolor();
    ui->morefun_links->setStyleSheet("background-color:rgb(80,80,80);color:rgb(255,255,255);border-style:flat");
}



//1.【添加题目】相关函数
//recently updated:2022.6.27
void frmNavButton::check_add_problem_available()
{
    if (ui->problem_file_path->text().length()==0&&ui->problem_input_path->text().length()==0||ui->problem_output_path->text().length()==0)
    {
        ui->add_problem_confirm->setEnabled(false);
        return;
    }
    if (ui->add_problem_point->currentIndex()==0||ui->add_problem_difficulty->currentIndex()==0||ui->problem_time_choose->currentIndex()==0)
    {
        ui->add_problem_confirm->setEnabled(false);
        return;
    }
    ui->add_problem_confirm->setEnabled(true);
}

void frmNavButton::on_problem_file_search_clicked()
{
    QString sPath = QFileDialog::getOpenFileName(this,"文件对话框",".","纯文本文件(*.txt)");
    if (sPath.length()==0)//没有提交
        return;
    //以下三行是将选取文件的路径转化为char*，reference:https://blog.csdn.net/qq_41240191/article/details/106138303
    char*  ch;
    QByteArray tmp = sPath.toLatin1(); // must
    ch=tmp.data();
    //将选取文件的路径转化为QString并显示出来
    ui->problem_file_path->setText(QString(ch));
    check_add_problem_available();
}

void frmNavButton::on_problem_input_search_clicked()
{
    QString sPath = QFileDialog::getOpenFileName(this,"文件对话框",".",".in文件(*.in)");
    if (sPath.length()==0)//没有提交
        return;
    //以下三行是将选取文件的路径转化为char*，reference:https://blog.csdn.net/qq_41240191/article/details/106138303
    char*  ch;
    QByteArray tmp = sPath.toLatin1(); // must
    ch=tmp.data();
    //将选取文件的路径转化为QString并显示出来
    ui->problem_input_path->setText(QString(ch));
    check_add_problem_available();
}

void frmNavButton::on_problem_output_search_clicked()
{
    QString sPath = QFileDialog::getOpenFileName(this,"文件对话框",".",".out文件(*.out)");
    if (sPath.length()==0)//没有提交
        return;
    //以下三行是将选取文件的路径转化为char*，reference:https://blog.csdn.net/qq_41240191/article/details/106138303
    char*  ch;
    QByteArray tmp = sPath.toLatin1(); // must
    ch=tmp.data();
    //将选取文件的路径转化为QString并显示出来
    ui->problem_output_path->setText(QString(ch));
    check_add_problem_available();
}

void frmNavButton::on_add_problem_reset_clicked()
{
    ui->add_problem_confirm->setEnabled(false);
    ui->problem_file_path->setText("");
    ui->problem_input_path->setText("");
    ui->problem_output_path->setText("");
    ui->add_problem_point->setCurrentIndex(0);
    ui->add_problem_difficulty->setCurrentIndex(0);
    ui->problem_time_choose->setCurrentIndex(0);
}

void frmNavButton::on_add_problem_point_currentIndexChanged(int index)
{
    check_add_problem_available();
}

void frmNavButton::on_add_problem_difficulty_currentIndexChanged(int index)
{
    check_add_problem_available();
}

void frmNavButton::on_problem_time_choose_currentIndexChanged(int index)
{
    check_add_problem_available();
}

void frmNavButton::on_add_problem_confirm_clicked()
{
    //检查该类题目是否已经添加满
    int final_problem_num=-1;
    for (int i=0;i<100;i++)
    {
        if (practice_problem_time_limitation[ui->add_problem_point->currentIndex()][ui->add_problem_difficulty->currentIndex()-1][i]==0)
        {
            final_problem_num=ui->add_problem_point->currentIndex()*1000+(ui->add_problem_difficulty->currentIndex()-1)*100+i;break;
        }
    }
    if (final_problem_num==-1)
    {
        QMessageBox::warning(this,tr("错误"),tr("该属性的题目数量已达到最大上限，请选择其它属性！"),QMessageBox::Ok);
        return;
    }

    //获取题目编号
    std::string problem_id=std::to_string(final_problem_num);
    QString strFileName=QString::fromStdString(problem_id);

    //拷贝文件：reference:https://www.csdn.net/tags/OtDacg4sNDg0ODgtYmxvZwO0O0OO0O0O.html
    //注意在字符串中的转义：\\代表'\'
    //拷贝题面
    QString strFileOrg=ui->problem_file_path->text();
    QFile::copy(strFileOrg, "./problems/P"+strFileName+".txt");
    strFileOrg=ui->problem_input_path->text();
    QFile::copy(strFileOrg, "./problem_case/P"+strFileName+".in");
    strFileOrg=ui->problem_output_path->text();
    QFile::copy(strFileOrg, "./problem_case/P"+strFileName+".out");

    //修改对应题号的时间限制以及题目总量
    std::string new_time_limit=ui->problem_time_choose->currentText().toStdString();
    if (new_time_limit=="200ms")
        practice_problem_time_limitation[final_problem_num/1000][(final_problem_num/100)%5][final_problem_num%100]=200;
    else if (new_time_limit=="500ms")
        practice_problem_time_limitation[final_problem_num/1000][(final_problem_num/100)%5][final_problem_num%100]=500;
    else if (new_time_limit=="1000ms")
        practice_problem_time_limitation[final_problem_num/1000][(final_problem_num/100)%5][final_problem_num%100]=1000;
    else if (new_time_limit=="2000ms")
        practice_problem_time_limitation[final_problem_num/1000][(final_problem_num/100)%5][final_problem_num%100]=2000;
    else if (new_time_limit=="5000ms")
        practice_problem_time_limitation[final_problem_num/1000][(final_problem_num/100)%5][final_problem_num%100]=5000;
    //文件层面操作
    //总时间限制文件,直接重新覆盖写入
    std::string problemtime_file_path{"./problem_time_limitation.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problemtime(problemtime_file_path.c_str());
    if(!problemtime.open(QIODevice::WriteOnly | QIODevice::Truncate))
    //reference:http://c.biancheng.net/view/1877.html
    //reference:https://blog.csdn.net/zhouyingge1104/article/details/124696616
    {
        QMessageBox::warning(this,tr("错误"),tr("复制遇到未知错误，请重试！"),QMessageBox::Ok);
        return;
    }
    QTextStream txtoutput(&problemtime);
    for (int i=1;i<=9;i++)
    {
        for (int j=0;j<=4;j++)
        {
            for (int k=0;k<100;k++)
                txtoutput<<practice_problem_time_limitation[i][j][k]<<"\n";
        }
    }
    problemtime.close();

    //文件层面操作
    //题量限制文件
    int problem_num[10][6]={};
    int tmpcnt=0;
    std::string problemnum_file_path{"./problem_num.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problemnum(problemnum_file_path.c_str());
    if(!problemnum.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,tr("错误"),tr("复制遇到未知错误，请重试！"),QMessageBox::Ok);
        return;
    }
    QTextStream txtInput(&problemnum);
    while(!txtInput.atEnd()&&tmpcnt<45)
    {
        problem_num[1+tmpcnt/5][tmpcnt%5]=txtInput.readLine().toInt();
        tmpcnt++;
    }
    problemnum.close();
    //修改数值
    problem_num[final_problem_num/1000][(final_problem_num/100)%5]++;
    if(!problemnum.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        QMessageBox::warning(this,tr("错误"),tr("复制遇到未知错误，请重试！"),QMessageBox::Ok);
        return;
    }
    QTextStream txtoutput2(&problemnum);
    for (int i=1;i<=9;i++)
    {
        for (int j=0;j<=4;j++)
            txtoutput2<<problem_num[i][j]<<"\n";
    }
    problemnum.close();

    //成功的提示信息
    std::string add_result{};
    add_result.append("导入题目成功，该题对应编号为");
    add_result.append(problem_id);
    QMessageBox::information(this,tr("提示"),tr(add_result.c_str()),QMessageBox::Ok);
}

//读取所有题目的通过情况，多处用到
void frmNavButton::init_acnum()
{
    //读取所有题目的通过情况
    int tmpcnt=0;
    std::string accepted_file_path{"./accepted_problem.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile accepted(accepted_file_path.c_str());
    if(!accepted.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream txtInput(&accepted);
    while(!txtInput.atEnd()&&tmpcnt<4500)
    {
        practice_problem_accepted[1+tmpcnt/500][(tmpcnt%500)/100][tmpcnt%100]=txtInput.readLine().toInt();
        tmpcnt++;
    }
    accepted.close();
}

void frmNavButton::init_morefunction_links()
{

    //隐藏【更多】下的【快速入门】、【友情链接】里用按钮实现的所有按钮的背景与边框
    //reference1:https://www.it610.com/article/1306320120771022848.htm
    //reference2:https://blog.csdn.net/bianchengjingling22/article/details/88794068
    //【快速入门】
    ui->click_for_instructions->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->click_for_instructions->setStyleSheet("border:none");   //隐藏边框线
    ui->click_for_instructions->QPushButton::setFlat(true);
    ui->for_instructions->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->for_instructions->setStyleSheet("border:none");   //隐藏边框线
    ui->for_instructions->QPushButton::setFlat(true);
    //【友情链接】
    ui->link_1_name->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_1_name->setStyleSheet("border:none");   //隐藏边框线
    ui->link_1_name->QPushButton::setFlat(true);
    ui->link_1_link->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_1_link->setStyleSheet("border:none");   //隐藏边框线
    ui->link_1_link->QPushButton::setFlat(true);
    ui->link_2_name->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_2_name->setStyleSheet("border:none");   //隐藏边框线
    ui->link_2_name->QPushButton::setFlat(true);
    ui->link_2_link->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_2_link->setStyleSheet("border:none");   //隐藏边框线
    ui->link_2_link->QPushButton::setFlat(true);
    ui->link_3_name->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_3_name->setStyleSheet("border:none");   //隐藏边框线
    ui->link_3_name->QPushButton::setFlat(true);
    ui->link_3_link->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_3_link->setStyleSheet("border:none");   //隐藏边框线
    ui->link_3_link->QPushButton::setFlat(true);
    ui->link_4_name->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_4_name->setStyleSheet("border:none");   //隐藏边框线
    ui->link_4_name->QPushButton::setFlat(true);
    ui->link_4_link->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_4_link->setStyleSheet("border:none");   //隐藏边框线
    ui->link_4_link->QPushButton::setFlat(true);
    ui->link_5_name->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_5_name->setStyleSheet("border:none");   //隐藏边框线
    ui->link_5_name->QPushButton::setFlat(true);
    ui->link_5_link->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_5_link->setStyleSheet("border:none");   //隐藏边框线
    ui->link_5_link->QPushButton::setFlat(true);
    ui->link_6_name->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_6_name->setStyleSheet("border:none");   //隐藏边框线
    ui->link_6_name->QPushButton::setFlat(true);
    ui->link_6_link->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->link_6_link->setStyleSheet("border:none");   //隐藏边框线
    ui->link_6_link->QPushButton::setFlat(true);
}

//3.【快速入门】查看完整教程链接pdf文件
void frmNavButton::on_click_for_instructions_clicked()
{
    QString strDoc = "./Instructions.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(strDoc));
}

//4.【友情链接】链接相关网页
void frmNavButton::on_link_1_name_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://www.pku.edu.cn"));
}

void frmNavButton::on_link_1_link_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://www.pku.edu.cn"));
}

void frmNavButton::on_link_2_name_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://course.pku.edu.cn"));
}

void frmNavButton::on_link_2_link_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://course.pku.edu.cn"));
}

void frmNavButton::on_link_3_name_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://portal.pku.edu.cn"));
}

void frmNavButton::on_link_3_link_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://portal.pku.edu.cn"));
}

void frmNavButton::on_link_4_name_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("https://programming.pku.edu.cn"));
}

void frmNavButton::on_link_4_link_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("https://programming.pku.edu.cn"));
}

void frmNavButton::on_link_5_name_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://openjudge.cn"));
}

void frmNavButton::on_link_5_link_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://openjudge.cn"));
}

void frmNavButton::on_link_6_name_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://www.luogu.com.cn"));
}

void frmNavButton::on_link_6_link_clicked()
{
    //打开网页,reference:https://www.bbsmax.com/A/kvJ3EQeXdg/
    QDesktopServices::openUrl(QUrl("http://www.luogu.com.cn"));
}
//【更多功能】相关函数到此结束
//recently updated:2022.6.27

void frmNavButton::on_btn1_turing_clicked()
{
    turing_pre * new_turing = new turing_pre;
    new_turing->show();
}

void frmNavButton::on_btn2_bool_clicked()
{
    bool1 * new_bool = new bool1;
    new_bool->show();
}

void frmNavButton::on_btn3_plusm_clicked()
{
    plusm * new_plus = new plusm;
    new_plus->show();
}

void frmNavButton::on_btn4_algo_clicked()
{
    algorithm1 * new_algo = new algorithm1;
    new_algo->show();
}
