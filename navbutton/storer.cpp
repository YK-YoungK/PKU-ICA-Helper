#include "storer.h"
#include "ui_storer.h"

storer::storer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::storer)
{
    ui->setupUi(this);
}

storer::~storer()
{
    delete ui;
}
