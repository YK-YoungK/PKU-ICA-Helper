//图灵机演示 by lxc
//可交互的图灵机示例
#include "turing_pre.h"
#include "ui_turing_pre.h"

QImage* img=new QImage;
QImage* img1=new QImage;
QImage* img2=new QImage;
QImage* img3=new QImage;
turing_pre::turing_pre(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::turing_pre)
{
    ui->setupUi(this);
    this->resize(1300,760);
    this->setWindowIcon(QIcon("://images/lion.png"));//设置页面图标
    this->setWindowTitle("图灵机 - PKU ICA Helper 0.1.0");//设置页面标题

    img->load(":/pic/0f49c8c0959cd47666a43dde01e42ba3.png");
    ui->label_2->setPixmap(QPixmap::fromImage(*img));
    img1->load(":/pic/p1.png");
    ui->label_3->setPixmap(QPixmap::fromImage(*img1));
    img2->load(":/pic/g1.png");
    ui->label_4->setPixmap(QPixmap::fromImage(*img2));
    ui->toolButton_3->setEnabled(false);
}

turing_pre::~turing_pre()
{
    delete ui;
}
int now=0;
int x1;int y2;
void turing_pre::on_toolButton_clicked()
{
    if(now==0){int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();x1=x;y2=y;ui->label_4->move(x-70,y);ui->toolButton_3->setEnabled(true);now++;return;}
    if(now==1||now==2){int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x-70,y);now++;return;}
    if(now==3){img1->load(":/pic/p2.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x-70,y);now++;return;}
    if(now==4){img1->load(":/pic/p3.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x-70,y);img2->load(":/pic/g2.png");ui->label_4->setPixmap(QPixmap::fromImage(*img2));now++;return;}
    if(now==5||now==6){int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x-70,y);now++;return;}
    if(now==7){img1->load(":/pic/p4.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x-70,y);now++;return;}
    if(now==8){img1->load(":/pic/p5.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x+70,y);now++;return;}
    if(now==9){img1->load(":/pic/p6.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x+70,y);img2->load(":/pic/g3.png");ui->label_4->setPixmap(QPixmap::fromImage(*img2));img3->load(":/pic/e1.png");ui->label->setPixmap(QPixmap::fromImage(*img3));ui->toolButton->setEnabled(false);ui->toolButton_3->setEnabled(false);now++;return;}
}


void turing_pre::on_toolButton_2_clicked()
{
    now=0;img1->load(":/pic/p1.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));
    ui->label_4->move(x1,y2);img2->load(":/pic/g1.png");ui->label_4->setPixmap(QPixmap::fromImage(*img2));
    ui->toolButton->setEnabled(true);ui->label->clear();ui->toolButton_3->setEnabled(false);
}

void turing_pre::on_toolButton_3_clicked()
{
    now--;
    if(now==0){ui->toolButton_3->setEnabled(false);}
    if(now==0||now==1||now==2){int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x+70,y);return;}
    if(now==3){img1->load(":/pic/p1.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x+70,y);return;}
    if(now==4){img1->load(":/pic/p2.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x+70,y);img2->load(":/pic/g1.png");ui->label_4->setPixmap(QPixmap::fromImage(*img2));return;}
    if(now==5||now==6){int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x+70,y);return;}
    if(now==7){img1->load(":/pic/p3.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x+70,y);return;}
    if(now==8){img1->load(":/pic/p4.png");ui->label_3->setPixmap(QPixmap::fromImage(*img1));int x = ui->label_4->pos().x();int y = ui->label_4->pos().y();ui->label_4->move(x-70,y);return;}
}
