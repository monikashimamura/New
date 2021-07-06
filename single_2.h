#ifndef SINGLE_2_H
#define SINGLE_2_H

#include <QWidget>
#include <QVector>
#include "gonggao.h"

namespace Ui {
class Single_2;
}

class Single_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Single_2(QWidget *parent = nullptr);
    ~Single_2();
    QVector<Gonggao*>gonggaovec;

private:
    Ui::Single_2 *ui;

signals:
    void toConcrete_0();
};

#endif // SINGLE_2_H
