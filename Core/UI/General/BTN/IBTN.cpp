#include "IBTN.h"
#include "ui_IBTN.h"

IBTN::IBTN(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IBTN)
{
    ui->setupUi(this);
}

IBTN::~IBTN()
{
    delete ui;
}
