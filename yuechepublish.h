#ifndef YUECHEPUBLISH_H
#define YUECHEPUBLISH_H

#include <QWidget>
#include "mypushbutton.h"
#include "widgetchat.h"
namespace Ui {
class YuechePublish;
}

class YuechePublish : public QWidget
{
    Q_OBJECT

public:
    explicit YuechePublish(QWidget *parent = nullptr);
    ~YuechePublish();
    WidgetChat *chat = NULL;


private:
    Ui::YuechePublish *ui;

signals:
    void toMain();
};

#endif // YUECHEPUBLISH_H
