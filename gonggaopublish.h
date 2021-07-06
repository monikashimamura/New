#ifndef GONGGAOPUBLISH_H
#define GONGGAOPUBLISH_H

#include <QWidget>
#include "widgetchat.h"
namespace Ui {
class GonggaoPublish;
}

class GonggaoPublish : public QWidget
{
    Q_OBJECT

public:
    explicit GonggaoPublish(QWidget *parent = nullptr);
    ~GonggaoPublish();
    WidgetChat *chat;

private:
    Ui::GonggaoPublish *ui;

signals:
    void toMain();
};

#endif // GONGGAOPUBLISH_H
