#include "ITabCategory.h"
#include "ui_ITabCategory.h"
#include "Core/UI/General/TabWidget/SubCategory/ITabSubCategory.h"
ITabCategory::ITabCategory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ITabCategory)
{
    ui->setupUi(this);
    ui->tabWidget->addTab(new ITabSubCategory(), "Default");
}

ITabCategory::~ITabCategory()
{
    delete ui;
}
