#include "CStorage.h"
#include "ui_CStorage.h"
#include "Core/CCore.h"
#include "Core/UI/Storage/CStorageChanger.h"

CStorage::CStorage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CStorage)
{
    ui->setupUi(this);
    ui->StorageContent->addWidget(new CStorageChanger());
}

CStorage::~CStorage()
{
    delete ui;
}
