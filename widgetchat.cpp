#include "widgetchat.h"
#include "ui_widgetchat.h"
#include<QTimer>
#include<QDebug>
#include<QString>
#include<QPushButton>
#include"publish.h"
#include"mypushbutton.h"
WidgetChat::WidgetChat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetChat)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(800,600);
    //设置窗口标题
    //点击发送 进入选择日志的发布
    setWindowTitle("聊天");
    publish = new Publish;
    MyPushButton * sendBtn =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    sendBtn->setParent(this);
    sendBtn->move(650,440);
    connect(sendBtn,&QPushButton::clicked,this,[=](){
        sendBtn->zoom1();
        sendBtn->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    MyPushButton * Btn =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn->setParent(this);
    Btn->move(550,440);
    connect(Btn,&QPushButton::clicked,this,[=](){
        Btn->zoom1();
        Btn->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    connect(sendBtn,&QPushButton::clicked,this,[=](){
        this->hide();
        publish->show();
    });
    connect(publish,&Publish::toChat,this,[=](){
        publish->hide();
        this->show();
    });



}

WidgetChat::~WidgetChat()
{
    delete ui;
}
