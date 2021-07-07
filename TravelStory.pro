QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gonggao.cpp \
    gonggaopublish.cpp \
    information.cpp \
    main.cpp \
    mypushbutton.cpp \
    mypushbutton_2.cpp \
    publish.cpp \
    rizhi.cpp \
    rizhipublish.cpp \
    single.cpp \
    single_0.cpp \
    single_2.cpp \
    single_3.cpp \
    widget.cpp \
    widgetcarpublish.cpp \
    widgetchat.cpp \
    widgetdailypublish.cpp \
    widgetlog.cpp \
    widgetnoticepublish.cpp \
    widgetregister.cpp \
    yueche.cpp \
    yuechepublish.cpp

HEADERS += \
    gonggao.h \
    gonggaopublish.h \
    information.h \
    mypushbutton.h \
    mypushbutton_2.h \
    publish.h \
    rizhi.h \
    rizhipublish.h \
    single.h \
    single_0.h \
    single_2.h \
    single_3.h \
    widget.h \
    widgetcarpublish.h \
    widgetchat.h \
    widgetdailypublish.h \
    widgetlog.h \
    widgetnoticepublish.h \
    widgetregister.h \
    yueche.h \
    yuechepublish.h

FORMS += \
    gonggao.ui \
    gonggaopublish.ui \
    information.ui \
    publish.ui \
    rizhi.ui \
    rizhipublish.ui \
    single.ui \
    single_0.ui \
    single_2.ui \
    single_3.ui \
    widget.ui \
    widgetcarpublish.ui \
    widgetchat.ui \
    widgetdailypublish.ui \
    widgetlog.ui \
    widgetnoticepublish.ui \
    widgetregister.ui \
    yueche.ui \
    yuechepublish.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES +=
