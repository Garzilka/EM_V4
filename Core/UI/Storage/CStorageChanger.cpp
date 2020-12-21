#include "CStorageChanger.h"
#include "ui_CStorageChanger.h"

#include "Core/UI/Storage/CStorageContent.h"
CStorageChanger::CStorageChanger(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CStorageChanger)
{
    ui->setupUi(this);

    ui->toolBox->addItem(new CStorageContent(), "Примерное название склада \nи улицы");
    ui->toolBox->addItem(new CStorageContent(), "Примерное название склада \nи улицы");
}

CStorageChanger::~CStorageChanger()
{
    delete ui;
}
