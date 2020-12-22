#ifndef CITEMEDITTEXT_H
#define CITEMEDITTEXT_H

#include "Core/Data/Item/IItem.h"
#include <QTextEdit>

class CItemEditText : public IItem, public QTextEdit
{
public:
    CItemEditText();
    CItemEditText(QString value) :QTextEdit(value){}
};

#endif // CITEMEDITTEXT_H
