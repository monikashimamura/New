#ifndef SINGLE_0_H
#define SINGLE_0_H

#include <QWidget>
#include <QVector>
#include "rizhi.h"
#include "gonggao.h"
#include "yueche.h"

namespace Ui {
class Single_0;
}

class Single_0 : public QWidget
{
    Q_OBJECT

public:
    explicit Single_0(QWidget *parent = nullptr);
    ~Single_0();

private:
    Ui::Single_0 *ui;


};

#endif // SINGLE_0_H
