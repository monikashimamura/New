#include "single.h"
#include "ui_single.h"
#include <QVector>
#include <QGridLayout>

Single::Single(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Single)
{
    ui->setupUi(this);
    rizhivec.resize(5);
    QGridLayout *layout = new QGridLayout;
    for(int i = 0;i < 5;i++)
    {
        rizhivec[i] = new Rizhi;
        layout->addWidget(rizhivec[i]);

        connect(rizhivec[i],&Rizhi::toConcrete,this,[=](){
                   emit toConcrete_0();
        });
    }
    ui->scrollArea->widget()->setLayout(layout);


}

Single::~Single()
{
    delete ui;
}
