#ifndef TURING_PRE_H
#define TURING_PRE_H

#include <QMainWindow>

namespace Ui {
class turing_pre;
}

class turing_pre : public QMainWindow
{
    Q_OBJECT

public:
    explicit turing_pre(QWidget *parent = 0);
    ~turing_pre();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

private:
    Ui::turing_pre *ui;
};

#endif // TURING_PRE_H
