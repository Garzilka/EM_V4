#ifndef CCORE_H
#define CCORE_H

#include "Core/BaseTypes.h"
#include "Core/Data/CDataManagmentSystem.h"
class CStorage;
class CCore : QObject
{
    Q_OBJECT
public:
    CCore(QObject *parent = 0);
    friend CStorage;
    ~CCore();
private:
    CDataManagmentSystem* DMS = new CDataManagmentSystem();
};


extern CCore* Core;

#endif // CCORE_H
