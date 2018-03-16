QT          += designer uiplugin
CONFIG      += plugin
TEMPLATE    = lib
TARGET      = Material-Widgets-Plugin
RESOURCES   = icons.qrc

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

DESTDIR     += D:/Qt/5.9.1/Tools/QtCreator/bin/plugins/designer/
target.path =  D:/Qt/5.9.1/Tools/QtCreator/bin/plugins/designer/
INSTALLS    += target

include(qtmaterialappbar.pri)
include(qtmaterialautocomplete.pri)
include(qtmaterialavatar.pri)
include(qtmaterialbadge.pri)
include(qtmaterialcheckbox.pri)
include(qtmaterialcircularprogress.pri)
include(qtmaterialdialog.pri)
include(qtmaterialdrawer.pri)
include(qtmaterialextrafiles.pri)
include(qtmaterialfab.pri)
include(qtmaterialflatbutton.pri)
include(qtmaterialiconbutton.pri)
include(qtmaterialmenu.pri)
include(qtmaterialprogress.pri)
include(qtmaterialradiobutton.pri)
include(qtmaterialraisedbutton.pri)
include(qtmaterialscrollbar.pri)
include(qtmaterialslider.pri)
include(qtmaterialsnackbar.pri)
include(qtmaterialtabs.pri)
include(qtmaterialtextfield.pri)
include(qtmaterialtoggle.pri)

HEADERS += \
#Plugin Headers
    qtmaterialappbarplugin.h \
    qtmaterialautocompleteplugin.h \
    qtmaterialavatarplugin.h \
    qtmaterialbadgeplugin.h \
    qtmaterialcheckboxplugin.h \
    qtmaterialcircularprogressplugin.h \
    qtmaterialdialogplugin.h \
    qtmaterialdrawerplugin.h \
    qtmaterialfabplugin.h \
    qtmaterialflatbuttonplugin.h \
    qtmaterialiconbuttonplugin.h \
    qtmaterialmenuplugin.h \
    qtmaterialprogressplugin.h \
    qtmaterialradiobuttonplugin.h \
    qtmaterialraisedbuttonplugin.h \
    qtmaterialscrollbarplugin.h \
    qtmaterialsliderplugin.h \
    qtmaterialsnackbarplugin.h \
    qtmaterialtabsplugin.h \
    qtmaterialtextfieldplugin.h \
    qtmaterialtoggleplugin.h \
    qtmaterialwidgets.h

SOURCES += \
#Plugin Sources
    qtmaterialappbarplugin.cpp \
    qtmaterialautocompleteplugin.cpp \
    qtmaterialavatarplugin.cpp \
    qtmaterialbadgeplugin.cpp \
    qtmaterialcheckboxplugin.cpp \
    qtmaterialdialogplugin.cpp \
    qtmaterialdrawerplugin.cpp \
    qtmaterialfabplugin.cpp \
    qtmaterialflatbuttonplugin.cpp \
    qtmaterialiconbuttonplugin.cpp \
    qtmaterialmenuplugin.cpp \
    qtmaterialprogressplugin.cpp \
    qtmaterialradiobuttonplugin.cpp \
    qtmaterialraisedbuttonplugin.cpp \
    qtmaterialscrollbarplugin.cpp \
    qtmaterialsliderplugin.cpp \
    qtmaterialsnackbarplugin.cpp \
    qtmaterialtabsplugin.cpp \
    qtmaterialtextfieldplugin.cpp \
    qtmaterialtoggleplugin.cpp \
    qtmaterialwidgets.cpp \
    qtmaterialcircularprogressplugin.cpp
