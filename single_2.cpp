#include "single_2.h"
#include "ui_single_2.h"
#include <QVector>
#include <QGridLayout>

Single_2::Single_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Single_2)
{
    ui->setupUi(this);
    gonggaovec.resize(5);
    QGridLayout *layout = new QGridLayout;
    for(int i = 0;i < 5;i++)
    {
        gonggaovec[i] = new Gonggao;
        layout->addWidget(gonggaovec[i]);

        connect(gonggaovec[i],&Gonggao::toConcrete,this,[=](){
            emit toConcrete_0();
        });
    }
    ui->scrollArea->widget()->setLayout(layout);
}

Single_2::~Single_2()
{
    delete ui;
}
