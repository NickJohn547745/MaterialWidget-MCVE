#include <QtMaterialWidgets/include/qtmaterialmenu.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialmenuplugin.h>

#include <QtPlugin>

QtMaterialMenuPlugin::QtMaterialMenuPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialMenuPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialMenuPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialMenuPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialMenu(parent);
}

QString QtMaterialMenuPlugin::name() const
{
    return QLatin1String("QtMaterialMenu");
}

QString QtMaterialMenuPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialMenuPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialMenuPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialMenuPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialMenuPlugin::isContainer() const
{
    return false;
}

QString QtMaterialMenuPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialMenu\" name=\"matMenu\">\n"
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

QString QtMaterialMenuPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialmenu.h>");
}

