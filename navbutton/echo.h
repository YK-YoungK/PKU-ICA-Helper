#ifndef ECHO_H
#define ECHO_H

#include <QWidget>
#include <QMovie>
#include <QProcess>
#include "direct.h"
#include <QFile>
#include<QTextStream>

namespace Ui {
class echo;
}

class echo : public QWidget
{
    Q_OBJECT

public:
    explicit echo(QWidget *parent = 0);
    ~echo();

    int inputState=-1;
    int loopNum=10;

    QFile stdop,testop;
    QFile inp;

    bool goon=1;
    char cwd[500];

    void init();
    void input_gene();
    void input_manual();
    void run0();
    void run1();
    void run2();
    void run_with_input();
    void run_without_input();
    void compare();


private slots:
    void on_input_reset_clicked();

    void on_input_confirm_clicked();

    void on_result_display_clicked();

    void on_std_show_clicked();

    void on_test_show_clicked();

    void on_input_show_clicked();

private:
    Ui::echo *ui;
};

#endif // ECHO_H
