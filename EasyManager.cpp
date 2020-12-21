#include "EasyManager.h"
#include "ui_EasyManager.h"

EasyManager::EasyManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EasyManager)
{
    ui->setupUi(this);
}

EasyManager::~EasyManager()
{
    delete ui;
}

