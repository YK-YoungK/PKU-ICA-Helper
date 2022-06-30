#ifndef STORER_H
#define STORER_H

#include <QMainWindow>

namespace Ui {
class storer;
}

class storer : public QMainWindow
{
    Q_OBJECT

public:
    explicit storer(QWidget *parent = 0);
    ~storer();

private:
    Ui::storer *ui;
};

#endif // STORER_H
