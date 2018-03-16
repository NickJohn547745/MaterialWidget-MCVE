#include <QtMaterialWidgets/include/qtmaterialflatbutton.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialflatbuttonplugin.h>

#include <QtPlugin>

QtMaterialFlatButtonPlugin::QtMaterialFlatButtonPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialFlatButtonPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialFlatButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialFlatButtonPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialFlatButton(parent);
}

QString QtMaterialFlatButtonPlugin::name() const
{
    return QLatin1String("QtMaterialFlatButton");
}

QString QtMaterialFlatButtonPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialFlatButtonPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialFlatButtonPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialFlatButtonPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialFlatButtonPlugin::isContainer() const
{
    return false;
}

QString QtMaterialFlatButtonPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialFlatButton\" name=\"matFlatButton\">\n"
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

QString QtMaterialFlatButtonPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialflatbutton.h>");
}

