#include "qtmaterialbadgeplugin.h"
#include "qtmaterialappbarplugin.h"
#include "qtmaterialprogressplugin.h"

//#include "qtmaterialautocompleteplugin.h"
//#include "qtmaterialavatarplugin.h"
//#include "qtmaterialcheckboxplugin.h"
//#include "qtmaterialcircularprogressplugin.h"
//#include "qtmaterialdialogplugin.h"
//#include "qtmaterialdrawerplugin.h"
//#include "qtmaterialfabplugin.h"
//#include "qtmaterialflatbuttonplugin.h"
//#include "qtmaterialiconbuttonplugin.h"
//#include "qtmaterialmenuplugin.h"
//#include "qtmaterialradiobuttonplugin.h"
//#include "qtmaterialraisedbuttonplugin.h"
//#include "qtmaterialscrollbarplugin.h"
//#include "qtmaterialsliderplugin.h"
//#include "qtmaterialsnackbarplugin.h"
//#include "qtmaterialtabsplugin.h"
//#include "qtmaterialtextfieldplugin.h"
//#include "qtmaterialtoggleplugin.h"
#include "qtmaterialwidgets.h"

QtMaterialWidgets::QtMaterialWidgets(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new QtMaterialAppBarPlugin(this));
    m_widgets.append(new QtMaterialBadgePlugin(this));
    m_widgets.append(new QtMaterialProgressPlugin(this));

    /*m_widgets.append(new QtMaterialAutoCompletePlugin(this));
    m_widgets.append(new QtMaterialAvatarPlugin(this));
    m_widgets.append(new QtMaterialCheckBoxPlugin(this));
    m_widgets.append(new QtMaterialCircularProgressPlugin(this));
    m_widgets.append(new QtMaterialDialogPlugin(this));
    m_widgets.append(new QtMaterialDrawerPlugin(this));
    m_widgets.append(new QtMaterialFabPlugin(this));
    m_widgets.append(new QtMaterialFlatButtonPlugin(this));
    m_widgets.append(new QtMaterialIconButtonPlugin(this));
    m_widgets.append(new QtMaterialMenuPlugin(this));
    m_widgets.append(new QtMaterialRadioButtonPlugin(this));
    m_widgets.append(new QtMaterialRaisedButtonPlugin(this));
    m_widgets.append(new QtMaterialScrollBarPlugin(this));
    m_widgets.append(new QtMaterialSliderPlugin(this));
    m_widgets.append(new QtMaterialSnackBarPlugin(this));
    m_widgets.append(new QtMaterialTabsPlugin(this));
    m_widgets.append(new QtMaterialTextFieldPlugin(this));
    m_widgets.append(new QtMaterialTogglePlugin(this));*/

}

QList<QDesignerCustomWidgetInterface*> QtMaterialWidgets::customWidgets() const
{
    return m_widgets;
}
