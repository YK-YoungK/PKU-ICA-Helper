#ifndef ALGORITHM1_H
#define ALGORITHM1_H

#include <QMainWindow>

namespace Ui {
class algorithm1;
}

class algorithm1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit algorithm1(QWidget *parent = 0);
    ~algorithm1();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void changeit();

    void changethat();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::algorithm1 *ui;
};

#endif // ALGORITHM1_H
