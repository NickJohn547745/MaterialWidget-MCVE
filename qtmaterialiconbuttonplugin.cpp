#include <QtMaterialWidgets/include/qtmaterialiconbutton.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialiconbuttonplugin.h>

#include <QtPlugin>

QtMaterialIconButtonPlugin::QtMaterialIconButtonPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialIconButtonPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialIconButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialIconButtonPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialIconButton(parent);
}

QString QtMaterialIconButtonPlugin::name() const
{
    return QLatin1String("QtMaterialIconButton");
}

QString QtMaterialIconButtonPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialIconButtonPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialIconButtonPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialIconButtonPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialIconButtonPlugin::isContainer() const
{
    return false;
}

QString QtMaterialIconButtonPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialIconButton\" name=\"matIconButton\">\n"
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

QString QtMaterialIconButtonPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialiconbutton.h>");
}

