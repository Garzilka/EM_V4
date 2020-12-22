#ifndef CDATAMANAGMENTSYSTEM_H
#define CDATAMANAGMENTSYSTEM_H

#include "Core/Data/DataBase/Item/CItemData.h"
#include "Core/Data/DataBase/Storage/CStorageData.h"
class CDataManagmentSystem
{
public:
    CDataManagmentSystem();
    ~CDataManagmentSystem()
    {
        delete (ItemDataRef);
        delete (StorageDataRef);
    }
private:
    CItemData* ItemDataRef = new CItemData();
    CStorageData* StorageDataRef = new CStorageData();
};

#endif // CDATAMANAGMENTSYSTEM_H
