#include "ITable.h"
#include "ui_ITable.h"

ITable::ITable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ITable)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setColumnCount(5);
}

ITable::~ITable()
{
    delete ui;
}
