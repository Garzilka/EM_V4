#ifndef CITEMSCROLL_H
#define CITEMSCROLL_H

#include "Core/Data/Item/IItem.h"
#include <QScrollBar>
class CItemScroll : public IItem, public QScrollBar
{
public:
    CItemScroll();
};

#endif // CITEMSCROLL_H
