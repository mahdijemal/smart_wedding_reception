QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    connection.cpp \
    depenses.cpp \
    dialogaccount.cpp \
    dialogdepenses.cpp \
    dialogfin.cpp \
    dialogmenu.cpp \
    dialogrevenus.cpp \
    main.cpp \
    dialoglogin.cpp \
    revenus.cpp

HEADERS += \
    account.h \
    connection.h \
    depenses.h \
    dialogaccount.h \
    dialogdepenses.h \
    dialogfin.h \
    dialoglogin.h \
    dialogmenu.h \
    dialogrevenus.h \
    revenus.h

FORMS += \
    dialogaccount.ui \
    dialogdepenses.ui \
    dialogfin.ui \
    dialoglogin.ui \
    dialogmenu.ui \
    dialogrevenus.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
