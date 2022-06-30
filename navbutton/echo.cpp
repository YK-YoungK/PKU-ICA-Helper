//z2.程序对拍 by zlx

#include "echo.h"
#include "ui_echo.h"
#include <QTime>
#include<QMovie>
#include <QMessageBox>
#include<QProcess>
#include<QDesktopServices>
#include<iostream>
#include<QThread>
#include<QUrl>


echo::echo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::echo)
{

    ui->setupUi(this);
    this->setWindowIcon(QIcon("://images/lion.png"));//设置页面图标
    this->setWindowTitle("程序对拍 - PKU ICA Helper 0.1.0");//设置页面标题

    ui->stackedWidget->setCurrentIndex(0);
}

echo::~echo()
{
    delete ui;
}


//inputState的数值含义:
//0:程序生成输入
//1:手动输入
//2:无输入

void echo::init(){
    _getcwd(cwd,500);
    ui->plan_num->setText(QString::number(loopNum,10));
    ui->ok_loopNum->setText(QString::number(loopNum,10));
    std::cout << "inputstate:"<<inputState << endl;
    if(inputState==0)
        run0();
    else if(inputState==1)
        run1();
    else if(inputState==2)
        run2();

}

//程序生成输入
void echo::run0(){
        for(int i=0;i<loopNum;i++){
            if(!goon) break;
            input_gene();
            run_with_input();
            ui->done_num->setText(QString::number(i+1,10));
    }

}

//手动输入
void echo::run1(){
    ui->stackedWidget->setCurrentIndex(1);
    ui->input_textedit->clear();
}

//无输入
void echo::run2(){
    ui->stackedWidget->setCurrentIndex(0);
    run_without_input();
}

void echo::input_gene(){
    char op[600]={};
    sprintf(op,"%s%s",cwd,"\\Echo_input.exe");
    QProcess cmd1(this);
    cmd1.start(op);
    cmd1.waitForFinished();
    QByteArray cmdop = cmd1.readAllStandardOutput();
    char * charop=cmdop.data();

    QFile file("Echo_input.txt");
    file.open(QIODevice::WriteOnly);
    file.close();//清空txt文件

    if (file.open(QIODevice::ReadWrite | QIODevice::Text)){
            QTextStream stream(&file);
            stream.seek(file.size());
            stream << charop << "\n";
            file.close();
        }
}

void echo::input_manual(){

}

void echo::run_with_input(){
    //初始化
    QStringList l;
    char op[600];
    sprintf(op,"%s",cwd);
    l<<op;
    //清空输出文件
    QFile stdfile("Echo_std_out.txt");
    stdfile.open(QIODevice::WriteOnly);
    stdfile.close();
    QFile testfile("Echo_test_out.txt");
    testfile.open(QIODevice::WriteOnly);
    testfile.close();

    //程序运行
    QProcess cmd1(this);
    cmd1.start("cmd",l);
    cmd1.waitForStarted();
    cmd1.write("Echo_std<Echo_input.txt>Echo_std_out.txt\n");
    cmd1.write("Echo_test<Echo_input.txt>Echo_test_out.txt\n");
    cmd1.write("exit\n");
    cmd1.waitForFinished();

    compare();
}

void echo::run_without_input(){
    //初始化
    QStringList l;
    char op[600];
    sprintf(op,"%s",cwd);
    l<<op;
    //清空输出文件
    QFile stdfile("Echo_std_out.txt");
    stdfile.open(QIODevice::WriteOnly);
    stdfile.close();
    QFile testfile("Echo_test_out.txt");
    testfile.open(QIODevice::WriteOnly);
    testfile.close();

    //程序运行
    QProcess cmd1(this);
    cmd1.start("cmd",l);
    cmd1.waitForStarted();
    cmd1.write("Echo_std>Echo_std_out.txt\n");
    cmd1.write("Echo_test>Echo_test_out.txt\n");
    cmd1.write("exit\n");
    cmd1.waitForFinished();

    compare();
}

void echo::compare(){
    //初始化
    bool ans=1;

    QStringList stdList;
    QStringList testList;
    QFile std_out("Echo_std_out.txt");
    QFile test_out("Echo_test_out.txt");
    std_out.open(QIODevice::ReadOnly | QIODevice::Text);
    test_out.open(QIODevice::ReadOnly | QIODevice::Text);

    //读取标准输出
    std_out.seek(0);
    QTextStream stream_stdout(&std_out);
    while(! stream_stdout.atEnd())
    {
        QString line=stream_stdout.readLine();
        stdList<<line;
    }
    std_out.close();

    //读取测试输出
    test_out.seek(0);
    QTextStream stream_testout(&test_out);
    while(! stream_testout.atEnd())
    {
        QString line=stream_testout.readLine();
        testList<<line;
    }
    test_out.close();

    //比较
    int ls=stdList.size();
    int lt=testList.size();
    if(ls!=lt) ans=0;
    int l;
    if(ls<lt) l=ls;
    else l=lt;
    int erp=l;
    std::cout << l << endl;
    for(int i=0;i<l;i++)
        if(QString::compare(stdList[i],testList[i])!=0){
            ans=0;
            erp=i;
            break;
        }
    if(ans==0){
        goon=0;
        QFile erin("Echo_input.txt");
        erin.open(QIODevice::ReadOnly | QIODevice::Text);

        //读取标准输出
        erin.seek(0);
        QTextStream stream_input(&erin);
        QString inputline=stream_input.readLine();
        erin.close();

        ui->input->setText(inputline);
        ui->std_diff->setText(stdList[erp]);
        ui->test_diff->setText(testList[erp]);

        int confirm=QMessageBox::information(this,tr("出错啦!"),tr("标准程序和测试程序输出不同，点击查看错误信息。"),QMessageBox::Ok);

        ui->stackedWidget->setCurrentIndex(2);
        this->setWindowTitle("错误信息");
    }
    else{
        ui->stackedWidget->setCurrentIndex(3);
    }
}

void echo::on_input_reset_clicked()
{
    ui->input_textedit->clear();
}

void echo::on_input_confirm_clicked()
{
    QString inputQStr = ui->input_textedit->toPlainText();
    QByteArray inputQBA = inputQStr.toLatin1();
    char * inputchr = inputQBA.data();
    QFile file("Echo_input.txt");
    file.open(QIODevice::WriteOnly);
    file.close();//清空txt文件
    if (file.open(QIODevice::ReadWrite | QIODevice::Text)){
            QTextStream stream(&file);
            stream.seek(file.size());
            stream << inputchr;
            file.close();
        }

    ui->stackedWidget->setCurrentIndex(0);
    run_with_input();
}

void echo::on_result_display_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void echo::on_std_show_clicked()
{
    QString path(cwd);
    QDesktopServices::openUrl(QUrl("file:///"+path+"/Echo_std_out.txt"));
}

void echo::on_test_show_clicked()
{
    QString path(cwd);
    QDesktopServices::openUrl(QUrl("file:///"+path+"/Echo_test_out.txt"));
}

void echo::on_input_show_clicked()
{
    QString path(cwd);
    QDesktopServices::openUrl(QUrl("file:///"+path+"/Echo_input.txt"));
}
