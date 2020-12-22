#ifndef ITABCATEGORY_H
#define ITABCATEGORY_H

#include <QWidget>

namespace Ui {
class ITabCategory;
}

class ITabCategory : public QWidget
{
    Q_OBJECT

public:
    explicit ITabCategory(QWidget *parent = nullptr);
    ~ITabCategory();

private:
    Ui::ITabCategory *ui;
};

#endif // ITABCATEGORY_H
