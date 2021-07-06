#include "single_0.h"
#include "ui_single_0.h"

Single_0::Single_0(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Single_0)
{
    ui->setupUi(this);
}

Single_0::~Single_0()
{
    delete ui;
}
