#ifndef IBTN_H
#define IBTN_H

#include <QWidget>

namespace Ui {
class IBTN;
}

class IBTN : public QWidget
{
    Q_OBJECT

public:
    explicit IBTN(QWidget *parent = nullptr);
    ~IBTN();

private:
    Ui::IBTN *ui;
};

#endif // IBTN_H
