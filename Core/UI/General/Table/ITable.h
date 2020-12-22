#ifndef ITABLE_H
#define ITABLE_H

#include <QWidget>
#include "Core/Data/Item/C_MasterItem.h"


namespace Ui {
class ITable;
}

class ITable : public QWidget
{
    Q_OBJECT

public:
    explicit ITable(QWidget *parent = nullptr);
    ~ITable();
protected:
    virtual void setItems() = 0;
private:
    Ui::ITable *ui;
};

#endif // ITABLE_H
