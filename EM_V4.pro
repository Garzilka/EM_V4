QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Core/CCore.cpp \
    Core/UI/General/BTN/IBTN.cpp \
    Core/UI/General/ScrollArea/CScrollArea.cpp \
    Core/UI/General/TabWidget/Category/ITabCategory.cpp \
    Core/UI/General/TabWidget/SubCategory/ITabSubCategory.cpp \
    Core/UI/General/Table/ITable.cpp \
    Core/UI/Storage/CStorage.cpp \
    Core/UI/Storage/CStorageChanger.cpp \
    Core/UI/Storage/CStorageContent.cpp \
    main.cpp \
    EasyManager.cpp

HEADERS += \
    Core/CCore.h \
    Core/UI/General/BTN/IBTN.h \
    Core/UI/General/ScrollArea/CScrollArea.h \
    Core/UI/General/TabWidget/Category/ITabCategory.h \
    Core/UI/General/TabWidget/SubCategory/ITabSubCategory.h \
    Core/UI/General/Table/ITable.h \
    Core/UI/Storage/CStorage.h \
    Core/UI/Storage/CStorageChanger.h \
    Core/UI/Storage/CStorageContent.h \
    EasyManager.h

FORMS += \
    Core/UI/General/BTN/IBTN.ui \
    Core/UI/General/TabWidget/Category/ITabCategory.ui \
    Core/UI/General/TabWidget/SubCategory/ITabSubCategory.ui \
    Core/UI/General/Table/ITable.ui \
    Core/UI/Storage/CStorage.ui \
    Core/UI/Storage/CStorageChanger.ui \
    Core/UI/Storage/CStorageContent.ui \
    EasyManager.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
