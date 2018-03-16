#include <QtMaterialWidgets/include/qtmaterialfab.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialfabplugin.h>

#include <QtPlugin>

QtMaterialFabPlugin::QtMaterialFabPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialFabPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialFabPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialFabPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialFloatingActionButton(parent);
}

QString QtMaterialFabPlugin::name() const
{
    return QLatin1String("QtMaterialFloatingActionButton");
}

QString QtMaterialFabPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialFabPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialFabPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialFabPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialFabPlugin::isContainer() const
{
    return false;
}

QString QtMaterialFabPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialFloatingActionButton\" name=\"matFab\">\n"
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

QString QtMaterialFabPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialfab.h>");
}

