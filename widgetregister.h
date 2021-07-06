#ifndef WIDGETREGISTER_H
#define WIDGETREGISTER_H
//注册或者返回 均是返回到登录界面
#include <QWidget>
namespace Ui {
class WidgetRegister;
}

class WidgetRegister : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetRegister(QWidget *parent = nullptr);
    ~WidgetRegister();
signals:
    void toLog();//返回登录界面

public slots:

private:
    Ui::WidgetRegister *ui;
};

#endif // WIDGETREGISTER_H
