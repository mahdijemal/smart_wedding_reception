QT       += core gui sql printsupport network charts
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    arduino.cpp \
    client.cpp \
    connection.cpp \
    depenses.cpp \
    dialogaccount.cpp \
    dialogclient.cpp \
    dialogdepenses.cpp \
    dialogfin.cpp \
    dialoginv.cpp \
    dialoginvite.cpp \
    dialogmenu.cpp \
    dialogper.cpp \
    dialogpersonnel.cpp \
    dialogres.cpp \
    dialogreservation.cpp \
    dialogrevenus.cpp \
    dialogrole.cpp \
    dialogsalle.cpp \
    gestion_personnel.cpp \
    invite.cpp \
    mail.cpp \
    main.cpp \
    dialoglogin.cpp \
    qcustomplot.cpp \
    reservation.cpp \
    revenus.cpp \
    role.cpp \
    salle.cpp \
    smtp.cpp \
    statistiques.cpp \
    stqt_type.cpp

HEADERS += \
    account.h \
    arduino.h \
    client.h \
    connection.h \
    depenses.h \
    dialogaccount.h \
    dialogclient.h \
    dialogdepenses.h \
    dialogfin.h \
    dialoginv.h \
    dialoginvite.h \
    dialoglogin.h \
    dialogmenu.h \
    dialogper.h \
    dialogpersonnel.h \
    dialogres.h \
    dialogreservation.h \
    dialogrevenus.h \
    dialogrole.h \
    dialogsalle.h \
    gestion_personnel.h \
    invite.h \
    mail.h \
    qcustomplot.h \
    reservation.h \
    revenus.h \
    role.h \
    salle.h \
    smtp.h \
    statistiques.h \
    stqt_type.h

FORMS += \
    dialogaccount.ui \
    dialogclient.ui \
    dialogdepenses.ui \
    dialogfin.ui \
    dialoginv.ui \
    dialoginvite.ui \
    dialoglogin.ui \
    dialogmenu.ui \
    dialogper.ui \
    dialogpersonnel.ui \
    dialogres.ui \
    dialogreservation.ui \
    dialogrevenus.ui \
    dialogrole.ui \
    dialogsalle.ui \
    mail.ui \
    statistiques.ui \
    stqt_type.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    image/Capture.png \
    image/Capture1.png \
    image/Capture2.PNG \
    image/Capture4.PNG \
    image/Capture5.png \
    image/image 1.png \
    image/image 2.png \
    image/image 3.png \
    image/image 4.png \
    image/image5.png \
    image/image6.png

RESOURCES += \
    resource.qrc
