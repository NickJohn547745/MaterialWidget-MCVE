#include <QtMaterialWidgets/include/qtmaterialprogress.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialprogressplugin.h>

#include <QtPlugin>

QtMaterialProgressPlugin::QtMaterialProgressPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialProgressPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialProgressPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialProgressPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialProgress(parent);
}

QString QtMaterialProgressPlugin::name() const
{
    return QLatin1String("QtMaterialProgress");
}

QString QtMaterialProgressPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialProgressPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialProgressPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialProgressPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialProgressPlugin::isContainer() const
{
    return false;
}

QString QtMaterialProgressPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialProgress\" name=\"matProgressBar\">\n"
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

QString QtMaterialProgressPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialprogress.h>");
}

