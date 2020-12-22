QT       += core gui sql opengl network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Core/CCore.cpp \
    Core/Data/CDataManagmentSystem.cpp \
    Core/Data/DataBase/Item/CItemData.cpp \
    Core/Data/DataBase/Storage/CStorageData.cpp \
    Core/Data/Item/C_MasterItem.cpp \
    Core/Data/Item/IItem.cpp \
    Core/Data/Item/Items/CItemComboBox.cpp \
    Core/Data/Item/Items/CItemEditText.cpp \
    Core/Data/Item/Items/CItemScroll.cpp \
    Core/Net/CNetCore.cpp \
    Core/UI/General/BTN/IBTN.cpp \
    Core/UI/General/ScrollArea/CScrollArea.cpp \
    Core/UI/General/TabWidget/ITabCategory.cpp \
    Core/UI/General/TabWidget/ITabSubCategory.cpp \
    Core/UI/General/Table/Order/COrderTable.cpp \
    Core/UI/General/Table/ITable.cpp \
    Core/UI/General/Table/Storage/CStorageTable.cpp \
    Core/UI/Storage/CStorage.cpp \
    Core/UI/Storage/CStorageChanger.cpp \
    Core/UI/Storage/CStorageContent.cpp \
    main.cpp \
    EasyManager.cpp

HEADERS += \
    Core/BaseTypes.h \
    Core/CCore.h \
    Core/Data/CDataManagmentSystem.h \
    Core/Data/DataBase/Item/CItemData.h \
    Core/Data/DataBase/Storage/CStorageData.h \
    Core/Data/Item/C_MasterItem.h \
    Core/Data/Item/IItem.h \
    Core/Data/Item/Items/CItemComboBox.h \
    Core/Data/Item/Items/CItemEditText.h \
    Core/Data/Item/Items/CItemScroll.h \
    Core/Net/CNetCore.h \
    Core/UI/General/BTN/IBTN.h \
    Core/UI/General/ScrollArea/CScrollArea.h \
    Core/UI/General/TabWidget/ITabCategory.h \
    Core/UI/General/TabWidget/ITabSubCategory.h \
    Core/UI/General/Table/Order/COrderTable.h \
    Core/UI/General/Table/ITable.h \
    Core/UI/General/Table/Storage/CStorageTable.h \
    Core/UI/Storage/CStorage.h \
    Core/UI/Storage/CStorageChanger.h \
    Core/UI/Storage/CStorageContent.h \
    EasyManager.h

FORMS += \
    Core/UI/General/BTN/IBTN.ui \
    Core/UI/General/TabWidget/ITabCategory.ui \
    Core/UI/General/TabWidget/ITabSubCategory.ui \
    Core/UI/General/Table/ITable.ui \
    Core/UI/Storage/CStorage.ui \
    Core/UI/Storage/CStorageChanger.ui \
    Core/UI/Storage/CStorageContent.ui \
    EasyManager.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
