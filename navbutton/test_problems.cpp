//y1.模拟测试-界面 by yk
//class test_problems
//author:Yang Kai
//recently updated:2022.6.27
#include "test_problems.h"
#include "ui_test_problems.h"
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include <vector>
#include <string>
#include <QFileDialog>//文件对话框对应的头文件
#include <QProcess>
#include <direct.h>//_getcwd函数对应头文件
#include <QMessageBox>
#include "frmnavbutton.h"//包含一个frmnavbutton的指针，用于修改父指针的ac题目情况

test_problems::test_problems(frmNavButton * d,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test_problems)
{
    ui->setupUi(this);
    dad=d;
    //实现阻塞,模拟测试时禁用其它功能
    //reference:https://www.it610.com/article/1275330866029019136.htm
    setAttribute(Qt::WA_ShowModal, true);

    //定义触发槽函数
    exam_time=new QTimer(this);
    connect(exam_time, &QTimer::timeout, this, &test_problems::exam_counttime);

    this->setWindowIcon(QIcon("://images/lion.png"));//设置页面图标
    this->setWindowTitle("模拟测试 - PKU ICA Helper 0.1.0");//设置页面标题

    //读取各个题目类型难度的题量
    std::string problemnum_file_path{"./problem_num.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problemnum(problemnum_file_path.c_str());
    if(!problemnum.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream txtInput(&problemnum);
    int tmpcnt=0;
    while(!txtInput.atEnd()&&tmpcnt<45)
    {
        totalproblem_num[1+tmpcnt/5][tmpcnt%5]=txtInput.readLine().toInt();
        tmpcnt++;
    }
    problemnum.close();

    tmpcnt=0;
    std::string problemtime_file_path{"./problem_time_limitation.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problemtime(problemtime_file_path.c_str());
    if(!problemtime.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream txtInput2(&problemtime);
    while(!txtInput2.atEnd()&&tmpcnt<4500)
    {
        eachproblem_time[1+tmpcnt/500][(tmpcnt%500)/100][tmpcnt%100]=txtInput2.readLine().toInt();
        tmpcnt++;
    }
    problemtime.close();

    //读取所有题目的通过情况
    tmpcnt=0;
    std::string accepted_file_path{"./accepted_problem.txt"};
    //打开文件选择对话框，选择文件，获取文件路径
    QFile accepted(accepted_file_path.c_str());
    if(!accepted.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream txtInput3(&accepted);
    while(!txtInput3.atEnd()&&tmpcnt<4500)
    {
        accepted_problems[1+tmpcnt/500][(tmpcnt%500)/100][tmpcnt%100]=txtInput3.readLine().toInt();
        tmpcnt++;
    }
    accepted.close();
}

test_problems::~test_problems()
{
    if (exam_time)
    {
        if (exam_time->isActive()==true)
            exam_time->stop();
        delete exam_time;
        exam_time=nullptr;
    }
    delete ui;
}

void test_problems::set_exam_problem()//设置题目按钮不可用
{
    if (exam_problemnum<9)
        ui->problem_9->setEnabled(false);
    if (exam_problemnum<8)
        ui->problem_8->setEnabled(false);
    if (exam_problemnum<7)
        ui->problem_7->setEnabled(false);
    if (exam_problemnum<6)
        ui->problem_6->setEnabled(false);
    if (exam_problemnum<5)
        ui->problem_5->setEnabled(false);
}

void test_problems::exam_counttime()
{
    if (exam_time->isActive() == false)//当前定时器未激活时，激活定时器
          exam_time->start(1000);
    //定时器，每触发一次，时间减1，直到最后一次倒计时为0秒时，停止定时器
    exam_nowtime-=1;
    //使用QLabel控件显示倒计时的时间
    std::string set_time_remain{"建议用时剩余："};
    int rest_hours=exam_nowtime/3600;
    std::string set_time_tmp=std::to_string(rest_hours);
    set_time_remain.append(set_time_tmp);
    set_time_remain.append("时");
    int rest_miniutes=(exam_nowtime%3600)/60;
    set_time_tmp=std::to_string(rest_miniutes);
    set_time_remain.append(set_time_tmp);
    set_time_remain.append("分");
    int rest_seconds=exam_nowtime%60;
    set_time_tmp=std::to_string(rest_seconds);
    set_time_remain.append(set_time_tmp);
    set_time_remain.append("秒");
    ui->time_remain->setText(set_time_remain.c_str());
    if(exam_nowtime == 0)//说明，定时器最后一次触发，可以做停止以及其它操作
        exam_time->stop();
    //reference:https://www.zhihu.com/question/497018386/answer/2209614586
}

void test_problems::choose_problems()
{
    std::vector<int> all_problems_available;
    //统一说明：题号有四位，第一位代表考点1-9，第二位代表难度0-4，后两位代表这一层次的第几题
    for (int i=1;i<=9;i++)
    {
        if (exam_points[i]==1)
        {
            if (exam_difficulty==0)//简单,放简单和中档题
            {
                for (int j=0;j<totalproblem_num[i][0];j++)//这里的3代表题量
                    all_problems_available.push_back(1000*i+j);
                for (int j=0;j<totalproblem_num[i][1];j++)
                    all_problems_available.push_back(1000*i+100+j);
                for (int j=0;j<totalproblem_num[i][2];j++)
                    all_problems_available.push_back(1000*i+200+j);
            }
            else if (exam_difficulty==1)//中档,放中档和困难题
            {
                for (int j=0;j<totalproblem_num[i][1];j++)//这里的3代表题量
                    all_problems_available.push_back(1000*i+100+j);
                for (int j=0;j<totalproblem_num[i][2];j++)
                    all_problems_available.push_back(1000*i+200+j);
                for (int j=0;j<totalproblem_num[i][3];j++)
                    all_problems_available.push_back(1000*i+300+j);
            }
            else if (exam_difficulty==2)//困难,放困难题
            {
                for (int j=0;j<totalproblem_num[i][2];j++)
                    all_problems_available.push_back(1000*i+200+j);
                for (int j=0;j<totalproblem_num[i][3];j++)
                    all_problems_available.push_back(1000*i+300+j);
                for (int j=0;j<totalproblem_num[i][4];j++)
                    all_problems_available.push_back(1000*i+400+j);
            }
        }
    }
    std::random_shuffle(all_problems_available.begin(),all_problems_available.end());
    for (int i=1;i<=exam_problemnum;i++)
    {
        int tmp_id=all_problems_available[i-1];
        problem_idnum[i]=tmp_id;
        std::string tmp=std::to_string(tmp_id);
        problem_id[i]="P"+tmp;
        problem_name[i]=problem_id[i];
        problem_id[i]=problem_id[i]+".txt";
    }
    return;
}

int test_problems::get_problem_num()
{
    if (ui->problem_1->isChecked())
        return 1;
    if (ui->problem_2->isChecked())
        return 2;
    if (ui->problem_3->isChecked())
        return 3;
    if (ui->problem_4->isChecked())
        return 4;
    if (ui->problem_5->isChecked())
        return 5;
    if (ui->problem_6->isChecked())
        return 6;
    if (ui->problem_7->isChecked())
        return 7;
    if (ui->problem_8->isChecked())
        return 8;
    if (ui->problem_9->isChecked())
        return 9;
}

void test_problems::show_problems(int i)
{
    std::string problem_file_path{"./problems/"};
    problem_file_path.append(problem_id[i]);
    //打开文件选择对话框，选择文件，获取文件路径
    QFile problem(problem_file_path.c_str());
    if(!problem.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->problem_details->setText(problem_file_path.c_str());
        return;
    }
    QTextStream txtInput(&problem);
    txtInput.setCodec("utf-8");
    QString lineStr;
    while(!txtInput.atEnd())
    {
        lineStr = lineStr + txtInput.readLine() + "\n";
    }
    ui->problem_details->setText(lineStr);//显示txt文件内容
    problem.close();
}

void test_problems::set_solving_status(int problem_num,std::string status)//设置通过数等信息
{
    if (accepted_total[problem_num]==1)//已经ac
        return;
    if (status=="AC")
    {
        accepted_total[problem_num]=1;
        accepted_totalnum++;
        std::string t{"当前通过题数："};
        t.append(std::to_string(accepted_totalnum));
        ui->accepted_num->setText(t.c_str());
        if (exam_nowtime>0)
            accepted_intime[problem_num]=1;
        if (problem_num==1)
        {
            ui->problem_1->setText("题1(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_1->setFont(font);
            ui->problem_1->setStyleSheet("color:blue");
        }
        if (problem_num==2)
        {
            ui->problem_2->setText("题2(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_2->setFont(font);
            ui->problem_2->setStyleSheet("color:blue");
        }
        if (problem_num==3)
        {
            ui->problem_3->setText("题3(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_3->setFont(font);
            ui->problem_3->setStyleSheet("color:blue");
        }
        if (problem_num==4)
        {
            ui->problem_4->setText("题4(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_4->setFont(font);
            ui->problem_4->setStyleSheet("color:blue");
        }
        if (problem_num==5)
        {
            ui->problem_5->setText("题5(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_5->setFont(font);
            ui->problem_5->setStyleSheet("color:blue");
        }
        if (problem_num==6)
        {
            ui->problem_6->setText("题6(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_6->setFont(font);
            ui->problem_6->setStyleSheet("color:blue");
        }
        if (problem_num==7)
        {
            ui->problem_7->setText("题7(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_7->setFont(font);
            ui->problem_7->setStyleSheet("color:blue");
        }
        if (problem_num==8)
        {
            ui->problem_8->setText("题8(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_8->setFont(font);
            ui->problem_8->setStyleSheet("color:blue");
        }
        if (problem_num==9)
        {
            ui->problem_9->setText("题9(AC)");
            QFont font("Microsoft YaHei");
            ui->problem_9->setFont(font);
            ui->problem_9->setStyleSheet("color:blue");
        }
    }
    else if (status=="CE")
    {
        if (problem_num==1)
        {
            ui->problem_1->setText("题1(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_1->setFont(font);
            ui->problem_1->setStyleSheet("color:green");
        }
        if (problem_num==2)
        {
            ui->problem_2->setText("题2(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_2->setFont(font);
            ui->problem_2->setStyleSheet("color:green");
        }
        if (problem_num==3)
        {
            ui->problem_3->setText("题3(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_3->setFont(font);
            ui->problem_3->setStyleSheet("color:green");
        }
        if (problem_num==4)
        {
            ui->problem_4->setText("题4(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_4->setFont(font);
            ui->problem_4->setStyleSheet("color:green");
        }
        if (problem_num==5)
        {
            ui->problem_5->setText("题5(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_5->setFont(font);
            ui->problem_5->setStyleSheet("color:green");
        }
        if (problem_num==6)
        {
            ui->problem_6->setText("题6(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_6->setFont(font);
            ui->problem_6->setStyleSheet("color:green");
        }
        if (problem_num==7)
        {
            ui->problem_7->setText("题7(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_7->setFont(font);
            ui->problem_7->setStyleSheet("color:green");
        }
        if (problem_num==8)
        {
            ui->problem_8->setText("题8(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_8->setFont(font);
            ui->problem_8->setStyleSheet("color:green");
        }
        if (problem_num==9)
        {
            ui->problem_9->setText("题9(CE)");
            QFont font("Microsoft YaHei");
            ui->problem_9->setFont(font);
            ui->problem_9->setStyleSheet("color:green");
        }
    }
    else
    {
        std::string set_result{"题"};
        set_result.append(std::to_string(problem_num));
        set_result.append("(");
        set_result.append(status);
        set_result.append(")");
        if (problem_num==1)
        {
            ui->problem_1->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_1->setFont(font);
            ui->problem_1->setStyleSheet("color:red");
        }
        if (problem_num==2)
        {
            ui->problem_2->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_2->setFont(font);
            ui->problem_2->setStyleSheet("color:red");
        }
        if (problem_num==3)
        {
            ui->problem_3->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_3->setFont(font);
            ui->problem_3->setStyleSheet("color:red");
        }
        if (problem_num==4)
        {
            ui->problem_4->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_4->setFont(font);
            ui->problem_4->setStyleSheet("color:red");
        }
        if (problem_num==5)
        {
            ui->problem_5->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_5->setFont(font);
            ui->problem_5->setStyleSheet("color:red");
        }
        if (problem_num==6)
        {
            ui->problem_6->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_6->setFont(font);
            ui->problem_6->setStyleSheet("color:red");
        }
        if (problem_num==7)
        {
            ui->problem_7->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_7->setFont(font);
            ui->problem_7->setStyleSheet("color:red");
        }
        if (problem_num==8)
        {
            ui->problem_8->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_8->setFont(font);
            ui->problem_8->setStyleSheet("color:red");
        }
        if (problem_num==9)
        {
            ui->problem_9->setText(set_result.c_str());
            QFont font("Microsoft YaHei");
            ui->problem_9->setFont(font);
            ui->problem_9->setStyleSheet("color:red");
        }
    }
}

void test_problems::update_accepted(int pro_id,int re)
{
    //修改通过情况
    if (re==1)//ac
        accepted_problems[pro_id/1000][(pro_id/100)%5][pro_id%100]=1;
    else if (accepted_problems[pro_id/1000][(pro_id/100)%5][pro_id%100]==0)//之前从未尝试过
        accepted_problems[pro_id/1000][(pro_id/100)%5][pro_id%100]=-1;
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
                txtoutput<<accepted_problems[i][j][k]<<"\n";
        }
    }
    ac_file.close();

    //更改父指针指向的frmnavbutton对象的ac题目情况
    dad->init_acnum();
}

void test_problems::on_submit_code_clicked()
{
    int problem_now=get_problem_num();
    ui->result->setText("");
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
    l<<problem_name[problem_now].c_str();
    int problem_idin=problem_idnum[problem_now];//当前提交的题目id,eg.1000
    std::string test_time=std::to_string(eachproblem_time[problem_idin/1000][(problem_idin/100)%10][problem_idin%100]);
    l<<test_time.c_str();
    char path_judgingprogram[600]={};
    sprintf(path_judgingprogram,"%s%s",cwd,"\\judge_program.exe");
    QProcess cmd(this);
    cmd.start(path_judgingprogram, l);
    cmd.waitForFinished();
    QByteArray judge_result = cmd.readAllStandardOutput();
    int len=judge_result.length();//评测程序日志长度
    char* s=judge_result.data();//评测程序日志
    //cout<<s<<endl;
    //cout<<s[len-5]<<endl;//-5是倒数第3位，我也不知道为啥…什么玄学玩意，估计是\r\n结尾吧…
    if (s[len-5]=='d')
    {
        ui->result->setText("Time Limit Exceeded");
        QFont font("Microsoft YaHei");
        ui->result->setFont(font);
        set_solving_status(problem_now,"TLE");
        ui->result->setStyleSheet("color:red");
        update_accepted(problem_idin,-1);
    }
    else if (s[len-5]=='t')
    {
        ui->result->setText("Accepted");
        QFont font("Microsoft YaHei");
        ui->result->setFont(font);
        set_solving_status(problem_now,"AC");
        ui->result->setStyleSheet("color:blue");
        update_accepted(problem_idin,1);
    }
    else if (s[len-5]=='w')
    {
        ui->result->setText("Wrong Answer");
        QFont font("Microsoft YaHei");
        ui->result->setFont(font);
        set_solving_status(problem_now,"WA");
        ui->result->setStyleSheet("color:red");
        update_accepted(problem_idin,-1);
    }
    else if (s[len-5]=='r')
    {
        if (s[len-10]=='l')
        {
            ui->result->setText("Compile Error");
            QFont font("Microsoft YaHei");
            ui->result->setFont(font);
            set_solving_status(problem_now,"CE");
            ui->result->setStyleSheet("color:green");
            update_accepted(problem_idin,-1);
        }
        else if (s[len-10]=='m')
        {
            ui->result->setText("Runtime Error");
            QFont font("Microsoft YaHei");
            ui->result->setFont(font);
            set_solving_status(problem_now,"RE");
            ui->result->setStyleSheet("color:red");
            update_accepted(problem_idin,-1);
        }
        else if (s[len-10]=='o')
        {
            ui->result->setText("Presentation Error");
            QFont font("Microsoft YaHei");
            ui->result->setFont(font);
            set_solving_status(problem_now,"PE");
            ui->result->setStyleSheet("color:red");
            update_accepted(problem_idin,-1);
        }
    }
    return;
}

//按左侧的题号的触发
void test_problems::on_problem_1_clicked()
{
    show_problems(1);
    ui->result->setText("");
}
void test_problems::on_problem_2_clicked()
{
    show_problems(2);
    ui->result->setText("");
}
void test_problems::on_problem_3_clicked()
{
    show_problems(3);
    ui->result->setText("");
}
void test_problems::on_problem_4_clicked()
{
    show_problems(4);
    ui->result->setText("");
}
void test_problems::on_problem_5_clicked()
{
    show_problems(5);
    ui->result->setText("");
}
void test_problems::on_problem_6_clicked()
{
    show_problems(6);
    ui->result->setText("");
}
void test_problems::on_problem_7_clicked()
{
    show_problems(7);
    ui->result->setText("");
}
void test_problems::on_problem_8_clicked()
{
    show_problems(8);
    ui->result->setText("");
}
void test_problems::on_problem_9_clicked()
{
    show_problems(9);
    ui->result->setText("");
}

void test_problems::on_exit_exam_clicked()//退出考试
{
    int confirm=QMessageBox::question(this,tr("确认"),tr("确认结束模拟测试？"),QMessageBox::Ok,QMessageBox::Cancel);
    if (confirm==QMessageBox::Ok)
    {
        std::string exam_result{"模拟测试结果\n【题目数量】"};
        exam_result.append(std::to_string(exam_problemnum));
        exam_result.append("\n【题目难度】");
        if (exam_difficulty==0)
            exam_result.append("简单/Easy\n");
        else if (exam_difficulty==1)
            exam_result.append("中等/Medium\n");
        else if (exam_difficulty==2)
            exam_result.append("困难/Hard\n");
        int acnum1=0,acnum2=0;
        for (int i=1;i<=exam_problemnum;i++)
        {
            acnum1+=accepted_total[i];
            acnum2+=accepted_intime[i];
        }
        exam_result.append("【总通过数】");
        exam_result.append(std::to_string(acnum1));
        exam_result.append("\n【建议用时内通过数】");
        exam_result.append(std::to_string(acnum2));
        QMessageBox::information(this,tr("模拟测试结果"),tr(exam_result.c_str()),QMessageBox::Ok);
        close();
    }
}
