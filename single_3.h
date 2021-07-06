#ifndef SINGLE_3_H
#define SINGLE_3_H

#include <QWidget>
#include<QVector>
#include "yueche.h"

namespace Ui {
class Single_3;
}

class Single_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Single_3(QWidget *parent = nullptr);
    ~Single_3();
    QVector<Yueche*>yuechevec;

private:
    Ui::Single_3 *ui;

signals:
    void toConcrete_0();
};

#endif // SINGLE_3_H
