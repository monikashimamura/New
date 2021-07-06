#include "single_3.h"
#include "ui_single_3.h"
#include <QGridLayout>
#include <QVector>

Single_3::Single_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Single_3)
{
    ui->setupUi(this);
    yuechevec.resize(5);

    QGridLayout *layout = new QGridLayout;
    for(int i = 0;i < 5;i++)
    {
        yuechevec[i] = new Yueche;
        layout->addWidget(yuechevec[i]);

        connect(yuechevec[i],&Yueche::toConcrete,this,[=](){
            emit toConcrete_0();
        });
    }
    ui->scrollArea->widget()->setLayout(layout);
}

Single_3::~Single_3()
{
    delete ui;
}
