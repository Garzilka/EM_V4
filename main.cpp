#include "EasyManager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EasyManager w;
    w.show();
    return a.exec();
}
