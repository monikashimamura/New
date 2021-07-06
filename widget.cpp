#include "widget.h"
#include "ui_widget.h"
#include "mypushbutton.h"
#include <QTimer>
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //隐藏标题栏
    setWindowFlags (Qt::FramelessWindowHint);

    //构建发布详情页，位置与主页面一致
    gonggaopub = new GonggaoPublish;
    gonggaopub->setParent(this);
    gonggaopub->hide();
    gonggaopub->move(ui->widget->x(),ui->widget->y()+20);

    rizhipub = new RizhiPublish;
    rizhipub->setParent(this);
    rizhipub->hide();
    rizhipub->move(ui->widget->x(),ui->widget->y()+20);

    yuechepub = new YuechePublish;
    yuechepub->setParent(this);
    yuechepub->hide();
    yuechepub->move(ui->widget->x(),ui->widget->y()+20);


    //设置详情页标题返回主页面
    connect(gonggaopub,&GonggaoPublish::toMain,this,[=](){
        gonggaopub->hide();
        ui->widget->show();
    });

    connect(rizhipub,&RizhiPublish::toMain,this,[=](){
        rizhipub->hide();
        ui->widget->show();
    });

    connect(yuechepub,&YuechePublish::toMain,this,[=](){
        yuechepub->hide();
        ui->widget->show();
    });

    gonggaovec.resize(5);
    for(int i = 0;i < 5;i++)
    {
        gonggaovec[gonggaovec.size()-1-i] = new Gonggao;
        gonggaovec[gonggaovec.size()-1-i]->setParent(ui->scrollAreaWidgetContents_3);
        gonggaovec[gonggaovec.size()-1-i]->move(9,9+209*i);

        connect(gonggaovec[gonggaovec.size()-1-i],&Gonggao::toConcrete,this,[=](){
            ui->widget->hide();
            gonggaopub->show();
        });
    }

    rizhivec.resize(5);
    for(int i = 0;i < 5;i++)
    {
        rizhivec[rizhivec.size()-1-i] = new Rizhi;


        connect(rizhivec[rizhivec.size()-1-i],&Rizhi::toConcrete,this,[=](){
            ui->widget->hide();
            rizhipub->show();
        });
    }

    yuechevec.resize(5);
    for(int i = 0;i < 5;i++)
    {
        yuechevec[yuechevec.size()-1-i] = new Yueche;
        yuechevec[yuechevec.size()-1-i]->setParent(ui->scrollAreaWidgetContents_4);
        yuechevec[yuechevec.size()-1-i]->move(9,9+209*i);

        connect(yuechevec[yuechevec.size()-1-i],&Yueche::toConcrete,this,[=](){
            ui->widget->hide();
            yuechepub->show();
        });
    //设置single_0


    //设置single
    single = new Single;
    single->setParent(ui->stackedWidget->widget(1));

    connect(single,&Single::toConcrete_0,this,[=](){
        ui->widget->hide();
        rizhipub->show();
    });

    //设置single_2
    single_2 = new Single_2;
    single_2->setParent(ui->stackedWidget->widget(2));

    connect(single_2,&Single_2::toConcrete_0,this,[=](){
        ui->widget->hide();
        gonggaopub->show();
    });

    //设置single_3
    single_3 = new Single_3;
    single_3->setParent(ui->stackedWidget->widget(3));

    connect(single_3,&Single_3::toConcrete_0,this,[=](){
        ui->widget->hide();
        yuechepub->show();
    });

    }
    //设置综合按钮
    MyPushButton *btn_zonghe = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_zonghe->setParent(ui->widget);//设置他的依赖框架
    btn_zonghe->move(180,60);//移动他的位置

    connect(btn_zonghe,&QPushButton::clicked,this,[=](){
        btn_zonghe->zoom1();
        btn_zonghe->zoom2();
        QTimer::singleShot(500,this,[=](){});//实现延迟500ms后再进行以下操作
        ui->stackedWidget->setCurrentIndex(0);
    });


    //设置日志按钮
    MyPushButton *btn_rizhi = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_rizhi->setParent(ui->widget);//设置他的依赖框架
    btn_rizhi->move(290,60);//移动他的位置

    connect(btn_rizhi,&QPushButton::clicked,this,[=](){
        btn_rizhi->zoom1();
        btn_rizhi->zoom2();
        QTimer::singleShot(500,this,[=](){});//实现延迟500ms后再进行以下操作
        ui->stackedWidget->setCurrentIndex(1);
    });


    //设置公告按钮
    MyPushButton *btn_gonggao = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_gonggao->setParent(ui->widget);//设置他的依赖框架
    btn_gonggao->move(400,60);//移动他的位置

    connect(btn_gonggao,&QPushButton::clicked,this,[=](){
        btn_gonggao->zoom1();
        btn_gonggao->zoom2();
        QTimer::singleShot(500,this,[=](){});//实现延迟500ms后再进行以下操作
        ui->stackedWidget->setCurrentIndex(2);
    });


    //设置约车按钮
    MyPushButton *btn_yueche = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_yueche->setParent(ui->widget);//设置他的依赖框架
    btn_yueche->move(510,60);//移动他的位置

    connect(btn_yueche,&QPushButton::clicked,this,[=](){
        btn_yueche->zoom1();
        btn_yueche->zoom2();
        QTimer::singleShot(500,this,[=](){});//实现延迟500ms后再进行以下操作
        ui->stackedWidget->setCurrentIndex(3);
    });


    //设置搜索按钮
    MyPushButton *btn_sousuo = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_sousuo->setParent(ui->widget);//设置他的依赖框架
    btn_sousuo->move(650,20);//移动他的位置

    connect(btn_sousuo,&QPushButton::clicked,this,[=](){
        btn_sousuo->zoom1();
        btn_sousuo->zoom2();
    });
    publish = new Publish;//widget.cpp 177
    //设置发布按钮
    MyPushButton *btn_fabu = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_fabu->setParent(ui->widget_information);//设置他的依赖框架
    btn_fabu->move(200,500);//移动他的位置

    connect(btn_fabu,&QPushButton::clicked,this,[=](){
        btn_fabu->zoom1();
        btn_fabu->zoom2();
    });
    connect(btn_fabu,&QPushButton::clicked,this,[=](){
        this->hide();
        publish->show();
    });
    connect(publish,&Publish::toChat,this,[=](){
        publish->hide();
        this->show();
    });//widget.cpp 183~194
    //设置修改个人信息按钮
    MyPushButton *btn_xiugai = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
    btn_xiugai->setParent(ui->widget_information);//设置他的依赖框架
    btn_xiugai->move(60,500);//移动他的位置

    connect(btn_xiugai,&QPushButton::clicked,this,[=](){
        btn_xiugai->zoom1();
        btn_xiugai->zoom2();
    });

    //设置个人信息文本框只读
    ui->textEdit->setReadOnly(true);

    //设置右上角最小化和关闭按钮
    //构建最小化、最大化、关闭按钮
     MyPushButton *minButton = new MyPushButton("://点赞 (2).png","://点赞 (1).png");
     MyPushButton *closeButton= new MyPushButton("://点赞 (2).png","://点赞 (1).png");

     minButton->setParent(this);
     closeButton->setParent(this);

     //设置最小化、关闭按钮在界面的位置
     minButton->move(this->width() - 100,0);
     closeButton->move(this->width() - 50,0);

     //设置鼠标移至按钮上的提示信息
     minButton->setToolTip(tr("最小化"));
     closeButton->setToolTip(tr("关闭"));

     //实现关闭效果
     connect(closeButton,&QPushButton::clicked,this,[=](){
         this->close();
     });

     //实现最小化效果
     connect(minButton,&QPushButton::clicked,this,[=](){
         this->showMinimized();
     });
     //设置logo图片
     QPixmap *pixmap = new QPixmap("://logo.png");
     pixmap->scaled(ui->label_logo->size(), Qt::KeepAspectRatio);
     ui->label_logo->setScaledContents(true);
     ui->label_logo->setPixmap(*pixmap);
     //设置文字图片
     QPixmap *pixmap_2= new QPixmap("://文字(2).png");
     pixmap_2->scaled(ui->label_wenzi->size(), Qt::KeepAspectRatio);
     ui->label_wenzi->setScaledContents(true);
     ui->label_wenzi->setPixmap(*pixmap_2);
     //点击修改按钮，进入到注册修改页面(新修改2)
          reg = new WidgetRegister;
          connect(btn_xiugai,&QPushButton::clicked,this,[=](){
              reg->show();
          });


     //将界面设置为白色
     setPalette(QPalette(Qt::white));//设置窗口为白色


}

Widget::~Widget()
{
    delete ui;
}

