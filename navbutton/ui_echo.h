/********************************************************************************
** Form generated from reading UI file 'echo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECHO_H
#define UI_ECHO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_echo
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page0_Loading;
    QGroupBox *Counting;
    QLabel *plan_name;
    QLabel *plan_num;
    QLabel *done_name;
    QLabel *done_num;
    QWidget *page1_Manual_Input;
    QTextEdit *input_textedit;
    QPushButton *input_reset;
    QPushButton *input_confirm;
    QWidget *page2_Result_Error;
    QPushButton *std_show;
    QTextBrowser *test_diff;
    QPushButton *test_show;
    QTextBrowser *std_diff;
    QTextBrowser *input;
    QPushButton *input_show;
    QLabel *label_3;
    QWidget *page3_Result_OK;
    QLabel *label;
    QLabel *ok_loopNum;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QWidget *echo)
    {
        if (echo->objectName().isEmpty())
            echo->setObjectName(QStringLiteral("echo"));
        echo->resize(300, 180);
        stackedWidget = new QStackedWidget(echo);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 601, 361));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(4);
        stackedWidget->setFont(font);
        page0_Loading = new QWidget();
        page0_Loading->setObjectName(QStringLiteral("page0_Loading"));
        Counting = new QGroupBox(page0_Loading);
        Counting->setObjectName(QStringLiteral("Counting"));
        Counting->setGeometry(QRect(60, 30, 171, 101));
        plan_name = new QLabel(Counting);
        plan_name->setObjectName(QStringLiteral("plan_name"));
        plan_name->setGeometry(QRect(31, 31, 81, 21));
        plan_num = new QLabel(Counting);
        plan_num->setObjectName(QStringLiteral("plan_num"));
        plan_num->setGeometry(QRect(130, 30, 16, 21));
        done_name = new QLabel(Counting);
        done_name->setObjectName(QStringLiteral("done_name"));
        done_name->setGeometry(QRect(31, 61, 81, 21));
        done_num = new QLabel(Counting);
        done_num->setObjectName(QStringLiteral("done_num"));
        done_num->setGeometry(QRect(130, 60, 16, 21));
        stackedWidget->addWidget(page0_Loading);
        page1_Manual_Input = new QWidget();
        page1_Manual_Input->setObjectName(QStringLiteral("page1_Manual_Input"));
        input_textedit = new QTextEdit(page1_Manual_Input);
        input_textedit->setObjectName(QStringLiteral("input_textedit"));
        input_textedit->setGeometry(QRect(30, 20, 241, 111));
        input_reset = new QPushButton(page1_Manual_Input);
        input_reset->setObjectName(QStringLiteral("input_reset"));
        input_reset->setGeometry(QRect(50, 146, 80, 21));
        input_confirm = new QPushButton(page1_Manual_Input);
        input_confirm->setObjectName(QStringLiteral("input_confirm"));
        input_confirm->setGeometry(QRect(170, 146, 80, 21));
        stackedWidget->addWidget(page1_Manual_Input);
        page2_Result_Error = new QWidget();
        page2_Result_Error->setObjectName(QStringLiteral("page2_Result_Error"));
        std_show = new QPushButton(page2_Result_Error);
        std_show->setObjectName(QStringLiteral("std_show"));
        std_show->setGeometry(QRect(180, 90, 101, 31));
        test_diff = new QTextBrowser(page2_Result_Error);
        test_diff->setObjectName(QStringLiteral("test_diff"));
        test_diff->setGeometry(QRect(20, 130, 151, 31));
        test_show = new QPushButton(page2_Result_Error);
        test_show->setObjectName(QStringLiteral("test_show"));
        test_show->setGeometry(QRect(180, 130, 101, 31));
        std_diff = new QTextBrowser(page2_Result_Error);
        std_diff->setObjectName(QStringLiteral("std_diff"));
        std_diff->setGeometry(QRect(20, 90, 151, 31));
        input = new QTextBrowser(page2_Result_Error);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(20, 50, 151, 31));
        input_show = new QPushButton(page2_Result_Error);
        input_show->setObjectName(QStringLiteral("input_show"));
        input_show->setGeometry(QRect(180, 50, 101, 31));
        label_3 = new QLabel(page2_Result_Error);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 9, 261, 31));
        stackedWidget->addWidget(page2_Result_Error);
        page3_Result_OK = new QWidget();
        page3_Result_OK->setObjectName(QStringLiteral("page3_Result_OK"));
        label = new QLabel(page3_Result_OK);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 100, 121, 31));
        QFont font1;
        font1.setPointSize(5);
        label->setFont(font1);
        ok_loopNum = new QLabel(page3_Result_OK);
        ok_loopNum->setObjectName(QStringLiteral("ok_loopNum"));
        ok_loopNum->setGeometry(QRect(160, 100, 45, 31));
        ok_loopNum->setFont(font1);
        label_2 = new QLabel(page3_Result_OK);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 50, 121, 31));
        label_2->setFont(font1);
        line = new QFrame(page3_Result_OK);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(50, 30, 201, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(page3_Result_OK);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(50, 130, 201, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(page3_Result_OK);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(240, 40, 21, 101));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(page3_Result_OK);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(40, 40, 21, 101));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page3_Result_OK);

        retranslateUi(echo);

        QMetaObject::connectSlotsByName(echo);
    } // setupUi

    void retranslateUi(QWidget *echo)
    {
        echo->setWindowTitle(QApplication::translate("echo", "Form", 0));
        Counting->setTitle(QApplication::translate("echo", "\350\257\267\347\250\215\345\200\231...", 0));
        plan_name->setText(QApplication::translate("echo", "\350\256\241\345\210\222\345\276\252\347\216\257\346\254\241\346\225\260:     ", 0));
        plan_num->setText(QApplication::translate("echo", "0", 0));
        done_name->setText(QApplication::translate("echo", "\345\256\214\346\210\220\345\276\252\347\216\257\346\254\241\346\225\260:     ", 0));
        done_num->setText(QApplication::translate("echo", "0", 0));
        input_reset->setText(QApplication::translate("echo", "\351\207\215    \347\275\256", 0));
        input_confirm->setText(QApplication::translate("echo", "\347\241\256    \350\256\244", 0));
        std_show->setText(QApplication::translate("echo", "\346\237\245\347\234\213\346\240\207\345\207\206\350\276\223\345\207\272", 0));
        test_show->setText(QApplication::translate("echo", "\346\237\245\347\234\213\346\265\213\350\257\225\350\276\223\345\207\272", 0));
        input_show->setText(QApplication::translate("echo", "\346\237\245\347\234\213\345\256\214\346\225\264\350\276\223\345\205\245", 0));
        label_3->setText(QApplication::translate("echo", "<html><head/><body><p align=\"center\">\351\224\231\350\257\257\344\277\241\346\201\257\344\273\205\346\230\276\347\244\272\344\270\200\350\241\214\357\274\214\347\202\271\345\207\273\345\217\263\344\276\247\346\214\211\351\222\256\346\237\245\347\234\213\346\233\264\345\244\232\343\200\202</p></body></html>", 0));
        label->setText(QApplication::translate("echo", "\346\265\213\350\257\225\347\273\204\346\225\260\357\274\232", 0));
        ok_loopNum->setText(QApplication::translate("echo", "1", 0));
        label_2->setText(QApplication::translate("echo", "\345\257\271\346\213\215\351\200\232\350\277\207\357\274\201\357\274\201\357\274\201", 0));
    } // retranslateUi

};

namespace Ui {
    class echo: public Ui_echo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECHO_H
