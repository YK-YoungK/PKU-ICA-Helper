/********************************************************************************
** Form generated from reading UI file 'plusm.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUSM_H
#define UI_PLUSM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plusm
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *halfpic;
    QLabel *halfnum;
    QLabel *A;
    QLabel *B;
    QLabel *S;
    QLabel *C;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QLabel *allpic;
    QLabel *allnum;
    QLabel *A1;
    QLabel *B1;
    QLabel *C1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *kd1;
    QLabel *kd2;
    QLabel *kd3;
    QLabel *S1;
    QLabel *C2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *plusm)
    {
        if (plusm->objectName().isEmpty())
            plusm->setObjectName(QStringLiteral("plusm"));
        plusm->resize(1371, 1023);
        centralwidget = new QWidget(plusm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 591, 801));
        halfpic = new QLabel(groupBox);
        halfpic->setObjectName(QStringLiteral("halfpic"));
        halfpic->setGeometry(QRect(80, 60, 561, 371));
        halfnum = new QLabel(groupBox);
        halfnum->setObjectName(QStringLiteral("halfnum"));
        halfnum->setGeometry(QRect(40, 460, 621, 181));
        A = new QLabel(groupBox);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(30, 90, 171, 31));
        B = new QLabel(groupBox);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(30, 190, 131, 51));
        S = new QLabel(groupBox);
        S->setObjectName(QStringLiteral("S"));
        S->setGeometry(QRect(460, 90, 141, 41));
        C = new QLabel(groupBox);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(460, 350, 141, 41));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 40, 151, 41));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 240, 151, 41));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(610, 10, 721, 801));
        allpic = new QLabel(groupBox_2);
        allpic->setObjectName(QStringLiteral("allpic"));
        allpic->setGeometry(QRect(220, 60, 431, 371));
        allnum = new QLabel(groupBox_2);
        allnum->setObjectName(QStringLiteral("allnum"));
        allnum->setGeometry(QRect(240, 400, 331, 381));
        A1 = new QLabel(groupBox_2);
        A1->setObjectName(QStringLiteral("A1"));
        A1->setGeometry(QRect(20, 60, 171, 41));
        B1 = new QLabel(groupBox_2);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setGeometry(QRect(20, 170, 171, 41));
        C1 = new QLabel(groupBox_2);
        C1->setObjectName(QStringLiteral("C1"));
        C1->setGeometry(QRect(20, 280, 141, 41));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 110, 181, 41));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 220, 181, 41));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 330, 181, 41));
        kd1 = new QLabel(groupBox_2);
        kd1->setObjectName(QStringLiteral("kd1"));
        kd1->setGeometry(QRect(360, 130, 51, 51));
        kd2 = new QLabel(groupBox_2);
        kd2->setObjectName(QStringLiteral("kd2"));
        kd2->setGeometry(QRect(450, 240, 51, 41));
        kd3 = new QLabel(groupBox_2);
        kd3->setObjectName(QStringLiteral("kd3"));
        kd3->setGeometry(QRect(450, 310, 51, 41));
        S1 = new QLabel(groupBox_2);
        S1->setObjectName(QStringLiteral("S1"));
        S1->setGeometry(QRect(510, 180, 121, 41));
        C2 = new QLabel(groupBox_2);
        C2->setObjectName(QStringLiteral("C2"));
        C2->setGeometry(QRect(500, 330, 161, 41));
        plusm->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(plusm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        plusm->setStatusBar(statusbar);

        retranslateUi(plusm);

        QMetaObject::connectSlotsByName(plusm);
    } // setupUi

    void retranslateUi(QMainWindow *plusm)
    {
        plusm->setWindowTitle(QApplication::translate("plusm", "\345\212\240\346\263\225\345\231\250\346\274\224\347\244\272 V1.0.0", 0));
        groupBox->setTitle(QApplication::translate("plusm", "\345\215\212\345\212\240\345\231\250", 0));
        halfpic->setText(QApplication::translate("plusm", "TextLabel", 0));
        halfnum->setText(QApplication::translate("plusm", "TextLabel", 0));
        A->setText(QApplication::translate("plusm", "\350\242\253\345\212\240\346\225\260A\357\274\2320", 0));
        B->setText(QApplication::translate("plusm", "\345\212\240\346\225\260B\357\274\2320", 0));
        S->setText(QApplication::translate("plusm", "\346\234\254\344\275\215S\357\274\2320", 0));
        C->setText(QApplication::translate("plusm", "\350\277\233\344\275\215C\357\274\2320", 0));
        pushButton->setText(QApplication::translate("plusm", "\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("plusm", "\344\277\256\346\224\271", 0));
        groupBox_2->setTitle(QApplication::translate("plusm", "\345\205\250\345\212\240\345\231\250", 0));
        allpic->setText(QApplication::translate("plusm", "TextLabel", 0));
        allnum->setText(QApplication::translate("plusm", "TextLabel", 0));
        A1->setText(QApplication::translate("plusm", "\350\242\253\345\212\240\346\225\260A\357\274\2320", 0));
        B1->setText(QApplication::translate("plusm", "\345\212\240\346\225\260B\357\274\2320", 0));
        C1->setText(QApplication::translate("plusm", "\350\277\233\344\275\215C0\357\274\2320", 0));
        pushButton_3->setText(QApplication::translate("plusm", "\344\277\256\346\224\271", 0));
        pushButton_4->setText(QApplication::translate("plusm", "\344\277\256\346\224\271", 0));
        pushButton_5->setText(QApplication::translate("plusm", "\344\277\256\346\224\271", 0));
        kd1->setText(QApplication::translate("plusm", "TextLabel", 0));
        kd2->setText(QApplication::translate("plusm", "TextLabel", 0));
        kd3->setText(QApplication::translate("plusm", "TextLabel", 0));
        S1->setText(QApplication::translate("plusm", "\346\234\254\344\275\215S\357\274\2320", 0));
        C2->setText(QApplication::translate("plusm", "\350\277\233\344\275\215C1\357\274\2320", 0));
    } // retranslateUi

};

namespace Ui {
    class plusm: public Ui_plusm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUSM_H
