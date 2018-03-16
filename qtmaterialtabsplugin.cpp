#include <QtMaterialWidgets/include/qtmaterialtabs.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialtabsplugin.h>

#include <QtPlugin>

QtMaterialTabsPlugin::QtMaterialTabsPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialTabsPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialTabsPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialTabsPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialTabs(parent);
}

QString QtMaterialTabsPlugin::name() const
{
    return QLatin1String("QtMaterialTabs");
}

QString QtMaterialTabsPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialTabsPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialTabsPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialTabsPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialTabsPlugin::isContainer() const
{
    return false;
}

QString QtMaterialTabsPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialTabs\" name=\"matTabs\">\n"
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

QString QtMaterialTabsPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialtabs.h>");
}

