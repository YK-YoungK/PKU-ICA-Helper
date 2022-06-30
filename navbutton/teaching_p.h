#ifndef TEACHING_P_H
#define TEACHING_P_H

#include <QMainWindow>
#include <turing_pre.h>
#include <algorithm1.h>
#include <bool1.h>
#include <plusm.h>
#include <storer.h>

namespace Ui {
class teaching_p;
}

class teaching_p : public QMainWindow
{
    Q_OBJECT

public:
    algorithm1 page1;
    bool1 page2;
    plusm page3;
    turing_pre page5;
    explicit teaching_p(QWidget *parent = 0);
    ~teaching_p();

private slots:
    void on_turing_pre_button_clicked();

    void on_bool1_button_clicked();

    void on_plusm_button_clicked();

    void on_algorithm1_button_clicked();

private:
    Ui::teaching_p *ui;
};

#endif // TEACHING_P_H
