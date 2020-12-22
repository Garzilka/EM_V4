#ifndef C_MASTERITEM_H
#define C_MASTERITEM_H

#include <QWidget>
#include "Core/Data/Item/IItem.h"
#include "Core/BaseTypes.h"
#include "Core/Data/Item/Items/CItemComboBox.h"
#include "Core/Data/Item/Items/CItemEditText.h"
#include "Core/Data/Item/Items/CItemScroll.h"
class CMasterItem : QObject
{
public:
    CMasterItem(QObject *parent = 0);
    void SetupWidget(QVector<S_ItemInfo> ItemInfo);
    QVector<IItem*> Widgets;

};

#endif // C_MASTERITEM_H
