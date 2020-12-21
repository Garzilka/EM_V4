#ifndef CSTORAGECHANGER_H
#define CSTORAGECHANGER_H

#include <QWidget>

namespace Ui {
class CStorageChanger;
}

class CStorageChanger : public QWidget
{
    Q_OBJECT

public:
    explicit CStorageChanger(QWidget *parent = nullptr);
    ~CStorageChanger();

private:
    Ui::CStorageChanger *ui;
};

#endif // CSTORAGECHANGER_H
