//加法器演示 by lxc
//简单易懂的加法器原理示例

#include "plusm.h"
#include "ui_plusm.h"
QImage* imgp=new QImage;
QImage* imgp2=new QImage;
QImage* imgp3=new QImage;
QImage* imgp4=new QImage;
QImage* imgp5=new QImage;
QImage* imgp6=new QImage;
QImage* imgp7=new QImage;
int a1=-1;int a2=-1;
int b1=-1;int b2=-1;int b3=-1;
plusm::plusm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::plusm)
{
    ui->setupUi(this);
    this->resize(1300,760);
    this->setWindowIcon(QIcon("://images/lion.png"));//设置页面图标
    this->setWindowTitle("加法器 - PKU ICA Helper 0.1.0");//设置页面标题

    imgp->load(":/pic/halfpic.png");
    ui->halfpic->setPixmap(QPixmap::fromImage(*imgp));
    imgp2->load(":/pic/halfnum.png");
    ui->halfnum->setPixmap(QPixmap::fromImage(*imgp2));
    imgp3->load(":/pic/allpic.png");
    ui->allpic->setPixmap(QPixmap::fromImage(*imgp3));
    imgp4->load(":/pic/allnum.png");
    ui->allnum->setPixmap(QPixmap::fromImage(*imgp4));
    imgp5->load(":/pic/0.png");
    ui->kd1->setPixmap(QPixmap::fromImage(*imgp5));
    imgp6->load(":/pic/0.png");
    ui->kd2->setPixmap(QPixmap::fromImage(*imgp6));
    imgp7->load(":/pic/0.png");
    ui->kd3->setPixmap(QPixmap::fromImage(*imgp7));
}

plusm::~plusm()
{
    delete ui;
}
void plusm::halfchange(){
    if(a1==-1&&a2==-1){ui->A->setText("被加数A：0");ui->B->setText("加数B：0");ui->S->setText("本位S：0");ui->C->setText("进位C：0");}
    if(a1==1&&a2==-1){ui->A->setText("被加数A：1");ui->B->setText("加数B：0");ui->S->setText("本位S：1");ui->C->setText("进位C：0");}
    if(a1==-1&&a2==1){ui->A->setText("被加数A：0");ui->B->setText("加数B：1");ui->S->setText("本位S：1");ui->C->setText("进位C：0");}
    if(a1==1&&a2==1){ui->A->setText("被加数A：1");ui->B->setText("加数B：1");ui->S->setText("本位S：0");ui->C->setText("进位C：1");}
}
void plusm::allchange(){
    if(b1==-1){ui->A1->setText("被加数A：0");}else{ui->A1->setText("被加数A：1");}
    if(b2==-1){ui->B1->setText("加数B：0");}else{ui->B1->setText("加数B：1");}
    if(b3==-1){ui->C1->setText("进位C0：0");}else{ui->C1->setText("进位C0：1");}
    if(b1==b2){imgp5->load(":/pic/0.png");ui->kd1->setPixmap(QPixmap::fromImage(*imgp5));}else{imgp5->load(":/pic/1.png");ui->kd1->setPixmap(QPixmap::fromImage(*imgp5));}
    if(b1!=b2&&b3==1){imgp6->load(":/pic/1.png");ui->kd2->setPixmap(QPixmap::fromImage(*imgp6));}else{imgp6->load(":/pic/0.png");ui->kd2->setPixmap(QPixmap::fromImage(*imgp6));}
    if(b1+b2==2){imgp7->load(":/pic/1.png");ui->kd3->setPixmap(QPixmap::fromImage(*imgp7));}else{imgp7->load(":/pic/0.png");ui->kd3->setPixmap(QPixmap::fromImage(*imgp7));}
    if(b1+b2+b3==-1||b1+b2+b3==3){ui->S1->setText("本位S：1");}else{ui->S1->setText("本位S：0");}
    if(b1+b2+b3>=1){ui->C2->setText("进位C1：1");}else{ui->C2->setText("进位C1：0");}
}

void plusm::on_pushButton_clicked()
{
    a1=-a1;halfchange();
}

void plusm::on_pushButton_2_clicked()
{
    a2=-a2;halfchange();
}

void plusm::on_pushButton_3_clicked()
{
    b1=-b1;allchange();
}

void plusm::on_pushButton_4_clicked()
{
    b2=-b2;allchange();
}

void plusm::on_pushButton_5_clicked()
{
    b3=-b3;allchange();
}
