#ifndef FRMNAVBUTTON_H
#define FRMNAVBUTTON_H

#include <QWidget>



//note:由于frmnavbotton.h和test_problems.h头文件互相包含，因此需要添加以下这段内容
//reference:https://wenku.baidu.com/view/57f6f25aa16925c52cc58bd63186bceb19e8ed21.html
class test_problems;
#include "test_problems.h"
//class test_problems;

class NavButton;

namespace Ui {
class frmNavButton;
}

class frmNavButton : public QWidget
{
    Q_OBJECT

public:
    explicit frmNavButton(QWidget *parent = 0);
    ~frmNavButton();
    int practice_problem_id_now=-1;//自由练习,提交的题号,初始值-1
    int practice_problem_time_limitation[10][6][105]{};//共9模块(1-9),每个模块难度0-4的题目,逐题的时间限制
    int practice_problem_accepted[10][6][105]{};//所有题目的通过情况
    std::vector<int> practice_problem_available{};//所有可以使用的problem,用于自由练习的随机抽题
    void init_acnum();//改为public,让test_problems的对象中的父指针可以访问到

private:
    Ui::frmNavButton *ui;
    QList<int> icons;
    QList<NavButton *> btns;

private slots:
    void initForm();
    void initBtn();
    void buttonClick();
    void initEchoPage();
    void on_test_main_reset_clicked();
    void on_diff_easy_clicked();
    void on_diff_medium_clicked();
    void on_diff_hard_clicked();
    void on_num4_clicked();
    void on_point1_clicked();
    void on_num5_clicked();
    void on_num6_clicked();
    void on_num7_clicked();
    void on_num8_clicked();
    void on_num9_clicked();
    void on_point2_clicked();
    void on_point3_clicked();
    void on_point4_clicked();
    void on_point5_clicked();
    void on_point6_clicked();
    void on_point7_clicked();
    void on_point8_clicked();
    void on_point9_clicked();
    void on_test_main_begin_clicked();
    void on_std_path_clicked();
    void on_test_path_clicked();
    void on_input_path_clicked();
    void on_echo_main_begin_clicked();
    void on_echo_reset_clicked();
    void on_loop_reset_clicked();
    void on_program_generation_clicked();
    void on_No_input_clicked();
    void on_manual_input_clicked();
    //自由练习界面
    void initPractice();//初始化
    void on_practice_show_problem_clicked();
    void on_practice_random_clicked();
    void on_practice_reset_clicked();
    void on_practice_submit_clicked();
    void upd_accepted(int pro_id,int re);

    //更多功能界面
    void on_morefun_add_problem_clicked();
    void on_morefun_statistics_clicked();
    void on_morefun_beginner_clicked();
    void on_morefun_links_clicked();
    void on_problem_file_search_clicked();
    void check_add_problem_available();//检查添加题目是否可用
    void on_problem_input_search_clicked();
    void on_problem_output_search_clicked();
    void on_add_problem_reset_clicked();
    void on_add_problem_point_currentIndexChanged(int index);
    void on_add_problem_difficulty_currentIndexChanged(int index);
    void on_problem_time_choose_currentIndexChanged(int index);
    void on_add_problem_confirm_clicked();
    //void init_acnum();
    void on_click_for_instructions_clicked();
    void init_morefunction_links();//初始化所有链接按钮形状
    void on_link_1_name_clicked();
    void on_link_1_link_clicked();
    void on_link_2_name_clicked();
    void on_link_2_link_clicked();
    void on_link_3_name_clicked();
    void on_link_3_link_clicked();
    void on_link_4_name_clicked();
    void on_link_4_link_clicked();
    void on_link_5_name_clicked();
    void on_link_5_link_clicked();
    void on_link_6_name_clicked();
    void on_link_6_link_clicked();
    void set_function_buttoncolor();//设置【更多】四个功能按钮的背景色与字体色
    void on_btn1_turing_clicked();
    void on_btn2_bool_clicked();
    void on_btn3_plusm_clicked();
    void on_btn4_algo_clicked();
};

#endif // FRMNAVBUTTON_H
