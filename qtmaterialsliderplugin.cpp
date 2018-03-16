#include <QtMaterialWidgets/include/qtmaterialslider.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialsliderplugin.h>

#include <QtPlugin>

QtMaterialSliderPlugin::QtMaterialSliderPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialSliderPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialSliderPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialSliderPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialSlider(parent);
}

QString QtMaterialSliderPlugin::name() const
{
    return QLatin1String("QtMaterialSlider");
}

QString QtMaterialSliderPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialSliderPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialSliderPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialSliderPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialSliderPlugin::isContainer() const
{
    return false;
}

QString QtMaterialSliderPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialSlider\" name=\"matSlider\">\n"
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

QString QtMaterialSliderPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialslider.h>");
}

