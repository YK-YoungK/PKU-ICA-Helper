//算法演示 by lxc
//直观地展示了广度优先搜索和深度优先搜索的算法原理

#include "algorithm1.h"
#include "ui_algorithm1.h"
int loc=0;int loc1=0;
QImage* imga=new QImage;
QImage* imga1=new QImage;

void algorithm1::changeit()
{
    if(loc==0){imga->load(":/pic/n0.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0");}
    if(loc==1){imga->load(":/pic/n1.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1");}
    if(loc==2){imga->load(":/pic/n4.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4");}
    if(loc==3){imga->load(":/pic/n1.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1");}
    if(loc==4){imga->load(":/pic/n5.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5");}
    if(loc==5){imga->load(":/pic/n1.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1");}
    if(loc==6){imga->load(":/pic/n0.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1→0");}
    if(loc==7){imga->load(":/pic/n2.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1→0→2");}
    if(loc==8){imga->load(":/pic/n0.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1→0→2→0");}
    if(loc==9){imga->load(":/pic/n3.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1→0→2→0→3");}
    if(loc==10){imga->load(":/pic/n6.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1→0→2→0→3→6");}
    if(loc==11){imga->load(":/pic/n7.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1→0→2→0→3→6→7");}
    if(loc==12){imga->load(":/pic/n9.png");ui->dfs->setPixmap(QPixmap::fromImage(*imga));ui->way->setText("路径：0→1→4→1→5→1→0→2→0→3→6→7→9");ui->pushButton->setEnabled(false);}
}

void algorithm1::changethat()
{
    if(loc1==0){imga1->load(":/pic/n0.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：1 2 3");}
    if(loc1==1){imga1->load(":/pic/n1.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：2 3 4 5");}
    if(loc1==2){imga1->load(":/pic/n2.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：3 4 5");}
    if(loc1==3){imga1->load(":/pic/n3.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：4 5 6");}
    if(loc1==4){imga1->load(":/pic/n4.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：5 6");}
    if(loc1==5){imga1->load(":/pic/n5.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：6");}
    if(loc1==6){imga1->load(":/pic/n6.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：7 8");}
    if(loc1==7){imga1->load(":/pic/n7.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：8 9");}
    if(loc1==8){imga1->load(":/pic/n8.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：9");}
    if(loc1==9){imga1->load(":/pic/n9.png");ui->bfs->setPixmap(QPixmap::fromImage(*imga1));ui->que->setText("队列：");ui->pushButton_4->setEnabled(false);}
}

algorithm1::algorithm1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::algorithm1)
{
    ui->setupUi(this);
    this->resize(1300,760);

    loc=0;
    loc1=0;

    changeit();
    changethat();
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);

    this->setWindowIcon(QIcon("://images/lion.png"));//设置页面图标
    this->setWindowTitle("算法演示 - PKU ICA Helper 0.1.0");//设置页面标题
}

algorithm1::~algorithm1()
{
    delete ui;
}

void algorithm1::on_pushButton_2_clicked()
{
    loc=0;changeit();ui->pushButton->setEnabled(true);ui->pushButton_2->setEnabled(false);
}

void algorithm1::on_pushButton_clicked()
{
    loc++;changeit();ui->pushButton_2->setEnabled(true);
}

void algorithm1::on_pushButton_3_clicked()
{
    loc1=0;changethat();ui->pushButton_4->setEnabled(true);ui->pushButton_3->setEnabled(false);
}

void algorithm1::on_pushButton_4_clicked()
{
    loc1++;changethat();ui->pushButton_3->setEnabled(true);
}
