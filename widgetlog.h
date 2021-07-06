#ifndef WIDGETLOG_H
#define WIDGETLOG_H
//注册->注册   登录->聊天栏    发送->发表日志 发表日志的提交->发表公告 发表公告的提交->发表约车

#include <QWidget>
#include "widget.h"//新加入1
#include"widgetregister.h"
QT_BEGIN_NAMESPACE
namespace Ui { class WidgetLog; }
QT_END_NAMESPACE

class WidgetLog : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetLog(QWidget *parent = nullptr);
    ~WidgetLog();
    //重写paintEvent函数 画背景图
    void paintEvent(QPaintEvent *);
    Widget * widget =NULL;
    WidgetRegister * rgster=NULL;
private:
    Ui::WidgetLog *ui;
};
#endif // WIDGETLOG_H
