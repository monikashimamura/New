#include "gonggaopublish.h"
#include "ui_gonggaopublish.h"
#include "mypushbutton.h"
#include <QTimer>

GonggaoPublish::GonggaoPublish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GonggaoPublish)
{
    ui->setupUi(this);


    //设置文本框只读
    ui->textEdit->setReadOnly(true);
    ui->lineEdit_2->setReadOnly(true);
    ui->lineEdit_3->setReadOnly(true);
    ui->lineEdit_4->setReadOnly(true);
    ui->lineEdit_5->setReadOnly(true);

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
    //新修改3，点击头像进入对话框界面
        chat = new WidgetChat;
        connect(ui->toolButton,&QPushButton::clicked,this,[=](){
            chat->show();
        });
}


GonggaoPublish::~GonggaoPublish()
{
    delete ui;
}
