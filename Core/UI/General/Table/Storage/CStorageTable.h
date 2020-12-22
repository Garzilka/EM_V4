#ifndef CSTORAGETABLE_H
#define CSTORAGETABLE_H

#include "Core/UI/General/Table/ITable.h"
class CStorageTable : public ITable
{
public:
    CStorageTable();
protected:
    void setItems() override;
};

#endif // CSTORAGETABLE_H
