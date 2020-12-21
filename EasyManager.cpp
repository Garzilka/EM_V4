#include "EasyManager.h"
#include "ui_EasyManager.h"
#include "Core/CCore.h"
#include "Core/UI/Storage/CStorage.h"
CCore* Core = new CCore();

EasyManager::EasyManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EasyManager)
{
    ui->setupUi(this);
    ui->Switcher->addTab(new CStorage(),"Склад");
}

EasyManager::~EasyManager()
{
    delete ui;
}

