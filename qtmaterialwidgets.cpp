#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialbadgeplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialappbarplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialprogressplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialtextfieldplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialautocompleteplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialavatarplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialcheckboxplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialcircularprogressplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialdialogplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialdrawerplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialfabplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialflatbuttonplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialiconbuttonplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialmenuplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialradiobuttonplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialraisedbuttonplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialscrollbarplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialsliderplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialsnackbarplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialtabsplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialtoggleplugin.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialwidgets.h>

QtMaterialWidgets::QtMaterialWidgets(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new QtMaterialAppBarPlugin(this));
    m_widgets.append(new QtMaterialBadgePlugin(this));
    m_widgets.append(new QtMaterialProgressPlugin(this));
    m_widgets.append(new QtMaterialTextFieldPlugin(this));
    m_widgets.append(new QtMaterialAutoCompletePlugin(this));
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
    //m_widgets.append(new QtMaterialScrollBarPlugin(this));
    m_widgets.append(new QtMaterialSliderPlugin(this));
    m_widgets.append(new QtMaterialSnackBarPlugin(this));
    m_widgets.append(new QtMaterialTabsPlugin(this));
    m_widgets.append(new QtMaterialTogglePlugin(this));

}

QList<QDesignerCustomWidgetInterface*> QtMaterialWidgets::customWidgets() const
{
    return m_widgets;
}
