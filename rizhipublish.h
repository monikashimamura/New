#ifndef RIZHIPUBLISH_H
#define RIZHIPUBLISH_H

#include <QWidget>
#include "widgetchat.h"//rizhipublish.h 5
namespace Ui {
class RizhiPublish;
}

class RizhiPublish : public QWidget
{
    Q_OBJECT

public:
    explicit RizhiPublish(QWidget *parent = nullptr);
    ~RizhiPublish();
    WidgetChat *chat;//rizhipublish.h 17

private:
    Ui::RizhiPublish *ui;

signals:
    void toMain();
};

#endif // RIZHIPUBLISH_H
