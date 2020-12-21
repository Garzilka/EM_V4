#ifndef EASYMANAGER_H
#define EASYMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EasyManager; }
QT_END_NAMESPACE

class EasyManager : public QMainWindow
{
    Q_OBJECT

public:
    EasyManager(QWidget *parent = nullptr);
    ~EasyManager();

private:
    Ui::EasyManager *ui;
};
#endif // EASYMANAGER_H
