#include <QtMaterialWidgets/include/qtmaterialtoggle.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialtoggleplugin.h>

#include <QtPlugin>

QtMaterialTogglePlugin::QtMaterialTogglePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialTogglePlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialTogglePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialTogglePlugin::createWidget(QWidget *parent)
{
    return new QtMaterialToggle(parent);
}

QString QtMaterialTogglePlugin::name() const
{
    return QLatin1String("QtMaterialToggle");
}

QString QtMaterialTogglePlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialTogglePlugin::icon() const
{
    return QIcon();
}

QString QtMaterialTogglePlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialTogglePlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialTogglePlugin::isContainer() const
{
    return false;
}

QString QtMaterialTogglePlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialToggle\" name=\"matToggle\">\n"
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

QString QtMaterialTogglePlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialtoggle.h>");
}

