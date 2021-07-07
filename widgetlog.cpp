#include "widgetlog.h"
#include "ui_widgetlog.h"
#include"mypushbutton.h"
#include<QPainter>
#include<QTimer>
#include<QTextEdit>
WidgetLog::WidgetLog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetLog)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(600,400);
    //设置窗口标题
    setWindowTitle("驴友故事");
    widget=new Widget;
    rgster=new WidgetRegister;
    MyPushButton * Btn1 =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn1->setParent(this);
    Btn1->move(120,320);
    connect(Btn1,&QPushButton::clicked,this,[=](){
        Btn1->zoom1();
        Btn1->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });
    MyPushButton * Btn2 =new MyPushButton(":/res/12ca11be98ef182c.png",":/res/37b073fb41aeae00.png");
    Btn2->setParent(this);
    Btn2->move(340,320);
    connect(Btn2,&QPushButton::clicked,this,[=](){
        Btn2->zoom1();
        Btn2->zoom2();
        QTimer::singleShot(500,this,[=](){});
    });

    //启动监听
    ser = new QTcpServer(this);
    unsigned short int port = 9090;//端口号预设为9090+用户编号，上限为65536
    ser->listen(QHostAddress::Any, port);\

    connect();





    //进入到选择注册中
    connect(Btn1,&QPushButton::clicked,this,[=](){
        this->hide();
        rgster->show();
    });
    //进入到选择聊天中
    connect(Btn2,&QPushButton::clicked,this,[=](){
        this->hide();
        widget->show();
    });
    connect(rgster,&WidgetRegister::toLog,this,[=](){
        rgster->hide();
        this->show();
    });

}
void WidgetLog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/1.png");
    painter.drawPixmap(0,0,this->width(),this->height()*0.4,pix);
}
WidgetLog::~WidgetLog()
{
    delete ui;
}

