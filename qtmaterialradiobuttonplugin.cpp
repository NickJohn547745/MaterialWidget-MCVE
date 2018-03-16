#include <QtMaterialWidgets/include/qtmaterialradiobutton.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialradiobuttonplugin.h>

#include <QtPlugin>

QtMaterialRadioButtonPlugin::QtMaterialRadioButtonPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialRadioButtonPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialRadioButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialRadioButtonPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialRadioButton(parent);
}

QString QtMaterialRadioButtonPlugin::name() const
{
    return QLatin1String("QtMaterialRadioButton");
}

QString QtMaterialRadioButtonPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialRadioButtonPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialRadioButtonPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialRadioButtonPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialRadioButtonPlugin::isContainer() const
{
    return false;
}

QString QtMaterialRadioButtonPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialRadioButton\" name=\"matRadioButton\">\n"
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

QString QtMaterialRadioButtonPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialradiobutton.h>");
}

