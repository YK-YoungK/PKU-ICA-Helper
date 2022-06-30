/********************************************************************************
** Form generated from reading UI file 'test_problems.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_PROBLEMS_H
#define UI_TEST_PROBLEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_problems
{
public:
    QPushButton *submit_code;
    QGroupBox *problem_list;
    QRadioButton *problem_1;
    QRadioButton *problem_3;
    QRadioButton *problem_2;
    QRadioButton *problem_5;
    QRadioButton *problem_4;
    QRadioButton *problem_6;
    QRadioButton *problem_7;
    QRadioButton *problem_8;
    QRadioButton *problem_9;
    QPushButton *exit_exam;
    QLabel *time_remain;
    QGroupBox *judging_result;
    QLabel *result;
    QLabel *accepted_num;
    QTextBrowser *problem_details;

    void setupUi(QWidget *test_problems)
    {
        if (test_problems->objectName().isEmpty())
            test_problems->setObjectName(QStringLiteral("test_problems"));
        test_problems->resize(592, 391);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        test_problems->setFont(font);
        submit_code = new QPushButton(test_problems);
        submit_code->setObjectName(QStringLiteral("submit_code"));
        submit_code->setGeometry(QRect(10, 310, 121, 31));
        problem_list = new QGroupBox(test_problems);
        problem_list->setObjectName(QStringLiteral("problem_list"));
        problem_list->setGeometry(QRect(10, 10, 120, 291));
        problem_1 = new QRadioButton(problem_list);
        problem_1->setObjectName(QStringLiteral("problem_1"));
        problem_1->setGeometry(QRect(20, 20, 91, 19));
        problem_3 = new QRadioButton(problem_list);
        problem_3->setObjectName(QStringLiteral("problem_3"));
        problem_3->setGeometry(QRect(20, 80, 91, 19));
        problem_2 = new QRadioButton(problem_list);
        problem_2->setObjectName(QStringLiteral("problem_2"));
        problem_2->setGeometry(QRect(20, 50, 91, 19));
        problem_5 = new QRadioButton(problem_list);
        problem_5->setObjectName(QStringLiteral("problem_5"));
        problem_5->setGeometry(QRect(20, 140, 91, 19));
        problem_4 = new QRadioButton(problem_list);
        problem_4->setObjectName(QStringLiteral("problem_4"));
        problem_4->setGeometry(QRect(20, 110, 91, 19));
        problem_6 = new QRadioButton(problem_list);
        problem_6->setObjectName(QStringLiteral("problem_6"));
        problem_6->setGeometry(QRect(20, 170, 91, 19));
        problem_7 = new QRadioButton(problem_list);
        problem_7->setObjectName(QStringLiteral("problem_7"));
        problem_7->setGeometry(QRect(20, 200, 91, 19));
        problem_8 = new QRadioButton(problem_list);
        problem_8->setObjectName(QStringLiteral("problem_8"));
        problem_8->setGeometry(QRect(20, 230, 91, 19));
        problem_9 = new QRadioButton(problem_list);
        problem_9->setObjectName(QStringLiteral("problem_9"));
        problem_9->setEnabled(true);
        problem_9->setGeometry(QRect(20, 260, 91, 19));
        exit_exam = new QPushButton(test_problems);
        exit_exam->setObjectName(QStringLiteral("exit_exam"));
        exit_exam->setGeometry(QRect(10, 350, 121, 31));
        time_remain = new QLabel(test_problems);
        time_remain->setObjectName(QStringLiteral("time_remain"));
        time_remain->setGeometry(QRect(140, 10, 271, 16));
        judging_result = new QGroupBox(test_problems);
        judging_result->setObjectName(QStringLiteral("judging_result"));
        judging_result->setGeometry(QRect(420, 10, 161, 41));
        result = new QLabel(judging_result);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(10, 20, 141, 16));
        result->setAlignment(Qt::AlignCenter);
        accepted_num = new QLabel(test_problems);
        accepted_num->setObjectName(QStringLiteral("accepted_num"));
        accepted_num->setGeometry(QRect(140, 30, 271, 16));
        problem_details = new QTextBrowser(test_problems);
        problem_details->setObjectName(QStringLiteral("problem_details"));
        problem_details->setGeometry(QRect(140, 60, 441, 321));

        retranslateUi(test_problems);

        QMetaObject::connectSlotsByName(test_problems);
    } // setupUi

    void retranslateUi(QWidget *test_problems)
    {
        test_problems->setWindowTitle(QApplication::translate("test_problems", "Form", 0));
        submit_code->setText(QApplication::translate("test_problems", "\346\217\220\344\272\244/Submit", 0));
        problem_list->setTitle(QApplication::translate("test_problems", "\351\242\230\347\233\256\345\210\227\350\241\250", 0));
        problem_1->setText(QApplication::translate("test_problems", "\351\242\2301", 0));
        problem_3->setText(QApplication::translate("test_problems", "\351\242\2303", 0));
        problem_2->setText(QApplication::translate("test_problems", "\351\242\2302", 0));
        problem_5->setText(QApplication::translate("test_problems", "\351\242\2305", 0));
        problem_4->setText(QApplication::translate("test_problems", "\351\242\2304", 0));
        problem_6->setText(QApplication::translate("test_problems", "\351\242\2306", 0));
        problem_7->setText(QApplication::translate("test_problems", "\351\242\2307", 0));
        problem_8->setText(QApplication::translate("test_problems", "\351\242\2308", 0));
        problem_9->setText(QApplication::translate("test_problems", "\351\242\2309", 0));
        exit_exam->setText(QApplication::translate("test_problems", "\351\200\200\345\207\272/Exit", 0));
        time_remain->setText(QApplication::translate("test_problems", "\345\273\272\350\256\256\347\224\250\346\227\266\345\211\251\344\275\231\357\274\232", 0));
        judging_result->setTitle(QApplication::translate("test_problems", "\346\217\220\344\272\244\347\212\266\346\200\201", 0));
        result->setText(QString());
        accepted_num->setText(QApplication::translate("test_problems", "\345\275\223\345\211\215\351\200\232\350\277\207\351\242\230\346\225\260\357\274\2320", 0));
    } // retranslateUi

};

namespace Ui {
    class test_problems: public Ui_test_problems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_PROBLEMS_H
