#ifndef ITABLE_H
#define ITABLE_H

#include <QWidget>

namespace Ui {
class ITable;
}

class ITable : public QWidget
{
    Q_OBJECT

public:
    explicit ITable(QWidget *parent = nullptr);
    ~ITable();

private:
    Ui::ITable *ui;
};

#endif // ITABLE_H
