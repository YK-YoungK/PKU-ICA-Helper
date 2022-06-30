#ifndef TEST_PROBLEMS_H
#define TEST_PROBLEMS_H

#include <QWidget>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include <vector>
#include <string>
#include <QFileDialog>//文件对话框对应的头文件
#include <QProcess>
#include <direct.h>//_getcwd函数对应头文件

//note:由于frmnavbotton.h和test_problems.h头文件互相包含，因此需要添加以下这段内容
//reference:https://wenku.baidu.com/view/57f6f25aa16925c52cc58bd63186bceb19e8ed21.html
class frmNavButton;
#include "frmnavbutton.h"//包含乐一个frmnavbutton的指针，用于修改父指针的ac题目情况
//class test_problems;

namespace Ui {
class test_problems;
}

class test_problems : public QWidget
{
    Q_OBJECT

public:
    explicit test_problems(frmNavButton* d,QWidget *parent = 0);
    ~test_problems();
    void exam_counttime();
    QTimer* exam_time;
    int exam_totaltime;//考试总时间，单位为秒
    int exam_nowtime;//当前剩余时间，单位为秒
    int exam_problemnum;//题目数量
    int exam_difficulty;//难度,0简单1中等2困难
    void set_exam_problem();//设置题目按钮不可用
    int exam_points[10]={0};//涉及考点
    int accepted_intime[10]={0};//在限时内的通过情况
    int accepted_total[10]={0};//总通过情况
    int accepted_totalnum=0;//总通过数
    std::string problem_id[10]{};//随机抽取的题目id号(eg.P1001.txt)
    std::string problem_name[10]{};//随机抽取题目的名称(eg.P1001)
    int problem_idnum[10]{};//随机抽取的题目id编号(eg.1001)
    int get_problem_num();//获取现在在哪一道题目上
    void choose_problems();//随机抽取题号
    //void show_problems(int i);//在测试界面显示题目内容,i为第几题
    //void set_solving_status(int problem_num,std::string status);//设置通过数等信息
    int totalproblem_num[10][6]{};//共9模块(1-9),每个模块难度0-4的题目个数
    int eachproblem_time[10][6][105]{};//共9模块(1-9),每个模块难度0-4的题目,逐题的时间限制
    int accepted_problems[10][6][105]{};//9个模块所有题目的通过情况
    frmNavButton* dad;
    //void update_accepted(int pro_id,int re);

private slots:
    void on_problem_1_clicked();

    void on_submit_code_clicked();

    void on_problem_2_clicked();

    void on_problem_3_clicked();

    void on_problem_4_clicked();

    void on_problem_5_clicked();

    void on_problem_6_clicked();

    void on_problem_7_clicked();

    void on_problem_8_clicked();

    void on_problem_9_clicked();

    void on_exit_exam_clicked();

    void show_problems(int i);//在测试界面显示题目内容,i为第几题
    void set_solving_status(int problem_num,std::string status);//设置通过数等信息
    void update_accepted(int pro_id,int re);

private:
    Ui::test_problems *ui;
};

#endif // TEST_PROBLEMS_H
