#ifndef SINGLE_H
#define SINGLE_H

#include <QWidget>
#include <QVector>
#include "rizhi.h"

namespace Ui {
class Single;
}

class Single : public QWidget
{
    Q_OBJECT

public:
    explicit Single(QWidget *parent = nullptr);
    ~Single();
    QVector<Rizhi*>rizhivec;

private:
    Ui::Single *ui;

signals:
    void toConcrete_0();
};

#endif // SINGLE_H
