#ifndef CCORE_H
#define CCORE_H

#include <QObject>

class CCore : QObject
{
    Q_OBJECT
public:
    CCore(QObject *parent = 0);
    ~CCore();

};


extern CCore* Core;

#endif // CCORE_H
