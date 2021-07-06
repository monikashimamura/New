#include "widgetregister.h"
#include "ui_widgetregister.h"
#include<QTimer>
#include"mypushbutton.h"
WidgetRegister::WidgetRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetRegister)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(600,500);
    //设置窗口标题
    setWindowTitle("驴友故事--注册");
    //无论点击注册还是返回都是返回登录界面
    MyPushButton * Btn1 =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn1->setParent(this);
    Btn1->move(70,440);
    connect(Btn1,&QPushButton::clicked,this,[=](){
        Btn1->zoom1();
        Btn1->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    MyPushButton * Btn2 =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn2->setParent(this);
    Btn2->move(320,440);
    connect(Btn2,&QPushButton::clicked,this,[=](){
        Btn2->zoom1();
        Btn2->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    connect(Btn1,&QPushButton::clicked,this,[=](){
        emit toLog();
    });
    connect(Btn2,&QPushButton::clicked,this,[=](){
        emit toLog();
    });


}

WidgetRegister::~WidgetRegister()
{
    delete ui;
}
