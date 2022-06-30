#include "teaching_p.h"
#include "ui_teaching_p.h"
#include "turing_pre.h"
#include "ui_turing_pre.h"
#include "algorithm1.h"
#include "ui_algorithm1.h"
#include "bool1.h"
#include "ui_bool1.h"
#include "plusm.h"
#include "ui_plusm.h"

teaching_p::teaching_p(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::teaching_p)
{
    ui->setupUi(this);
    QImage* img=new QImage;
    img->load(":/pic/f1.png");
    ui->label->setPixmap(QPixmap::fromImage(*img));
}

teaching_p::~teaching_p()
{
    delete ui;
    page1.close();page2.close();page3.close();page5.close();
}

void teaching_p::on_turing_pre_button_clicked()
{
    page5.show();
}

void teaching_p::on_bool1_button_clicked()
{
    page2.show();
}

void teaching_p::on_plusm_button_clicked()
{
    page3.show();
}


void teaching_p::on_algorithm1_button_clicked()
{
    page1.show();
}
