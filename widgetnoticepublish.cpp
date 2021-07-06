//#include "widgetnoticepublish.h"
//#include "ui_widgetnoticepublish.h"
//#include<QTimer>
//WidgetNoticePublish::WidgetNoticePublish(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::WidgetNoticePublish)
//{
//    ui->setupUi(this);
//    //设置固定窗口大小
//    setFixedSize(800,720);
//    //设置窗口标题
//    setWindowTitle("公告发布");
//    //返回日志发布界面
//    connect(ui->pushButton_7,&QPushButton::clicked,this,[=](){
//        emit NoticePublishtoDailyPublish();
//    });
//    carPublish2=new WidgetCarPublish;
//    //进入到约车发布中
//    connect(ui->pushButton_13,&QPushButton::clicked,this,[=](){
//        this->hide();
//        carPublish2->show();
//    });
//    connect(carPublish2,&WidgetCarPublish::CarPublishtoNoticePublish,this,[=](){
//        carPublish2->hide();
//        this->show();
//    });
//}

//WidgetNoticePublish::~WidgetNoticePublish()
//{
//    delete ui;
//}
