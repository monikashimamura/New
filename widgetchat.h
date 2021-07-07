#ifndef WIDGETCHAT_H
#define WIDGETCHAT_H
//发送->发表日志
#include"publish.h"
#include <QWidget>

namespace Ui {
class WidgetChat;
}

class WidgetChat : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetChat(QWidget *parent = nullptr);
    ~WidgetChat();
    Publish * publish =NULL;


private:
    Ui::WidgetChat *ui;


signals:
    void initialize();

};

#endif // WIDGETCHAT_H
