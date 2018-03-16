#include <QtMaterialWidgets/include/qtmaterialdrawer.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialdrawerplugin.h>

#include <QtPlugin>

QtMaterialDrawerPlugin::QtMaterialDrawerPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialDrawerPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialDrawerPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialDrawerPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialDrawer(parent);
}

QString QtMaterialDrawerPlugin::name() const
{
    return QLatin1String("QtMaterialDrawer");
}

QString QtMaterialDrawerPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialDrawerPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialDrawerPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialDrawerPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialDrawerPlugin::isContainer() const
{
    return false;
}

QString QtMaterialDrawerPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialDrawer\" name=\"matDrawer\">\n"
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

QString QtMaterialDrawerPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialdrawer.h>");
}

