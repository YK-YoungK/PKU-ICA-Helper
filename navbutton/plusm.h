#ifndef PLUSM_H
#define PLUSM_H

#include <QMainWindow>

namespace Ui {
class plusm;
}

class plusm : public QMainWindow
{
    Q_OBJECT

public:
    explicit plusm(QWidget *parent = 0);
    ~plusm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void halfchange();

    void allchange();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::plusm *ui;
};

#endif // PLUSM_H
