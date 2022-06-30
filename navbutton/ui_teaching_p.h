/********************************************************************************
** Form generated from reading UI file 'teaching_p.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHING_P_H
#define UI_TEACHING_P_H

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

class Ui_teaching_p
{
public:
    QWidget *centralWidget;
    QToolButton *turing_pre_button;
    QToolButton *bool1_button;
    QToolButton *plusm_button;
    QToolButton *algorithm1_button;
    QLabel *label;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *teaching_p)
    {
        if (teaching_p->objectName().isEmpty())
            teaching_p->setObjectName(QStringLiteral("teaching_p"));
        teaching_p->resize(1044, 834);
        centralWidget = new QWidget(teaching_p);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        turing_pre_button = new QToolButton(centralWidget);
        turing_pre_button->setObjectName(QStringLiteral("turing_pre_button"));
        turing_pre_button->setGeometry(QRect(60, 60, 251, 61));
        bool1_button = new QToolButton(centralWidget);
        bool1_button->setObjectName(QStringLiteral("bool1_button"));
        bool1_button->setGeometry(QRect(60, 230, 251, 61));
        plusm_button = new QToolButton(centralWidget);
        plusm_button->setObjectName(QStringLiteral("plusm_button"));
        plusm_button->setGeometry(QRect(60, 390, 251, 61));
        algorithm1_button = new QToolButton(centralWidget);
        algorithm1_button->setObjectName(QStringLiteral("algorithm1_button"));
        algorithm1_button->setGeometry(QRect(60, 560, 251, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(560, 120, 571, 401));
        teaching_p->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(teaching_p);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1044, 18));
        teaching_p->setMenuBar(menuBar);
        statusBar = new QStatusBar(teaching_p);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        teaching_p->setStatusBar(statusBar);

        retranslateUi(teaching_p);

        QMetaObject::connectSlotsByName(teaching_p);
    } // setupUi

    void retranslateUi(QMainWindow *teaching_p)
    {
        teaching_p->setWindowTitle(QApplication::translate("teaching_p", "\346\225\231\345\255\246\346\274\224\347\244\272 V1.0.0", 0));
        turing_pre_button->setText(QApplication::translate("teaching_p", "\345\233\276\347\201\265\346\234\272\346\274\224\347\244\272", 0));
        bool1_button->setText(QApplication::translate("teaching_p", "\351\200\273\350\276\221\350\277\220\347\256\227", 0));
        plusm_button->setText(QApplication::translate("teaching_p", "\345\212\240\346\263\225\345\231\250", 0));
        algorithm1_button->setText(QApplication::translate("teaching_p", "\347\256\227\346\263\225\346\274\224\347\244\272", 0));
        label->setText(QApplication::translate("teaching_p", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class teaching_p: public Ui_teaching_p {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHING_P_H
