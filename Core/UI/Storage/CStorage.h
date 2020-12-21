#ifndef CSTORAGE_H
#define CSTORAGE_H

#include <QWidget>

namespace Ui {
class CStorage;
}

class CStorage : public QWidget
{
    Q_OBJECT

public:
    explicit CStorage(QWidget *parent = nullptr);
    ~CStorage();

private:
    Ui::CStorage *ui;
};

#endif // CSTORAGE_H
