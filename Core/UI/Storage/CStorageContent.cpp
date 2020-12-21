#include "CStorageContent.h"
#include "ui_CStorageContent.h"

#include "Core/UI/General/TabWidget/Category/ITabCategory.h"

CStorageContent::CStorageContent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CStorageContent)
{
    ui->setupUi(this);
    ui->Content->addWidget(new ITabCategory());

}

CStorageContent::~CStorageContent()
{
    delete ui;
}
