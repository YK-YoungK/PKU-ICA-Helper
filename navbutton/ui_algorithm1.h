/********************************************************************************
** Form generated from reading UI file 'algorithm1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGORITHM1_H
#define UI_ALGORITHM1_H

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

class Ui_algorithm1
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *dfs;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *way;
    QGroupBox *groupBox_2;
    QLabel *bfs;
    QLabel *que;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *algorithm1)
    {
        if (algorithm1->objectName().isEmpty())
            algorithm1->setObjectName(QStringLiteral("algorithm1"));
        algorithm1->resize(1357, 803);
        centralwidget = new QWidget(algorithm1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 211, 51));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 651, 651));
        dfs = new QLabel(groupBox);
        dfs->setObjectName(QStringLiteral("dfs"));
        dfs->setGeometry(QRect(60, 50, 561, 441));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 590, 141, 41));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 590, 141, 41));
        way = new QLabel(groupBox);
        way->setObjectName(QStringLiteral("way"));
        way->setGeometry(QRect(0, 490, 651, 71));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(680, 60, 611, 651));
        bfs = new QLabel(groupBox_2);
        bfs->setObjectName(QStringLiteral("bfs"));
        bfs->setGeometry(QRect(60, 50, 551, 441));
        que = new QLabel(groupBox_2);
        que->setObjectName(QStringLiteral("que"));
        que->setGeometry(QRect(100, 480, 441, 71));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 590, 141, 41));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 590, 141, 41));
        algorithm1->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(algorithm1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        algorithm1->setStatusBar(statusbar);

        retranslateUi(algorithm1);

        QMetaObject::connectSlotsByName(algorithm1);
    } // setupUi

    void retranslateUi(QMainWindow *algorithm1)
    {
        algorithm1->setWindowTitle(QApplication::translate("algorithm1", "\347\256\227\346\263\225\346\274\224\347\244\272 V1.0.0", 0));
        label->setText(QApplication::translate("algorithm1", "\345\257\273\346\211\276\350\267\257\345\276\2040-9", 0));
        groupBox->setTitle(QApplication::translate("algorithm1", "\346\267\261\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0));
        dfs->setText(QApplication::translate("algorithm1", "TextLabel", 0));
        pushButton->setText(QApplication::translate("algorithm1", "\344\270\213\344\270\200\346\255\245", 0));
        pushButton_2->setText(QApplication::translate("algorithm1", "\345\244\215\344\275\215", 0));
        way->setText(QApplication::translate("algorithm1", "TextLabel", 0));
        groupBox_2->setTitle(QApplication::translate("algorithm1", "\345\271\277\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0));
        bfs->setText(QApplication::translate("algorithm1", "TextLabel", 0));
        que->setText(QApplication::translate("algorithm1", "TextLabel", 0));
        pushButton_3->setText(QApplication::translate("algorithm1", "\345\244\215\344\275\215", 0));
        pushButton_4->setText(QApplication::translate("algorithm1", "\344\270\213\344\270\200\346\255\245", 0));
    } // retranslateUi

};

namespace Ui {
    class algorithm1: public Ui_algorithm1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGORITHM1_H
