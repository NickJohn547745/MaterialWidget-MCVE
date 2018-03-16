#include <QtMaterialWidgets/include/qtmaterialraisedbutton.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialraisedbuttonplugin.h>

#include <QtPlugin>

QtMaterialRaisedButtonPlugin::QtMaterialRaisedButtonPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialRaisedButtonPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialRaisedButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialRaisedButtonPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialRaisedButton(parent);
}

QString QtMaterialRaisedButtonPlugin::name() const
{
    return QLatin1String("QtMaterialRaisedButton");
}

QString QtMaterialRaisedButtonPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialRaisedButtonPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialRaisedButtonPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialRaisedButtonPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialRaisedButtonPlugin::isContainer() const
{
    return false;
}

QString QtMaterialRaisedButtonPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialRaisedButton\" name=\"matRaisedButton\">\n"
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

QString QtMaterialRaisedButtonPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialraisedbutton.h>");
}

