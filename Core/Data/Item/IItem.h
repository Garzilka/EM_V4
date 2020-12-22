#ifndef IITEM_H
#define IITEM_H

#include <Core/BaseTypes.h>



class IItem
{
public:
    IItem();
    QWidget* GetWidgetRef();
    void setWidget(int Type, QVector<QString> Params);
public slots:
    void Change(int value);
    void Change(QString value);
protected:
    int typeWidget;
    QWidget* WidgetRef = nullptr;
};

#endif // IITEM_H
