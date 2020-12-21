#ifndef ITABSUBCATEGORY_H
#define ITABSUBCATEGORY_H

#include <QWidget>
#include "Core/UI/General/Table/ITable.h"
namespace Ui {
class ITabSubCategory;
}

class ITabSubCategory : public QWidget
{
    Q_OBJECT

public:
    explicit ITabSubCategory(QWidget *parent = nullptr);
    ~ITabSubCategory();

private:
    Ui::ITabSubCategory *ui;
};

#endif // ITABSUBCATEGORY_H
