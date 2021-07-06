#include "publish.h"
#include "ui_publish.h"
#include<QPushButton>
#include<QTimer>
#include<QPainter>
#include"mypushbutton.h"
Publish::Publish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Publish)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(800,720);
    //设置窗口标题
    setWindowTitle("发布");
    MyPushButton * Btn1 =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn1->setParent(this);
    Btn1->move(200,50);
    connect(Btn1,&QPushButton::clicked,this,[=](){
        Btn1->zoom1();
        Btn1->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    MyPushButton * Btn2 =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn2->setParent(this);
    Btn2->move(400,50);
    connect(Btn2,&QPushButton::clicked,this,[=](){
        Btn2->zoom1();
        Btn2->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    MyPushButton * Btn3 =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn3->setParent(this);
    Btn3->move(600,50);
    connect(Btn3,&QPushButton::clicked,this,[=](){
        Btn3->zoom1();
        Btn3->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    connect(Btn1,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(Btn2,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(Btn3,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });


}
void Publish::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/3.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
        emit toChat();
    });
}

Publish::~Publish()
{
    delete ui;
}
