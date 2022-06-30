#ifndef BOOL1_H
#define BOOL1_H

#include <QMainWindow>

namespace Ui {
class bool1;
}

class bool1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit bool1(QWidget *parent = 0);
    ~bool1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void page1change();

    void page2change();

    void page3change();

    void page4change();

    void page5change();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

private:
    Ui::bool1 *ui;
};

#endif // BOOL1_H
