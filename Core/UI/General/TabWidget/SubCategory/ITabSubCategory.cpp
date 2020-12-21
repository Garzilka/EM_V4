#include "ITabSubCategory.h"
#include "ui_ITabSubCategory.h"

ITabSubCategory::ITabSubCategory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ITabSubCategory)
{
    ui->setupUi(this);
    ui->tabWidget->addTab(new ITable(), "default");
}

ITabSubCategory::~ITabSubCategory()
{
    delete ui;
}
