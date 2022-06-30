//逻辑运算演示 by lxc
//包括与门/或门/非门/异或门/同或门的演示

#include "bool1.h"
#include "ui_bool1.h"
QImage* imgb=new QImage;
QImage* imgb2=new QImage;
QImage* imgb3=new QImage;
QImage* imgb4=new QImage;
QImage* imgb5=new QImage;
QImage* imgb6=new QImage;
QImage* imgb7=new QImage;
QImage* imgb8=new QImage;
QImage* imgb9=new QImage;
QImage* imgb10=new QImage;
QImage* imgb11=new QImage;
QImage* imgb12=new QImage;
QImage* imgb13=new QImage;
QImage* imgb14=new QImage;
QImage* imgb15=new QImage;
QImage* imgb16=new QImage;
QImage* imgb17=new QImage;
QImage* imgb18=new QImage;
QImage* imgb19=new QImage;
QImage* imgb20=new QImage;
QImage* imgb21=new QImage;
QImage* imgb22=new QImage;
int i1=-1;int i2=-1;
int k1=-1;int k2=-1;
int m=-1;
int n1=-1;int n2=-1;
int o1=-1;int o2=-1;
bool1::bool1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bool1)
{
    ui->setupUi(this);
    this->resize(1300,760);
    this->setWindowIcon(QIcon("://images/lion.png"));//设置页面图标
    this->setWindowTitle("逻辑运算 - PKU ICA Helper 0.1.0");//设置页面标题

    ui->stackedWidget->setCurrentWidget(ui->page);
    imgb->load(":/pic/and00.png");
    ui->label_2->setPixmap(QPixmap::fromImage(*imgb));
    imgb2->load(":/pic/and.png");
    ui->and0->setPixmap(QPixmap::fromImage(*imgb2));
    imgb3->load(":/pic/andnum.png");
    ui->and1->setPixmap(QPixmap::fromImage(*imgb3));
    imgb4->load(":/pic/or00.png");
    ui->orpic->setPixmap(QPixmap::fromImage(*imgb4));
    imgb5->load(":/pic/or.png");
    ui->or0->setPixmap(QPixmap::fromImage(*imgb5));
    imgb6->load(":/pic/ornum.png");
    ui->or1->setPixmap(QPixmap::fromImage(*imgb6));
    imgb7->load(":/pic/no00.png");
    ui->nopic->setPixmap(QPixmap::fromImage(*imgb7));
    imgb8->load(":/pic/no.png");
    ui->no0->setPixmap(QPixmap::fromImage(*imgb8));
    imgb9->load(":/pic/nonum.png");
    ui->no1->setPixmap(QPixmap::fromImage(*imgb9));
    imgb10->load(":/pic/nor.png");
    ui->norpic->setPixmap(QPixmap::fromImage(*imgb10));
    imgb11->load(":/pic/0.png");
    ui->pd1->setPixmap(QPixmap::fromImage(*imgb11));
    imgb12->load(":/pic/0.png");
    ui->pd2->setPixmap(QPixmap::fromImage(*imgb12));
    imgb13->load(":/pic/1.png");
    ui->pd3->setPixmap(QPixmap::fromImage(*imgb13));
    imgb14->load(":/pic/nornum.png");
    ui->nornum->setPixmap(QPixmap::fromImage(*imgb14));
    imgb15->load(":/pic/nor1.png");
    ui->nor->setPixmap(QPixmap::fromImage(*imgb15));
    imgb16->load(":/pic/xnorpic.png");
    ui->xnorpic->setPixmap(QPixmap::fromImage(*imgb16));
    imgb17->load(":/pic/xnornum.png");
    ui->xnornum->setPixmap(QPixmap::fromImage(*imgb17));
    imgb18->load(":/pic/xnor.png");
    ui->xnor->setPixmap(QPixmap::fromImage(*imgb18));
    imgb19->load(":/pic/1.png");
    ui->pd4->setPixmap(QPixmap::fromImage(*imgb19));
    imgb20->load(":/pic/0.png");
    ui->pd5->setPixmap(QPixmap::fromImage(*imgb20));
    imgb21->load(":/pic/0.png");
    ui->pd6->setPixmap(QPixmap::fromImage(*imgb21));
    imgb22->load(":/pic/1.png");
    ui->pd7->setPixmap(QPixmap::fromImage(*imgb22));
}

bool1::~bool1()
{
    delete ui;
}

void bool1::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);ui->pushButton->setChecked(1);
}

void bool1::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);ui->pushButton_2->setChecked(1);
}

void bool1::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);ui->pushButton_3->setChecked(1);
}

void bool1::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_4);ui->pushButton_4->setChecked(1);
}

void bool1::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_5);ui->pushButton_5->setChecked(1);
}

void bool1::page1change(){
    if(i1==-1&&i2==-1){imgb->load(":/pic/and00.png");ui->label_2->setPixmap(QPixmap::fromImage(*imgb));}
    if(i1==1&&i2==-1){imgb->load(":/pic/and10.png");ui->label_2->setPixmap(QPixmap::fromImage(*imgb));}
    if(i1==-1&&i2==1){imgb->load(":/pic/and01.png");ui->label_2->setPixmap(QPixmap::fromImage(*imgb));}
    if(i1==1&&i2==1){imgb->load(":/pic/and11.png");ui->label_2->setPixmap(QPixmap::fromImage(*imgb));}
}
void bool1::page2change(){
    if(k1==-1&&k2==-1){imgb4->load(":/pic/or00.png");ui->orpic->setPixmap(QPixmap::fromImage(*imgb4));}
    if(k1==1&&k2==-1){imgb4->load(":/pic/or10.png");ui->orpic->setPixmap(QPixmap::fromImage(*imgb4));}
    if(k1==-1&&k2==1){imgb4->load(":/pic/or01.png");ui->orpic->setPixmap(QPixmap::fromImage(*imgb4));}
    if(k1==1&&k2==1){imgb4->load(":/pic/or11.png");ui->orpic->setPixmap(QPixmap::fromImage(*imgb4));}
}
void bool1::page3change(){
    if(m==-1){imgb7->load(":/pic/no00.png");ui->nopic->setPixmap(QPixmap::fromImage(*imgb7));}
    if(m==1){imgb7->load(":/pic/no11.png");ui->nopic->setPixmap(QPixmap::fromImage(*imgb7));}
}
void bool1::page4change(){
    if(n1==-1&&n2==-1){
        ui->input1->setText("Input1:0");ui->input2->setText("Input2:0");ui->output->setText("Output:0");
        imgb11->load(":/pic/0.png");
        ui->pd1->setPixmap(QPixmap::fromImage(*imgb11));
        imgb12->load(":/pic/0.png");
        ui->pd2->setPixmap(QPixmap::fromImage(*imgb12));
        imgb13->load(":/pic/1.png");
        ui->pd3->setPixmap(QPixmap::fromImage(*imgb13));
    }
    if(n1==1&&n2==-1){
        ui->input1->setText("Input1:1");ui->input2->setText("Input2:0");ui->output->setText("Output:1");
        imgb11->load(":/pic/1.png");
        ui->pd1->setPixmap(QPixmap::fromImage(*imgb11));
        imgb12->load(":/pic/0.png");
        ui->pd2->setPixmap(QPixmap::fromImage(*imgb12));
        imgb13->load(":/pic/1.png");
        ui->pd3->setPixmap(QPixmap::fromImage(*imgb13));
    }
    if(n1==-1&&n2==1){
        ui->input1->setText("Input1:0");ui->input2->setText("Input2:1");ui->output->setText("Output:1");
        imgb11->load(":/pic/1.png");
        ui->pd1->setPixmap(QPixmap::fromImage(*imgb11));
        imgb12->load(":/pic/0.png");
        ui->pd2->setPixmap(QPixmap::fromImage(*imgb12));
        imgb13->load(":/pic/1.png");
        ui->pd3->setPixmap(QPixmap::fromImage(*imgb13));
    }
    if(n1==1&&n2==1){
        ui->input1->setText("Input1:1");ui->input2->setText("Input2:1");ui->output->setText("Output:0");
        imgb11->load(":/pic/1.png");
        ui->pd1->setPixmap(QPixmap::fromImage(*imgb11));
        imgb12->load(":/pic/1.png");
        ui->pd2->setPixmap(QPixmap::fromImage(*imgb12));
        imgb13->load(":/pic/0.png");
        ui->pd3->setPixmap(QPixmap::fromImage(*imgb13));
    }
}
void bool1::page5change(){
    if(o1==-1&&o2==-1){
        ui->xinput1->setText("Input1:0");ui->xinput2->setText("Input2:0");ui->xoutput->setText("Output:1");
        imgb19->load(":/pic/1.png");
        ui->pd4->setPixmap(QPixmap::fromImage(*imgb19));
        imgb20->load(":/pic/0.png");
        ui->pd5->setPixmap(QPixmap::fromImage(*imgb20));
        imgb21->load(":/pic/0.png");
        ui->pd6->setPixmap(QPixmap::fromImage(*imgb21));
        imgb22->load(":/pic/1.png");
        ui->pd7->setPixmap(QPixmap::fromImage(*imgb22));
    }
    if(o1==1&&o2==-1){
        ui->xinput1->setText("Input1:1");ui->xinput2->setText("Input2:0");ui->xoutput->setText("Output:0");
        imgb19->load(":/pic/0.png");
        ui->pd4->setPixmap(QPixmap::fromImage(*imgb19));
        imgb20->load(":/pic/0.png");
        ui->pd5->setPixmap(QPixmap::fromImage(*imgb20));
        imgb21->load(":/pic/1.png");
        ui->pd6->setPixmap(QPixmap::fromImage(*imgb21));
        imgb22->load(":/pic/0.png");
        ui->pd7->setPixmap(QPixmap::fromImage(*imgb22));
    }
    if(o1==-1&&o2==1){
        ui->xinput1->setText("Input1:0");ui->xinput2->setText("Input2:1");ui->xoutput->setText("Output:0");
        imgb19->load(":/pic/0.png");
        ui->pd4->setPixmap(QPixmap::fromImage(*imgb19));
        imgb20->load(":/pic/1.png");
        ui->pd5->setPixmap(QPixmap::fromImage(*imgb20));
        imgb21->load(":/pic/0.png");
        ui->pd6->setPixmap(QPixmap::fromImage(*imgb21));
        imgb22->load(":/pic/0.png");
        ui->pd7->setPixmap(QPixmap::fromImage(*imgb22));
    }
    if(o1==1&&o2==1){
        ui->xinput1->setText("Input1:1");ui->xinput2->setText("Input2:1");ui->xoutput->setText("Output:1");
        imgb19->load(":/pic/0.png");
        ui->pd4->setPixmap(QPixmap::fromImage(*imgb19));
        imgb20->load(":/pic/0.png");
        ui->pd5->setPixmap(QPixmap::fromImage(*imgb20));
        imgb21->load(":/pic/0.png");
        ui->pd6->setPixmap(QPixmap::fromImage(*imgb21));
        imgb22->load(":/pic/1.png");
        ui->pd7->setPixmap(QPixmap::fromImage(*imgb22));
    }
}

void bool1::on_pushButton_6_clicked()
{
    i1=-i1;
    page1change();
}

void bool1::on_pushButton_7_clicked()
{
    i2=-i2;
    page1change();
}

void bool1::on_pushButton_8_clicked()
{
    k1=-k1;
    page2change();
}

void bool1::on_pushButton_9_clicked()
{
    k2=-k2;
    page2change();
}

void bool1::on_pushButton_10_clicked()
{
    m=-m;
    page3change();
}

void bool1::on_pushButton_12_clicked()
{
    n1=-n1;
    page4change();
}

void bool1::on_pushButton_11_clicked()
{
    n2=-n2;
    page4change();
}

void bool1::on_pushButton_13_clicked()
{
    o1=-o1;
    page5change();
}

void bool1::on_pushButton_14_clicked()
{
    o2=-o2;
    page5change();
}
