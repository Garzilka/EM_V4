#ifndef CITEMCOMBOBOX_H
#define CITEMCOMBOBOX_H

#include "Core/Data/Item/IItem.h"
#include <QComboBox>
class CItemComboBox : public IItem, public QComboBox
{
public:
    CItemComboBox();
};

#endif // CITEMCOMBOBOX_H
