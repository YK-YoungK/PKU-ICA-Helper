/********************************************************************************
** Form generated from reading UI file 'frmnavbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMNAVBUTTON_H
#define UI_FRMNAVBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "navbutton.h"

QT_BEGIN_NAMESPACE

class Ui_frmNavButton
{
public:
    QWidget *widgetNav;
    QVBoxLayout *verticalLayout_2;
    NavButton *navButton0;
    NavButton *navButton2;
    NavButton *navButton1;
    NavButton *navButton3;
    NavButton *navButton4;
    NavButton *navButton5;
    NavButton *navButton6;
    NavButton *navButton7;
    QStackedWidget *stackedWidget;
    QWidget *page0_Main;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *page1_Echo;
    QPushButton *echo_main_begin;
    QGroupBox *stdGroup;
    QLineEdit *std_display;
    QPushButton *std_path;
    QGroupBox *testGroup;
    QLineEdit *test_display;
    QPushButton *test_path;
    QGroupBox *inputGroup;
    QLineEdit *input_display;
    QRadioButton *No_input;
    QRadioButton *manual_input;
    QRadioButton *program_generation;
    QPushButton *input_path;
    QPushButton *echo_reset;
    QGroupBox *loopGroup;
    QLineEdit *loop_num;
    QPushButton *loop_reset;
    QWidget *page2_Test;
    QGroupBox *test_main_difficulty;
    QRadioButton *diff_easy;
    QRadioButton *diff_medium;
    QRadioButton *diff_hard;
    QGroupBox *test_main_points;
    QCheckBox *point1;
    QCheckBox *point2;
    QCheckBox *point3;
    QCheckBox *point4;
    QCheckBox *point5;
    QCheckBox *point6;
    QCheckBox *point7;
    QCheckBox *point8;
    QCheckBox *point9;
    QGroupBox *test_main_num;
    QRadioButton *num4;
    QRadioButton *num5;
    QRadioButton *num6;
    QRadioButton *num7;
    QRadioButton *num8;
    QRadioButton *num9;
    QPushButton *test_main_begin;
    QPushButton *test_main_reset;
    QWidget *page3_Demo;
    QPushButton *btn1_turing;
    QPushButton *btn2_bool;
    QPushButton *btn3_plusm;
    QPushButton *btn4_algo;
    QLabel *add_problem_note_2;
    QLabel *add_problem_note_3;
    QLabel *add_problem_note_4;
    QLabel *add_problem_note_5;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *page4_Others;
    QGroupBox *practice_judging_result;
    QLabel *practice_label;
    QPushButton *practice_submit;
    QTextBrowser *practice_problem;
    QGroupBox *practice_problem_num_box;
    QLineEdit *practice_get_problemid;
    QPushButton *practice_show_problem;
    QPushButton *practice_random;
    QPushButton *practice_reset;
    QWidget *page5_Setting;
    QStackedWidget *more_function;
    QWidget *more_fun0;
    QLabel *label_5;
    QWidget *more_fun1;
    QGroupBox *point_and_difficulty;
    QComboBox *add_problem_point;
    QComboBox *add_problem_difficulty;
    QGroupBox *problem_file;
    QLineEdit *problem_file_path;
    QPushButton *problem_file_search;
    QGroupBox *problem_input_file;
    QLineEdit *problem_input_path;
    QPushButton *problem_input_search;
    QGroupBox *problem_output_file;
    QLineEdit *problem_output_path;
    QPushButton *problem_output_search;
    QGroupBox *problem_time_limitation;
    QComboBox *problem_time_choose;
    QPushButton *add_problem_reset;
    QPushButton *add_problem_confirm;
    QLabel *add_problem_note;
    QWidget *more_fun2;
    QGroupBox *p_problem_list;
    QTextBrowser *pass_problem;
    QGroupBox *np_problem_list;
    QTextBrowser *no_pass_problem;
    QLabel *total_problem;
    QLabel *p_problem_num;
    QWidget *more_fun3;
    QLabel *label_2;
    QPushButton *click_for_instructions;
    QPushButton *for_instructions;
    QWidget *more_fun4;
    QPushButton *link_2_name;
    QPushButton *link_3_name;
    QPushButton *link_4_name;
    QPushButton *link_5_name;
    QPushButton *link_6_name;
    QPushButton *link_2_link;
    QPushButton *link_1_name;
    QPushButton *link_1_link;
    QPushButton *link_3_link;
    QPushButton *link_4_link;
    QPushButton *link_5_link;
    QPushButton *link_6_link;
    QPushButton *morefun_add_problem;
    QPushButton *morefun_statistics;
    QPushButton *morefun_beginner;
    QPushButton *morefun_links;
    QWidget *page6_About;
    QLabel *label_8;
    QLabel *label_6;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;

    void setupUi(QWidget *frmNavButton)
    {
        if (frmNavButton->objectName().isEmpty())
            frmNavButton->setObjectName(QStringLiteral("frmNavButton"));
        frmNavButton->resize(600, 360);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        frmNavButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("images/lion.png"), QSize(), QIcon::Normal, QIcon::Off);
        frmNavButton->setWindowIcon(icon);
        widgetNav = new QWidget(frmNavButton);
        widgetNav->setObjectName(QStringLiteral("widgetNav"));
        widgetNav->setGeometry(QRect(10, 0, 120, 361));
        verticalLayout_2 = new QVBoxLayout(widgetNav);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        navButton0 = new NavButton(widgetNav);
        navButton0->setObjectName(QStringLiteral("navButton0"));
        navButton0->setEnabled(true);

        verticalLayout_2->addWidget(navButton0);

        navButton2 = new NavButton(widgetNav);
        navButton2->setObjectName(QStringLiteral("navButton2"));

        verticalLayout_2->addWidget(navButton2);

        navButton1 = new NavButton(widgetNav);
        navButton1->setObjectName(QStringLiteral("navButton1"));

        verticalLayout_2->addWidget(navButton1);

        navButton3 = new NavButton(widgetNav);
        navButton3->setObjectName(QStringLiteral("navButton3"));

        verticalLayout_2->addWidget(navButton3);

        navButton4 = new NavButton(widgetNav);
        navButton4->setObjectName(QStringLiteral("navButton4"));

        verticalLayout_2->addWidget(navButton4);

        navButton5 = new NavButton(widgetNav);
        navButton5->setObjectName(QStringLiteral("navButton5"));

        verticalLayout_2->addWidget(navButton5);

        navButton6 = new NavButton(widgetNav);
        navButton6->setObjectName(QStringLiteral("navButton6"));

        verticalLayout_2->addWidget(navButton6);

        navButton7 = new NavButton(widgetNav);
        navButton7->setObjectName(QStringLiteral("navButton7"));

        verticalLayout_2->addWidget(navButton7);

        stackedWidget = new QStackedWidget(frmNavButton);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 0, 571, 461));
        page0_Main = new QWidget();
        page0_Main->setObjectName(QStringLiteral("page0_Main"));
        layoutWidget = new QWidget(page0_Main);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 60, 202, 220));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(5);
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        stackedWidget->addWidget(page0_Main);
        page1_Echo = new QWidget();
        page1_Echo->setObjectName(QStringLiteral("page1_Echo"));
        echo_main_begin = new QPushButton(page1_Echo);
        echo_main_begin->setObjectName(QStringLiteral("echo_main_begin"));
        echo_main_begin->setEnabled(false);
        echo_main_begin->setGeometry(QRect(330, 300, 71, 31));
        stdGroup = new QGroupBox(page1_Echo);
        stdGroup->setObjectName(QStringLiteral("stdGroup"));
        stdGroup->setGeometry(QRect(20, 10, 401, 71));
        std_display = new QLineEdit(stdGroup);
        std_display->setObjectName(QStringLiteral("std_display"));
        std_display->setGeometry(QRect(20, 30, 261, 21));
        std_path = new QPushButton(stdGroup);
        std_path->setObjectName(QStringLiteral("std_path"));
        std_path->setGeometry(QRect(300, 30, 80, 21));
        testGroup = new QGroupBox(page1_Echo);
        testGroup->setObjectName(QStringLiteral("testGroup"));
        testGroup->setGeometry(QRect(20, 90, 401, 71));
        test_display = new QLineEdit(testGroup);
        test_display->setObjectName(QStringLiteral("test_display"));
        test_display->setGeometry(QRect(20, 30, 261, 21));
        test_path = new QPushButton(testGroup);
        test_path->setObjectName(QStringLiteral("test_path"));
        test_path->setGeometry(QRect(300, 30, 80, 21));
        inputGroup = new QGroupBox(page1_Echo);
        inputGroup->setObjectName(QStringLiteral("inputGroup"));
        inputGroup->setGeometry(QRect(20, 170, 401, 101));
        input_display = new QLineEdit(inputGroup);
        input_display->setObjectName(QStringLiteral("input_display"));
        input_display->setGeometry(QRect(20, 60, 261, 21));
        No_input = new QRadioButton(inputGroup);
        No_input->setObjectName(QStringLiteral("No_input"));
        No_input->setGeometry(QRect(300, 30, 91, 16));
        manual_input = new QRadioButton(inputGroup);
        manual_input->setObjectName(QStringLiteral("manual_input"));
        manual_input->setGeometry(QRect(170, 30, 101, 16));
        program_generation = new QRadioButton(inputGroup);
        program_generation->setObjectName(QStringLiteral("program_generation"));
        program_generation->setGeometry(QRect(20, 30, 91, 16));
        input_path = new QPushButton(inputGroup);
        input_path->setObjectName(QStringLiteral("input_path"));
        input_path->setGeometry(QRect(300, 60, 80, 21));
        echo_reset = new QPushButton(page1_Echo);
        echo_reset->setObjectName(QStringLiteral("echo_reset"));
        echo_reset->setGeometry(QRect(240, 300, 71, 31));
        loopGroup = new QGroupBox(page1_Echo);
        loopGroup->setObjectName(QStringLiteral("loopGroup"));
        loopGroup->setGeometry(QRect(20, 280, 191, 61));
        loop_num = new QLineEdit(loopGroup);
        loop_num->setObjectName(QStringLiteral("loop_num"));
        loop_num->setEnabled(false);
        loop_num->setGeometry(QRect(20, 30, 81, 21));
        loop_reset = new QPushButton(loopGroup);
        loop_reset->setObjectName(QStringLiteral("loop_reset"));
        loop_reset->setEnabled(false);
        loop_reset->setGeometry(QRect(120, 30, 51, 21));
        stackedWidget->addWidget(page1_Echo);
        page2_Test = new QWidget();
        page2_Test->setObjectName(QStringLiteral("page2_Test"));
        test_main_difficulty = new QGroupBox(page2_Test);
        test_main_difficulty->setObjectName(QStringLiteral("test_main_difficulty"));
        test_main_difficulty->setGeometry(QRect(10, 20, 181, 121));
        diff_easy = new QRadioButton(test_main_difficulty);
        diff_easy->setObjectName(QStringLiteral("diff_easy"));
        diff_easy->setGeometry(QRect(20, 30, 115, 19));
        diff_medium = new QRadioButton(test_main_difficulty);
        diff_medium->setObjectName(QStringLiteral("diff_medium"));
        diff_medium->setGeometry(QRect(20, 60, 141, 19));
        diff_hard = new QRadioButton(test_main_difficulty);
        diff_hard->setObjectName(QStringLiteral("diff_hard"));
        diff_hard->setGeometry(QRect(20, 90, 115, 19));
        test_main_points = new QGroupBox(page2_Test);
        test_main_points->setObjectName(QStringLiteral("test_main_points"));
        test_main_points->setGeometry(QRect(220, 20, 201, 321));
        point1 = new QCheckBox(test_main_points);
        point1->setObjectName(QStringLiteral("point1"));
        point1->setGeometry(QRect(20, 30, 141, 19));
        point2 = new QCheckBox(test_main_points);
        point2->setObjectName(QStringLiteral("point2"));
        point2->setEnabled(true);
        point2->setGeometry(QRect(20, 60, 91, 19));
        point2->setCheckable(true);
        point3 = new QCheckBox(test_main_points);
        point3->setObjectName(QStringLiteral("point3"));
        point3->setEnabled(true);
        point3->setGeometry(QRect(20, 90, 151, 19));
        point4 = new QCheckBox(test_main_points);
        point4->setObjectName(QStringLiteral("point4"));
        point4->setEnabled(true);
        point4->setGeometry(QRect(20, 120, 91, 19));
        point5 = new QCheckBox(test_main_points);
        point5->setObjectName(QStringLiteral("point5"));
        point5->setEnabled(true);
        point5->setGeometry(QRect(20, 150, 91, 19));
        point6 = new QCheckBox(test_main_points);
        point6->setObjectName(QStringLiteral("point6"));
        point6->setEnabled(true);
        point6->setGeometry(QRect(20, 180, 111, 19));
        point7 = new QCheckBox(test_main_points);
        point7->setObjectName(QStringLiteral("point7"));
        point7->setEnabled(true);
        point7->setGeometry(QRect(20, 210, 131, 19));
        point8 = new QCheckBox(test_main_points);
        point8->setObjectName(QStringLiteral("point8"));
        point8->setEnabled(true);
        point8->setGeometry(QRect(20, 240, 91, 19));
        point9 = new QCheckBox(test_main_points);
        point9->setObjectName(QStringLiteral("point9"));
        point9->setEnabled(true);
        point9->setGeometry(QRect(20, 270, 91, 19));
        test_main_num = new QGroupBox(page2_Test);
        test_main_num->setObjectName(QStringLiteral("test_main_num"));
        test_main_num->setGeometry(QRect(10, 160, 181, 121));
        num4 = new QRadioButton(test_main_num);
        num4->setObjectName(QStringLiteral("num4"));
        num4->setGeometry(QRect(20, 30, 41, 19));
        num5 = new QRadioButton(test_main_num);
        num5->setObjectName(QStringLiteral("num5"));
        num5->setGeometry(QRect(100, 30, 41, 19));
        num6 = new QRadioButton(test_main_num);
        num6->setObjectName(QStringLiteral("num6"));
        num6->setGeometry(QRect(20, 60, 41, 19));
        num7 = new QRadioButton(test_main_num);
        num7->setObjectName(QStringLiteral("num7"));
        num7->setGeometry(QRect(100, 60, 41, 19));
        num8 = new QRadioButton(test_main_num);
        num8->setObjectName(QStringLiteral("num8"));
        num8->setGeometry(QRect(20, 90, 41, 19));
        num9 = new QRadioButton(test_main_num);
        num9->setObjectName(QStringLiteral("num9"));
        num9->setGeometry(QRect(100, 90, 41, 19));
        test_main_begin = new QPushButton(page2_Test);
        test_main_begin->setObjectName(QStringLiteral("test_main_begin"));
        test_main_begin->setEnabled(false);
        test_main_begin->setGeometry(QRect(10, 310, 81, 28));
        test_main_reset = new QPushButton(page2_Test);
        test_main_reset->setObjectName(QStringLiteral("test_main_reset"));
        test_main_reset->setGeometry(QRect(110, 310, 81, 28));
        stackedWidget->addWidget(page2_Test);
        page3_Demo = new QWidget();
        page3_Demo->setObjectName(QStringLiteral("page3_Demo"));
        btn1_turing = new QPushButton(page3_Demo);
        btn1_turing->setObjectName(QStringLiteral("btn1_turing"));
        btn1_turing->setGeometry(QRect(30, 40, 131, 41));
        btn2_bool = new QPushButton(page3_Demo);
        btn2_bool->setObjectName(QStringLiteral("btn2_bool"));
        btn2_bool->setGeometry(QRect(30, 120, 131, 41));
        btn3_plusm = new QPushButton(page3_Demo);
        btn3_plusm->setObjectName(QStringLiteral("btn3_plusm"));
        btn3_plusm->setGeometry(QRect(30, 200, 131, 41));
        btn4_algo = new QPushButton(page3_Demo);
        btn4_algo->setObjectName(QStringLiteral("btn4_algo"));
        btn4_algo->setGeometry(QRect(30, 280, 131, 41));
        add_problem_note_2 = new QLabel(page3_Demo);
        add_problem_note_2->setObjectName(QStringLiteral("add_problem_note_2"));
        add_problem_note_2->setGeometry(QRect(190, 40, 221, 41));
        add_problem_note_2->setWordWrap(true);
        add_problem_note_3 = new QLabel(page3_Demo);
        add_problem_note_3->setObjectName(QStringLiteral("add_problem_note_3"));
        add_problem_note_3->setGeometry(QRect(190, 120, 221, 41));
        add_problem_note_3->setWordWrap(true);
        add_problem_note_4 = new QLabel(page3_Demo);
        add_problem_note_4->setObjectName(QStringLiteral("add_problem_note_4"));
        add_problem_note_4->setGeometry(QRect(190, 280, 221, 41));
        add_problem_note_4->setWordWrap(true);
        add_problem_note_5 = new QLabel(page3_Demo);
        add_problem_note_5->setObjectName(QStringLiteral("add_problem_note_5"));
        add_problem_note_5->setGeometry(QRect(190, 200, 221, 41));
        add_problem_note_5->setWordWrap(true);
        line = new QFrame(page3_Demo);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 5, 421, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(page3_Demo);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 330, 421, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(page3_Demo);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-7, 20, 41, 321));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(page3_Demo);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(410, 20, 41, 321));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page3_Demo);
        page4_Others = new QWidget();
        page4_Others->setObjectName(QStringLiteral("page4_Others"));
        practice_judging_result = new QGroupBox(page4_Others);
        practice_judging_result->setObjectName(QStringLiteral("practice_judging_result"));
        practice_judging_result->setGeometry(QRect(350, 160, 101, 151));
        practice_judging_result->setFont(font);
        practice_label = new QLabel(practice_judging_result);
        practice_label->setObjectName(QStringLiteral("practice_label"));
        practice_label->setGeometry(QRect(10, 25, 81, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        practice_label->setFont(font2);
        practice_label->setAlignment(Qt::AlignCenter);
        practice_label->setWordWrap(true);
        practice_submit = new QPushButton(practice_judging_result);
        practice_submit->setObjectName(QStringLiteral("practice_submit"));
        practice_submit->setEnabled(false);
        practice_submit->setGeometry(QRect(10, 110, 81, 31));
        practice_problem = new QTextBrowser(page4_Others);
        practice_problem->setObjectName(QStringLiteral("practice_problem"));
        practice_problem->setGeometry(QRect(10, 10, 331, 341));
        practice_problem->setFont(font2);
        practice_problem_num_box = new QGroupBox(page4_Others);
        practice_problem_num_box->setObjectName(QStringLiteral("practice_problem_num_box"));
        practice_problem_num_box->setGeometry(QRect(350, 10, 101, 141));
        practice_problem_num_box->setFont(font);
        practice_get_problemid = new QLineEdit(practice_problem_num_box);
        practice_get_problemid->setObjectName(QStringLiteral("practice_get_problemid"));
        practice_get_problemid->setGeometry(QRect(10, 30, 81, 21));
        practice_get_problemid->setMaxLength(4);
        practice_show_problem = new QPushButton(practice_problem_num_box);
        practice_show_problem->setObjectName(QStringLiteral("practice_show_problem"));
        practice_show_problem->setGeometry(QRect(10, 60, 81, 31));
        practice_random = new QPushButton(practice_problem_num_box);
        practice_random->setObjectName(QStringLiteral("practice_random"));
        practice_random->setGeometry(QRect(10, 100, 81, 31));
        practice_reset = new QPushButton(page4_Others);
        practice_reset->setObjectName(QStringLiteral("practice_reset"));
        practice_reset->setGeometry(QRect(350, 320, 101, 31));
        stackedWidget->addWidget(page4_Others);
        page5_Setting = new QWidget();
        page5_Setting->setObjectName(QStringLiteral("page5_Setting"));
        more_function = new QStackedWidget(page5_Setting);
        more_function->setObjectName(QStringLiteral("more_function"));
        more_function->setGeometry(QRect(10, 40, 431, 321));
        more_fun0 = new QWidget();
        more_fun0->setObjectName(QStringLiteral("more_fun0"));
        label_5 = new QLabel(more_fun0);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 50, 200, 200));
        more_function->addWidget(more_fun0);
        more_fun1 = new QWidget();
        more_fun1->setObjectName(QStringLiteral("more_fun1"));
        point_and_difficulty = new QGroupBox(more_fun1);
        point_and_difficulty->setObjectName(QStringLiteral("point_and_difficulty"));
        point_and_difficulty->setGeometry(QRect(0, 60, 291, 61));
        add_problem_point = new QComboBox(point_and_difficulty);
        add_problem_point->setObjectName(QStringLiteral("add_problem_point"));
        add_problem_point->setEnabled(true);
        add_problem_point->setGeometry(QRect(10, 30, 151, 21));
        add_problem_point->setMouseTracking(false);
        add_problem_point->setAcceptDrops(false);
        add_problem_point->setAutoFillBackground(false);
        add_problem_point->setEditable(false);
        add_problem_point->setDuplicatesEnabled(false);
        add_problem_point->setFrame(true);
        add_problem_difficulty = new QComboBox(point_and_difficulty);
        add_problem_difficulty->setObjectName(QStringLiteral("add_problem_difficulty"));
        add_problem_difficulty->setGeometry(QRect(170, 30, 111, 22));
        problem_file = new QGroupBox(more_fun1);
        problem_file->setObjectName(QStringLiteral("problem_file"));
        problem_file->setGeometry(QRect(0, 129, 431, 61));
        problem_file_path = new QLineEdit(problem_file);
        problem_file_path->setObjectName(QStringLiteral("problem_file_path"));
        problem_file_path->setEnabled(true);
        problem_file_path->setGeometry(QRect(10, 30, 301, 21));
        problem_file_path->setFrame(true);
        problem_file_path->setDragEnabled(false);
        problem_file_path->setReadOnly(true);
        problem_file_search = new QPushButton(problem_file);
        problem_file_search->setObjectName(QStringLiteral("problem_file_search"));
        problem_file_search->setGeometry(QRect(320, 30, 93, 21));
        problem_input_file = new QGroupBox(more_fun1);
        problem_input_file->setObjectName(QStringLiteral("problem_input_file"));
        problem_input_file->setGeometry(QRect(0, 190, 431, 61));
        problem_input_path = new QLineEdit(problem_input_file);
        problem_input_path->setObjectName(QStringLiteral("problem_input_path"));
        problem_input_path->setGeometry(QRect(10, 30, 301, 21));
        problem_input_path->setReadOnly(true);
        problem_input_search = new QPushButton(problem_input_file);
        problem_input_search->setObjectName(QStringLiteral("problem_input_search"));
        problem_input_search->setGeometry(QRect(320, 30, 93, 21));
        problem_output_file = new QGroupBox(more_fun1);
        problem_output_file->setObjectName(QStringLiteral("problem_output_file"));
        problem_output_file->setGeometry(QRect(0, 250, 431, 61));
        problem_output_path = new QLineEdit(problem_output_file);
        problem_output_path->setObjectName(QStringLiteral("problem_output_path"));
        problem_output_path->setGeometry(QRect(10, 30, 301, 21));
        problem_output_path->setReadOnly(true);
        problem_output_search = new QPushButton(problem_output_file);
        problem_output_search->setObjectName(QStringLiteral("problem_output_search"));
        problem_output_search->setGeometry(QRect(320, 30, 93, 21));
        problem_time_limitation = new QGroupBox(more_fun1);
        problem_time_limitation->setObjectName(QStringLiteral("problem_time_limitation"));
        problem_time_limitation->setGeometry(QRect(300, 60, 131, 61));
        problem_time_choose = new QComboBox(problem_time_limitation);
        problem_time_choose->setObjectName(QStringLiteral("problem_time_choose"));
        problem_time_choose->setGeometry(QRect(10, 30, 111, 22));
        add_problem_reset = new QPushButton(more_fun1);
        add_problem_reset->setObjectName(QStringLiteral("add_problem_reset"));
        add_problem_reset->setGeometry(QRect(372, 20, 51, 28));
        add_problem_confirm = new QPushButton(more_fun1);
        add_problem_confirm->setObjectName(QStringLiteral("add_problem_confirm"));
        add_problem_confirm->setEnabled(false);
        add_problem_confirm->setGeometry(QRect(310, 20, 51, 28));
        add_problem_note = new QLabel(more_fun1);
        add_problem_note->setObjectName(QStringLiteral("add_problem_note"));
        add_problem_note->setGeometry(QRect(0, 5, 311, 41));
        add_problem_note->setWordWrap(true);
        more_function->addWidget(more_fun1);
        more_fun2 = new QWidget();
        more_fun2->setObjectName(QStringLiteral("more_fun2"));
        p_problem_list = new QGroupBox(more_fun2);
        p_problem_list->setObjectName(QStringLiteral("p_problem_list"));
        p_problem_list->setGeometry(QRect(10, 60, 201, 251));
        pass_problem = new QTextBrowser(p_problem_list);
        pass_problem->setObjectName(QStringLiteral("pass_problem"));
        pass_problem->setGeometry(QRect(10, 30, 181, 211));
        np_problem_list = new QGroupBox(more_fun2);
        np_problem_list->setObjectName(QStringLiteral("np_problem_list"));
        np_problem_list->setGeometry(QRect(220, 60, 201, 251));
        no_pass_problem = new QTextBrowser(np_problem_list);
        no_pass_problem->setObjectName(QStringLiteral("no_pass_problem"));
        no_pass_problem->setGeometry(QRect(10, 30, 181, 211));
        total_problem = new QLabel(more_fun2);
        total_problem->setObjectName(QStringLiteral("total_problem"));
        total_problem->setGeometry(QRect(10, 20, 191, 16));
        p_problem_num = new QLabel(more_fun2);
        p_problem_num->setObjectName(QStringLiteral("p_problem_num"));
        p_problem_num->setGeometry(QRect(220, 20, 191, 16));
        more_function->addWidget(more_fun2);
        more_fun3 = new QWidget();
        more_fun3->setObjectName(QStringLiteral("more_fun3"));
        label_2 = new QLabel(more_fun3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 20, 421, 261));
        label_2->setWordWrap(true);
        click_for_instructions = new QPushButton(more_fun3);
        click_for_instructions->setObjectName(QStringLiteral("click_for_instructions"));
        click_for_instructions->setGeometry(QRect(50, 280, 71, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        click_for_instructions->setFont(font3);
        click_for_instructions->setMouseTracking(false);
        click_for_instructions->setFocusPolicy(Qt::NoFocus);
        click_for_instructions->setAcceptDrops(false);
        click_for_instructions->setAutoFillBackground(false);
        click_for_instructions->setCheckable(false);
        click_for_instructions->setAutoExclusive(false);
        click_for_instructions->setFlat(true);
        for_instructions = new QPushButton(more_fun3);
        for_instructions->setObjectName(QStringLiteral("for_instructions"));
        for_instructions->setGeometry(QRect(100, 280, 311, 31));
        for_instructions->setFlat(true);
        more_function->addWidget(more_fun3);
        more_fun4 = new QWidget();
        more_fun4->setObjectName(QStringLiteral("more_fun4"));
        link_2_name = new QPushButton(more_fun4);
        link_2_name->setObjectName(QStringLiteral("link_2_name"));
        link_2_name->setGeometry(QRect(20, 70, 111, 28));
        link_2_name->setFont(font3);
        link_2_name->setFocusPolicy(Qt::NoFocus);
        link_2_name->setFlat(true);
        link_3_name = new QPushButton(more_fun4);
        link_3_name->setObjectName(QStringLiteral("link_3_name"));
        link_3_name->setGeometry(QRect(20, 120, 111, 28));
        link_3_name->setFont(font3);
        link_3_name->setFocusPolicy(Qt::NoFocus);
        link_3_name->setFlat(true);
        link_4_name = new QPushButton(more_fun4);
        link_4_name->setObjectName(QStringLiteral("link_4_name"));
        link_4_name->setGeometry(QRect(20, 170, 111, 28));
        link_4_name->setFont(font3);
        link_4_name->setFocusPolicy(Qt::NoFocus);
        link_4_name->setAutoFillBackground(false);
        link_4_name->setFlat(true);
        link_5_name = new QPushButton(more_fun4);
        link_5_name->setObjectName(QStringLiteral("link_5_name"));
        link_5_name->setGeometry(QRect(20, 220, 111, 28));
        link_5_name->setFont(font3);
        link_5_name->setFocusPolicy(Qt::NoFocus);
        link_5_name->setFlat(true);
        link_6_name = new QPushButton(more_fun4);
        link_6_name->setObjectName(QStringLiteral("link_6_name"));
        link_6_name->setGeometry(QRect(20, 270, 111, 28));
        link_6_name->setFont(font3);
        link_6_name->setFocusPolicy(Qt::NoFocus);
        link_6_name->setFlat(true);
        link_2_link = new QPushButton(more_fun4);
        link_2_link->setObjectName(QStringLiteral("link_2_link"));
        link_2_link->setGeometry(QRect(150, 70, 261, 28));
        link_2_link->setFont(font3);
        link_2_link->setFocusPolicy(Qt::NoFocus);
        link_2_link->setFlat(true);
        link_1_name = new QPushButton(more_fun4);
        link_1_name->setObjectName(QStringLiteral("link_1_name"));
        link_1_name->setGeometry(QRect(20, 20, 111, 28));
        link_1_name->setFont(font3);
        link_1_name->setFocusPolicy(Qt::NoFocus);
        link_1_name->setFlat(true);
        link_1_link = new QPushButton(more_fun4);
        link_1_link->setObjectName(QStringLiteral("link_1_link"));
        link_1_link->setGeometry(QRect(150, 20, 261, 28));
        link_1_link->setFont(font3);
        link_1_link->setFocusPolicy(Qt::NoFocus);
        link_1_link->setFlat(true);
        link_3_link = new QPushButton(more_fun4);
        link_3_link->setObjectName(QStringLiteral("link_3_link"));
        link_3_link->setGeometry(QRect(150, 120, 261, 28));
        link_3_link->setFont(font3);
        link_3_link->setFocusPolicy(Qt::NoFocus);
        link_3_link->setFlat(true);
        link_4_link = new QPushButton(more_fun4);
        link_4_link->setObjectName(QStringLiteral("link_4_link"));
        link_4_link->setGeometry(QRect(150, 170, 261, 28));
        link_4_link->setFont(font3);
        link_4_link->setFocusPolicy(Qt::NoFocus);
        link_4_link->setFlat(true);
        link_5_link = new QPushButton(more_fun4);
        link_5_link->setObjectName(QStringLiteral("link_5_link"));
        link_5_link->setGeometry(QRect(150, 220, 261, 28));
        link_5_link->setFont(font3);
        link_5_link->setFocusPolicy(Qt::NoFocus);
        link_5_link->setFlat(true);
        link_6_link = new QPushButton(more_fun4);
        link_6_link->setObjectName(QStringLiteral("link_6_link"));
        link_6_link->setGeometry(QRect(150, 270, 261, 28));
        link_6_link->setFont(font3);
        link_6_link->setFocusPolicy(Qt::NoFocus);
        link_6_link->setFlat(true);
        more_function->addWidget(more_fun4);
        morefun_add_problem = new QPushButton(page5_Setting);
        morefun_add_problem->setObjectName(QStringLiteral("morefun_add_problem"));
        morefun_add_problem->setGeometry(QRect(10, 10, 91, 28));
        morefun_add_problem->setCursor(QCursor(Qt::PointingHandCursor));
        morefun_add_problem->setFocusPolicy(Qt::StrongFocus);
        morefun_add_problem->setFlat(false);
        morefun_statistics = new QPushButton(page5_Setting);
        morefun_statistics->setObjectName(QStringLiteral("morefun_statistics"));
        morefun_statistics->setGeometry(QRect(120, 10, 91, 28));
        morefun_statistics->setCursor(QCursor(Qt::PointingHandCursor));
        morefun_statistics->setFlat(false);
        morefun_beginner = new QPushButton(page5_Setting);
        morefun_beginner->setObjectName(QStringLiteral("morefun_beginner"));
        morefun_beginner->setGeometry(QRect(230, 10, 91, 28));
        morefun_beginner->setCursor(QCursor(Qt::PointingHandCursor));
        morefun_beginner->setToolTipDuration(-1);
        morefun_beginner->setFlat(false);
        morefun_links = new QPushButton(page5_Setting);
        morefun_links->setObjectName(QStringLiteral("morefun_links"));
        morefun_links->setGeometry(QRect(340, 10, 91, 28));
        morefun_links->setCursor(QCursor(Qt::PointingHandCursor));
        morefun_links->setFlat(false);
        stackedWidget->addWidget(page5_Setting);
        page6_About = new QWidget();
        page6_About->setObjectName(QStringLiteral("page6_About"));
        label_8 = new QLabel(page6_About);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 50, 361, 251));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_6 = new QLabel(page6_About);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(308, 210, 161, 171));
        line_5 = new QFrame(page6_About);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 20, 421, 21));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(page6_About);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 30, 21, 301));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(page6_About);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(10, 320, 411, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(page6_About);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(420, 30, 21, 271));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page6_About);
        label_8->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        line_8->raise();
        label_6->raise();

        retranslateUi(frmNavButton);

        stackedWidget->setCurrentIndex(6);
        more_function->setCurrentIndex(4);
        add_problem_point->setCurrentIndex(0);
        add_problem_difficulty->setCurrentIndex(0);
        problem_time_choose->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(frmNavButton);
    } // setupUi

    void retranslateUi(QWidget *frmNavButton)
    {
        frmNavButton->setWindowTitle(QApplication::translate("frmNavButton", "Wodget", 0));
        navButton0->setText(QApplication::translate("frmNavButton", "\344\270\273       \351\241\265", 0));
        navButton2->setText(QApplication::translate("frmNavButton", "\346\250\241\346\213\237\346\265\213\350\257\225", 0));
        navButton1->setText(QApplication::translate("frmNavButton", "\347\250\213\345\272\217\345\257\271\346\213\215", 0));
        navButton3->setText(QApplication::translate("frmNavButton", "\346\225\231\345\255\246\346\274\224\347\244\272", 0));
        navButton4->setText(QApplication::translate("frmNavButton", "\350\207\252\347\224\261\347\273\203\344\271\240", 0));
        navButton5->setText(QApplication::translate("frmNavButton", "\346\233\264       \345\244\232", 0));
        navButton6->setText(QApplication::translate("frmNavButton", "\345\205\263       \344\272\216", 0));
        navButton7->setText(QApplication::translate("frmNavButton", "\351\200\200       \345\207\272", 0));
        label_4->setText(QApplication::translate("frmNavButton", "<html><head/><body><p><img src=\":/images/MainPage.png\"/></p></body></html>", 0));
        label_3->setText(QApplication::translate("frmNavButton", "<html><head/><body><p align=\"center\"><span style=\" color:#b2b2b2;\">PKU ICA Helper</span></p></body></html>", 0));
        echo_main_begin->setText(QApplication::translate("frmNavButton", "\345\274\200\345\247\213\345\257\271\346\213\215", 0));
        stdGroup->setTitle(QApplication::translate("frmNavButton", "\346\240\207\345\207\206\347\250\213\345\272\217", 0));
        std_path->setText(QApplication::translate("frmNavButton", "\346\265\217\350\247\210...", 0));
        testGroup->setTitle(QApplication::translate("frmNavButton", "\346\265\213\350\257\225\347\250\213\345\272\217", 0));
        test_path->setText(QApplication::translate("frmNavButton", "\346\265\217\350\247\210...", 0));
        inputGroup->setTitle(QApplication::translate("frmNavButton", "\350\276\223\345\205\245\345\275\242\345\274\217", 0));
        No_input->setText(QApplication::translate("frmNavButton", "\346\227\240\350\276\223\345\205\245", 0));
        manual_input->setText(QApplication::translate("frmNavButton", "\346\211\213\345\212\250\350\276\223\345\205\245", 0));
        program_generation->setText(QApplication::translate("frmNavButton", "\347\250\213\345\272\217\347\224\237\346\210\220", 0));
        input_path->setText(QApplication::translate("frmNavButton", "\346\265\217\350\247\210...", 0));
        echo_reset->setText(QApplication::translate("frmNavButton", "\351\207\215      \347\275\256", 0));
        loopGroup->setTitle(QApplication::translate("frmNavButton", "\346\265\213\350\257\225\346\254\241\346\225\260", 0));
        loop_num->setText(QApplication::translate("frmNavButton", "1", 0));
        loop_reset->setText(QApplication::translate("frmNavButton", "\351\207\215\347\275\256", 0));
        test_main_difficulty->setTitle(QApplication::translate("frmNavButton", "\351\232\276\345\272\246\351\200\211\346\213\251", 0));
        diff_easy->setText(QApplication::translate("frmNavButton", "\347\256\200\345\215\225/Easy", 0));
        diff_medium->setText(QApplication::translate("frmNavButton", "\344\270\255\347\255\211/Medium", 0));
        diff_hard->setText(QApplication::translate("frmNavButton", "\345\233\260\351\232\276/Hard", 0));
        test_main_points->setTitle(QApplication::translate("frmNavButton", "\350\200\203\347\202\271\350\214\203\345\233\264\351\200\211\346\213\251\357\274\210\350\207\263\345\260\2213\344\270\252\357\274\211", 0));
        point1->setText(QApplication::translate("frmNavButton", "\350\276\223\345\205\245\350\276\223\345\207\272\345\237\272\347\241\200", 0));
        point2->setText(QApplication::translate("frmNavButton", "\345\217\230\351\207\217\345\237\272\347\241\200", 0));
        point3->setText(QApplication::translate("frmNavButton", "\351\241\272\345\272\217\343\200\201\345\210\206\346\224\257\344\270\216\345\276\252\347\216\257", 0));
        point4->setText(QApplication::translate("frmNavButton", "\346\225\260\347\273\204", 0));
        point5->setText(QApplication::translate("frmNavButton", "\345\255\227\347\254\246\344\270\262", 0));
        point6->setText(QApplication::translate("frmNavButton", "\345\207\275\346\225\260\344\270\216\351\200\222\345\275\222", 0));
        point7->setText(QApplication::translate("frmNavButton", "\346\267\261\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0));
        point8->setText(QApplication::translate("frmNavButton", "\345\212\250\346\200\201\350\247\204\345\210\222", 0));
        point9->setText(QApplication::translate("frmNavButton", "\351\200\211\345\255\246\345\206\205\345\256\271", 0));
        test_main_num->setTitle(QApplication::translate("frmNavButton", "\351\242\230\351\207\217\351\200\211\346\213\251", 0));
        num4->setText(QApplication::translate("frmNavButton", "4", 0));
        num5->setText(QApplication::translate("frmNavButton", "5", 0));
        num6->setText(QApplication::translate("frmNavButton", "6", 0));
        num7->setText(QApplication::translate("frmNavButton", "7", 0));
        num8->setText(QApplication::translate("frmNavButton", "8", 0));
        num9->setText(QApplication::translate("frmNavButton", "9", 0));
        test_main_begin->setText(QApplication::translate("frmNavButton", "\345\274\200\345\247\213", 0));
        test_main_reset->setText(QApplication::translate("frmNavButton", "\351\207\215\347\275\256", 0));
        btn1_turing->setText(QApplication::translate("frmNavButton", "\345\233\276\347\201\265\346\234\272", 0));
        btn2_bool->setText(QApplication::translate("frmNavButton", "\351\200\273\350\276\221\350\277\220\347\256\227", 0));
        btn3_plusm->setText(QApplication::translate("frmNavButton", "\345\212\240\346\263\225\345\231\250", 0));
        btn4_algo->setText(QApplication::translate("frmNavButton", "\347\256\227\346\263\225\346\274\224\347\244\272", 0));
        add_problem_note_2->setText(QApplication::translate("frmNavButton", "\351\200\232\350\277\207\345\212\250\346\200\201\345\217\257\346\223\215\346\216\247\347\232\204\345\233\276\347\201\265\346\234\272\346\250\241\345\236\213\357\274\214\346\274\224\347\244\272\345\233\276\347\201\265\346\234\272\345\267\245\344\275\234\347\232\204\345\217\257\350\241\214\346\200\247\345\222\214\345\237\272\346\234\254\345\216\237\347\220\206\343\200\202", 0));
        add_problem_note_3->setText(QApplication::translate("frmNavButton", "\345\207\240\347\247\215\345\270\270\347\224\250\347\232\204\351\227\250\347\224\265\350\267\257\345\216\237\347\220\206\346\274\224\347\244\272\357\274\214\345\217\257\344\273\245\345\212\250\346\200\201\346\223\215\344\275\234\350\247\202\345\257\237\345\216\237\347\220\206\343\200\202", 0));
        add_problem_note_4->setText(QApplication::translate("frmNavButton", "\351\200\232\350\277\207\345\261\225\347\244\272\347\256\227\346\263\225\350\277\207\347\250\213\347\252\201\345\207\272\345\257\271\346\257\224\344\272\206\346\267\261\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242\345\222\214\345\271\277\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242\347\232\204\344\270\215\345\220\214\344\271\213\345\244\204\343\200\202", 0));
        add_problem_note_5->setText(QApplication::translate("frmNavButton", "\345\257\271\351\200\273\350\276\221\350\277\220\347\256\227\346\274\224\347\244\272\347\232\204\345\273\266\344\274\270\357\274\214\350\277\233\344\270\200\346\255\245\345\261\225\347\244\272\344\272\206\350\256\241\347\256\227\346\234\272\345\267\245\344\275\234\345\256\236\347\216\260\345\212\240\346\263\225\347\232\204\345\216\237\347\220\206\343\200\202", 0));
        practice_judging_result->setTitle(QApplication::translate("frmNavButton", "\346\217\220\344\272\244\347\212\266\346\200\201", 0));
        practice_label->setText(QString());
        practice_submit->setText(QApplication::translate("frmNavButton", "\346\217\220\344\272\244", 0));
        practice_problem_num_box->setTitle(QApplication::translate("frmNavButton", "\351\227\256\351\242\230\350\267\263\350\275\254", 0));
        practice_get_problemid->setText(QApplication::translate("frmNavButton", "1000", 0));
        practice_show_problem->setText(QApplication::translate("frmNavButton", "\350\267\263\350\275\254", 0));
        practice_random->setText(QApplication::translate("frmNavButton", "\351\232\217\346\234\272\350\267\263\350\275\254", 0));
        practice_reset->setText(QApplication::translate("frmNavButton", "\351\207\215\347\275\256", 0));
        label_5->setText(QApplication::translate("frmNavButton", "<html><head/><body><p><img src=\":/images/MainPage.png\"/></p></body></html>", 0));
        point_and_difficulty->setTitle(QApplication::translate("frmNavButton", "\350\200\203\347\202\271\343\200\201\351\232\276\345\272\246\351\200\211\346\213\251", 0));
        add_problem_point->clear();
        add_problem_point->insertItems(0, QStringList()
         << QApplication::translate("frmNavButton", "\350\257\267\351\200\211\346\213\251\350\200\203\347\202\271\342\200\246", 0)
         << QApplication::translate("frmNavButton", "\350\276\223\345\205\245\350\276\223\345\207\272\345\237\272\347\241\200", 0)
         << QApplication::translate("frmNavButton", "\345\217\230\351\207\217\345\237\272\347\241\200", 0)
         << QApplication::translate("frmNavButton", "\351\241\272\345\272\217\343\200\201\345\210\206\346\224\257\344\270\216\345\276\252\347\216\257", 0)
         << QApplication::translate("frmNavButton", "\346\225\260\347\273\204", 0)
         << QApplication::translate("frmNavButton", "\345\255\227\347\254\246\344\270\262", 0)
         << QApplication::translate("frmNavButton", "\345\207\275\346\225\260\344\270\216\351\200\222\345\275\222", 0)
         << QApplication::translate("frmNavButton", "\346\267\261\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0)
         << QApplication::translate("frmNavButton", "\345\212\250\346\200\201\350\247\204\345\210\222", 0)
         << QApplication::translate("frmNavButton", "\351\200\211\345\255\246\345\206\205\345\256\271", 0)
        );
        add_problem_point->setCurrentText(QApplication::translate("frmNavButton", "\350\257\267\351\200\211\346\213\251\350\200\203\347\202\271\342\200\246", 0));
        add_problem_difficulty->clear();
        add_problem_difficulty->insertItems(0, QStringList()
         << QApplication::translate("frmNavButton", "\350\257\267\351\200\211\346\213\251\351\232\276\345\272\246\342\200\246", 0)
         << QApplication::translate("frmNavButton", "\345\205\245\351\227\250", 0)
         << QApplication::translate("frmNavButton", "\347\256\200\345\215\225", 0)
         << QApplication::translate("frmNavButton", "\344\270\255\347\255\211", 0)
         << QApplication::translate("frmNavButton", "\350\276\203\351\232\276", 0)
         << QApplication::translate("frmNavButton", "\345\233\260\351\232\276", 0)
        );
        problem_file->setTitle(QApplication::translate("frmNavButton", "\351\242\230\347\233\256\346\217\217\350\277\260\346\226\207\344\273\266", 0));
        problem_file_path->setPlaceholderText(QApplication::translate("frmNavButton", "\350\257\267\346\217\220\344\272\244\351\242\230\351\235\242\346\217\217\350\277\260\346\226\207\344\273\266...", 0));
        problem_file_search->setText(QApplication::translate("frmNavButton", "\346\265\217\350\247\210...", 0));
        problem_input_file->setTitle(QApplication::translate("frmNavButton", "\350\276\223\345\205\245\346\226\207\344\273\266", 0));
        problem_input_path->setPlaceholderText(QApplication::translate("frmNavButton", "\350\257\267\346\217\220\344\272\244\350\276\223\345\205\245\346\226\207\344\273\266...", 0));
        problem_input_search->setText(QApplication::translate("frmNavButton", "\346\265\217\350\247\210...", 0));
        problem_output_file->setTitle(QApplication::translate("frmNavButton", "\346\240\207\345\207\206\350\276\223\345\207\272\346\226\207\344\273\266", 0));
        problem_output_path->setPlaceholderText(QApplication::translate("frmNavButton", "\350\257\267\346\217\220\344\272\244\346\240\207\345\207\206\350\276\223\345\207\272\346\226\207\344\273\266...", 0));
        problem_output_search->setText(QApplication::translate("frmNavButton", "\346\265\217\350\247\210...", 0));
        problem_time_limitation->setTitle(QApplication::translate("frmNavButton", "\346\227\266\351\227\264\351\231\220\345\210\266", 0));
        problem_time_choose->clear();
        problem_time_choose->insertItems(0, QStringList()
         << QApplication::translate("frmNavButton", "\350\257\267\351\200\211\346\213\251...", 0)
         << QApplication::translate("frmNavButton", "200ms", 0)
         << QApplication::translate("frmNavButton", "500ms", 0)
         << QApplication::translate("frmNavButton", "1000ms", 0)
         << QApplication::translate("frmNavButton", "2000ms", 0)
         << QApplication::translate("frmNavButton", "5000ms", 0)
        );
        add_problem_reset->setText(QApplication::translate("frmNavButton", "\351\207\215\347\275\256", 0));
        add_problem_confirm->setText(QApplication::translate("frmNavButton", "\346\267\273\345\212\240", 0));
        add_problem_note->setText(QApplication::translate("frmNavButton", "\346\217\220\347\244\272\357\274\232\351\242\230\347\233\256\346\217\217\350\277\260\343\200\201\350\276\223\345\205\245\343\200\201\346\240\207\345\207\206\350\276\223\345\207\272\346\226\207\344\273\266\345\220\216\347\274\200\345\220\215\345\210\206\345\210\253\344\270\272.txt\343\200\201.in\343\200\201.out\357\274\233\350\257\267\345\260\275\351\207\217\351\207\207\347\224\250\345\244\232\347\273\204\346\225\260\346\215\256\347\202\271\346\215\206\347\273\221\346\265\213\350\257\225\343\200\202", 0));
        p_problem_list->setTitle(QApplication::translate("frmNavButton", "\345\267\262\350\247\243\345\206\263\347\232\204\351\227\256\351\242\230", 0));
        np_problem_list->setTitle(QApplication::translate("frmNavButton", "\345\260\235\350\257\225\344\275\206\346\234\252\350\247\243\345\206\263\347\232\204\351\227\256\351\242\230", 0));
        total_problem->setText(QApplication::translate("frmNavButton", "\351\242\230\347\233\256\346\200\273\346\225\260\357\274\232", 0));
        p_problem_num->setText(QApplication::translate("frmNavButton", "\345\267\262\350\247\243\345\206\263\351\242\230\347\233\256\346\200\273\346\225\260\357\274\232", 0));
        label_2->setText(QApplication::translate("frmNavButton", "PKU ICA Helper\347\232\204\344\270\273\350\246\201\345\212\237\350\203\275\345\214\205\346\213\254\346\250\241\346\213\237\346\265\213\350\257\225\343\200\201\347\250\213\345\272\217\345\257\271\346\213\215\343\200\201\346\225\231\345\255\246\346\274\224\347\244\272\343\200\202\n"
"\343\200\220\346\250\241\346\213\237\346\265\213\350\257\225\343\200\221\346\234\254\345\212\237\350\203\275\346\224\257\346\214\201\347\224\250\346\210\267\350\207\252\345\256\232\344\271\211\351\200\211\345\217\226\351\232\276\345\272\246\343\200\201\351\242\230\351\207\217\343\200\201\350\200\203\347\202\271\350\214\203\345\233\264\357\274\210\350\246\201\346\261\202\350\207\263\345\260\221\351\200\211\346\213\251\344\270\211\344\270\252\350\200\203\347\202\271\357\274\211\343\200\202\345\234\250\346\255\243\345\274\217\346\265\213\350\257\225\347\225\214\351\235\242\344\270\255\357\274\214\347\224\250\346\210\267\345\217\257\351\200\232\350\277\207\345\267\246\344\276\247\351\242\230\347\233\256\345\210\227\350\241\250\345\210\207"
                        "\346\215\242\351\242\230\347\233\256\357\274\214\351\200\232\350\277\207\342\200\234\346\217\220\344\272\244\342\200\235\346\214\211\351\222\256\350\277\233\350\241\214.cpp\346\272\220\346\226\207\344\273\266\347\232\204\346\217\220\344\272\244\343\200\202\346\257\217\351\201\223\351\242\230\345\235\207\345\217\257\345\244\232\346\254\241\346\217\220\344\272\244\357\274\214\350\257\204\346\265\213\347\273\223\346\236\234\345\260\206\345\256\236\346\227\266\346\230\276\347\244\272\343\200\202\n"
"\343\200\220\347\250\213\345\272\217\345\257\271\346\213\215\343\200\221\346\234\254\345\212\237\350\203\275\346\224\257\346\214\201\347\224\250\346\210\267\350\207\252\350\241\214\344\270\212\344\274\240\344\270\244\344\270\252.cpp\346\272\220\346\226\207\344\273\266\357\274\214\347\224\261\347\250\213\345\272\217\347\274\226\350\257\221\345\220\216\350\277\233\350\241\214\345\257\271\346\213\215\343\200\202\345\257\271\346\213\215\347\232\204\350\276\223\345\205\245\346\224\257\346\214\201\347\224\261\347\250\213\345"
                        "\272\217\347\224\237\346\210\220\345\257\271\346\213\215\346\225\260\346\215\256\357\274\210\346\255\244\346\227\266\345\220\214\346\227\266\351\234\200\350\246\201\344\270\212\344\274\240\346\225\260\346\215\256\347\224\237\346\210\220\347\250\213\345\272\217\357\274\211\343\200\201\346\211\213\345\212\250\350\276\223\345\205\245\345\257\271\346\213\215\346\225\260\346\215\256\345\217\212\346\227\240\351\234\200\350\276\223\345\205\245\346\225\260\346\215\256\344\270\211\347\247\215\346\250\241\345\274\217\343\200\202\345\275\223\346\202\250\351\200\211\346\213\251\347\224\261\347\250\213\345\272\217\347\224\237\346\210\220\345\257\271\346\213\215\346\225\260\346\215\256\346\227\266\357\274\214\345\217\257\344\273\245\350\207\252\345\256\232\344\271\211\345\257\271\346\213\215\345\276\252\347\216\257\346\254\241\346\225\260\343\200\202\n"
"\343\200\220\346\225\231\345\255\246\346\274\224\347\244\272\343\200\221\346\234\254\345\212\237\350\203\275\345\257\271\346\225\231\345\255\246\344\270\255\346\266\211\345"
                        "\217\212\347\232\204\350\256\241\347\256\227\346\234\272\345\237\272\346\234\254\345\216\237\347\220\206\345\217\212\347\256\227\346\263\225\345\201\232\345\207\272\344\272\206\345\217\257\350\247\206\345\214\226\346\274\224\347\244\272\357\274\214\345\217\257\344\273\245\351\200\232\350\277\207\347\202\271\345\207\273\346\223\215\344\275\234\345\212\250\346\200\201\346\274\224\347\244\272\344\273\245\344\270\212\345\206\205\345\256\271\357\274\214\344\275\277\347\224\250\346\210\267\345\257\271\344\272\216\347\233\270\345\205\263\347\237\245\350\257\206\347\202\271\346\234\211\346\233\264\346\267\261\345\210\273\347\232\204\347\220\206\350\247\243\343\200\202\345\205\261\345\214\205\345\220\253\345\233\233\344\270\252\351\203\250\345\210\206\357\274\232\345\233\276\347\201\265\346\234\272\346\274\224\347\244\272\343\200\201\351\200\273\350\276\221\350\277\220\347\256\227\346\274\224\347\244\272\343\200\201\345\212\240\346\263\225\345\231\250\346\274\224\347\244\272\343\200\201\347\256\227\346\263\225\346\274\224"
                        "\347\244\272\343\200\202\n"
"", 0));
        click_for_instructions->setText(QApplication::translate("frmNavButton", "\347\202\271\345\207\273\346\255\244\345\244\204", 0));
        for_instructions->setText(QApplication::translate("frmNavButton", "\346\237\245\347\234\213PKU ICA Helper\347\232\204\345\256\214\346\225\264\344\275\277\347\224\250\346\225\231\347\250\213\346\226\207\346\241\243\343\200\202", 0));
        link_2_name->setText(QApplication::translate("frmNavButton", "\345\214\227\345\244\247\346\225\231\345\255\246\347\275\221", 0));
        link_3_name->setText(QApplication::translate("frmNavButton", "\345\214\227\345\244\247\344\277\241\346\201\257\351\227\250\346\210\267", 0));
        link_4_name->setText(QApplication::translate("frmNavButton", "\347\274\226\347\250\213\347\275\221\346\240\274", 0));
        link_5_name->setText(QApplication::translate("frmNavButton", "openjudge", 0));
        link_6_name->setText(QApplication::translate("frmNavButton", "\346\264\233\350\260\267", 0));
        link_2_link->setText(QApplication::translate("frmNavButton", "course.pku.edu.cn", 0));
        link_1_name->setText(QApplication::translate("frmNavButton", "\345\214\227\344\272\254\345\244\247\345\255\246", 0));
        link_1_link->setText(QApplication::translate("frmNavButton", "www.pku.edu.cn", 0));
        link_3_link->setText(QApplication::translate("frmNavButton", "portal.pku.edu.cn", 0));
        link_4_link->setText(QApplication::translate("frmNavButton", "programming.pku.edu.cn", 0));
        link_5_link->setText(QApplication::translate("frmNavButton", "openjudge.cn", 0));
        link_6_link->setText(QApplication::translate("frmNavButton", "www.luogu.com.cn", 0));
        morefun_add_problem->setText(QApplication::translate("frmNavButton", "\346\267\273\345\212\240\351\242\230\347\233\256", 0));
        morefun_statistics->setText(QApplication::translate("frmNavButton", "\346\225\260\346\215\256\347\273\237\350\256\241", 0));
        morefun_beginner->setText(QApplication::translate("frmNavButton", "\345\277\253\351\200\237\345\205\245\351\227\250", 0));
        morefun_links->setText(QApplication::translate("frmNavButton", "\345\217\213\346\203\205\351\223\276\346\216\245", 0));
        label_8->setText(QApplication::translate("frmNavButton", "<html><head/><body><p>PKU ICA Helper 0.1.0\346\230\257\345\214\227\344\272\254\345\244\247\345\255\2462022\345\271\264\346\230\245\347\250\213\345\272\217\350\256\276\350\256\241\345\256\236\344\271\240\347\232\204\350\257\276\347\250\213\345\244\247\344\275\234\344\270\232\351\241\271\347\233\256\343\200\202</p><p>\346\234\254\351\241\271\347\233\256\350\256\241\345\210\222\346\234\215\345\212\241\344\272\216\345\214\227\344\272\254\345\244\247\345\255\246\350\256\241\347\256\227\346\246\202\350\256\272\357\274\210A\357\274\211\350\257\276\347\250\213\347\232\204\346\225\231\345\255\246\344\270\216\345\256\236\350\267\265\357\274\214\344\271\237\345\217\257\345\272\224\347\224\250\344\272\216\345\205\266\345\256\203\347\274\226\347\250\213\347\261\273\350\257\276\347\250\213\343\200\202</p><p>\346\225\231\345\270\210\345\217\257\344\275\277\347\224\250\346\274\224\347\244\272\345\212\237\350\203\275\350\277\233\350\241\214\346\225\231\345\255\246\357\274\214\345\255\246\347\224\237\345\217\257\344\275\277\347"
                        "\224\250\346\265\213\350\257\225\343\200\201\345\257\271\346\213\215\343\200\201\347\273\203\344\271\240\347\255\211\345\212\237\350\203\275\350\276\205\345\212\251\347\274\226\347\250\213\345\255\246\344\271\240\343\200\202</p><p>\350\264\241\347\214\256\350\200\205\357\274\232\345\214\227\344\272\254\345\244\247\345\255\246\344\277\241\346\201\257\347\247\221\345\255\246\346\212\200\346\234\257\345\255\246\351\231\2422021\347\272\247\346\234\254\347\247\221\347\224\237yk\343\200\201zlx\343\200\201lxc</p><p>Copyright \302\251 2022 \351\232\217\346\234\272\347\224\237\346\210\220\345\231\250 </p><p>\346\240\271\346\215\256GNU General Public License v3.0\345\215\217\350\256\256\345\205\254\345\274\200</p></body></html>", 0));
        label_6->setText(QApplication::translate("frmNavButton", "<html><head/><body><p><img src=\":/images/MainPage.png\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class frmNavButton: public Ui_frmNavButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNAVBUTTON_H
