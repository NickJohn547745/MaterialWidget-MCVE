#include "qtmaterialappbar.h"
#include "qtmaterialappbarplugin.h"

#include <QtPlugin>

QtMaterialAppBarPlugin::QtMaterialAppBarPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialAppBarPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialAppBarPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialAppBarPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialAppBar(parent);
}

QString QtMaterialAppBarPlugin::name() const
{
    return QLatin1String("QtMaterialAppBar");
}

QString QtMaterialAppBarPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialAppBarPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialAppBarPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialAppBarPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialAppBarPlugin::isContainer() const
{
    return false;
}

QString QtMaterialAppBarPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialAppBar\" name=\"qtMaterialAppBar\">\n"
           "  <property name=\"geometry\">\n"
           "   <rect>\n"
           "    <x>0</x>\n"
           "    <y>0</y>\n"
           "    <width>100</width>\n"
           "    <height>100</height>\n"
           "   </rect>\n"
           "  </property>\n"
           " </widget>\n"
           "</ui>\n";
}

QString QtMaterialAppBarPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/qtmaterialappbar.h>");
}

