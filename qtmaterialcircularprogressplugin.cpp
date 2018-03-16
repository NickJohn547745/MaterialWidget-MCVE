#include <QtMaterialWidgets/include/qtmaterialcircularprogress.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialcircularprogressplugin.h>

#include <QtPlugin>

QtMaterialCircularProgressPlugin::QtMaterialCircularProgressPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialCircularProgressPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialCircularProgressPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialCircularProgressPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialCircularProgress(parent);
}

QString QtMaterialCircularProgressPlugin::name() const
{
    return QLatin1String("QtMaterialCircularProgress");
}

QString QtMaterialCircularProgressPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialCircularProgressPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialCircularProgressPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialCircularProgressPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialCircularProgressPlugin::isContainer() const
{
    return false;
}

QString QtMaterialCircularProgressPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialCircularProgress\" name=\"matCircularProgress\">\n"
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

QString QtMaterialCircularProgressPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialcircularprogress.h>");
}

