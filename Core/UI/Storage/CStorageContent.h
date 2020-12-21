#ifndef CSTORAGECONTENT_H
#define CSTORAGECONTENT_H

#include <QWidget>

namespace Ui {
class CStorageContent;
}

class CStorageContent : public QWidget
{
    Q_OBJECT

public:
    explicit CStorageContent(QWidget *parent = nullptr);
    ~CStorageContent();

private:
    Ui::CStorageContent *ui;
};

#endif // CSTORAGECONTENT_H
