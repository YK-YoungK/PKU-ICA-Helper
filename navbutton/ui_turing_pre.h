/********************************************************************************
** Form generated from reading UI file 'turing_pre.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TURING_PRE_H
#define UI_TURING_PRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_turing_pre
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QToolButton *toolButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *turing_pre)
    {
        if (turing_pre->objectName().isEmpty())
            turing_pre->setObjectName(QStringLiteral("turing_pre"));
        turing_pre->resize(1504, 1151);
        centralwidget = new QWidget(turing_pre);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(970, 150, 291, 171));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 501, 431));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(1060, 650, 171, 51));
        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(860, 650, 171, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 90, 581, 441));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(720, 520, 911, 71));
        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(660, 650, 171, 51));
        turing_pre->setCentralWidget(centralwidget);
        label_3->raise();
        label_2->raise();
        label->raise();
        toolButton->raise();
        toolButton_2->raise();
        label_4->raise();
        toolButton_3->raise();
        menubar = new QMenuBar(turing_pre);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1504, 18));
        turing_pre->setMenuBar(menubar);
        statusbar = new QStatusBar(turing_pre);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        turing_pre->setStatusBar(statusbar);

        retranslateUi(turing_pre);

        QMetaObject::connectSlotsByName(turing_pre);
    } // setupUi

    void retranslateUi(QMainWindow *turing_pre)
    {
        turing_pre->setWindowTitle(QApplication::translate("turing_pre", "\345\233\276\347\201\265\346\234\272\346\274\224\347\244\272 V1.0.0", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("turing_pre", "TextLabel", 0));
        toolButton->setText(QApplication::translate("turing_pre", "\344\270\213\344\270\200\346\255\245>", 0));
        toolButton_2->setText(QApplication::translate("turing_pre", "\345\244\215\344\275\215", 0));
        label_3->setText(QApplication::translate("turing_pre", "TextLabel", 0));
        label_4->setText(QApplication::translate("turing_pre", "TextLabel", 0));
        toolButton_3->setText(QApplication::translate("turing_pre", "<\344\270\212\344\270\200\346\255\245", 0));
    } // retranslateUi

};

namespace Ui {
    class turing_pre: public Ui_turing_pre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURING_PRE_H
