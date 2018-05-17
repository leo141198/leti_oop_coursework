#include "kitchen.h"
#include "ui_kitchen.h"

Kitchen::Kitchen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Kitchen)
{
    ui->setupUi(this);
}

Kitchen::~Kitchen()
{
    delete ui;
}
