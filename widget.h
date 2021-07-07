#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include "information.h"
#include "gonggaopublish.h"
#include "gonggao.h"
#include "rizhipublish.h"
#include "yuechepublish.h"
#include "rizhi.h"
#include "yueche.h"
#include "mypushbutton.h"
#include "single.h"
#include "single_2.h"
#include "single_3.h"
#include"publish.h"//widget.h 17
#include "widgetregister.h"//新修改2
#include <QTcpServer>
#include <QTcpSocket>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    Publish * publish =NULL;//widget.h 31

    GonggaoPublish *gonggaopub = NULL;
    QVector<Gonggao*>gonggaovec;
    RizhiPublish *rizhipub = NULL;
    QVector<Rizhi*>rizhivec;
    YuechePublish *yuechepub = NULL;
    QVector<Yueche*>yuechevec;
    Single *single = NULL;
    Single_2 *single_2 = NULL;
    Single_3 *single_3 = NULL;
    WidgetRegister *reg = NULL;//新修改2

private:
    Ui::Widget *ui;






};
#endif // WIDGET_H
