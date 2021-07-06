#include "rizhipublish.h"
#include "ui_rizhipublish.h"
#include "mypushbutton.h"
#include <QTimer>

RizhiPublish::RizhiPublish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RizhiPublish)
{
    ui->setupUi(this);



    //设置文本框只读
    ui->textEdit_3->setReadOnly(true);
    ui->lineEdit_6->setReadOnly(true);
    ui->lineEdit_10->setReadOnly(true);
    ui->lineEdit_12->setReadOnly(true);

    //设置提交按钮
    MyPushButton *btn_tijiao = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_tijiao->setParent(this);
    btn_tijiao->move(680,670);

    connect(btn_tijiao,&QPushButton::clicked,this,[=](){
        btn_tijiao->zoom1();
        btn_tijiao->zoom2();
    });

    //设置返回按钮
    MyPushButton *btn_fanhui = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_fanhui->setParent(this);
    btn_fanhui->move(20,670);
    //点击返回按钮出发tomain信号
    connect(btn_fanhui,&QPushButton::clicked,this,[=](){
        btn_fanhui->zoom1();
        btn_fanhui->zoom2();
        QTimer::singleShot(500,this,[=](){});
        emit toMain();
    });
    chat = new WidgetChat;
    connect(ui->toolButton_2,&QPushButton::clicked,this,[=](){
        chat->show();
    });//rizhipublish.cpp 41~44

}

RizhiPublish::~RizhiPublish()
{
    delete ui;
}
