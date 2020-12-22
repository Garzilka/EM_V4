#include "C_MasterItem.h"

CMasterItem::CMasterItem(QObject *parent)
{

}

void CMasterItem::SetupWidget(QVector<S_ItemInfo> ItemInfo)
{
    for(S_ItemInfo Info : ItemInfo)
    {
        switch (Info.type) {
        case 0:
        {
            Widgets.append(new CItemEditText(""));
        }

        }
    }
}
