#include "ITabSubCategory.h"
#include "ui_ITabSubCategory.h"
#include "Core/UI/General/Table/ITable.h"
#include "Core/UI/General/Table/Storage/CStorageTable.h"
ITabSubCategory::ITabSubCategory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ITabSubCategory)
{
    ui->setupUi(this);
    ITable* TableRef = new CStorageTable();
    ui->tabWidget->addTab(TableRef, "default");
}

ITabSubCategory::~ITabSubCategory()
{
    delete ui;
}
