#include <QtMaterialWidgets/include/qtmaterialtextfield.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialtextfieldplugin.h>

#include <QtPlugin>

QtMaterialTextFieldPlugin::QtMaterialTextFieldPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialTextFieldPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialTextFieldPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialTextFieldPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialTextField(parent);
}

QString QtMaterialTextFieldPlugin::name() const
{
    return QLatin1String("QtMaterialTextField");
}

QString QtMaterialTextFieldPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialTextFieldPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialTextFieldPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialTextFieldPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialTextFieldPlugin::isContainer() const
{
    return false;
}

QString QtMaterialTextFieldPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialTextField\" name=\"qtMaterialTextField\">\n"
           "  <property name=\"geometry\">\n"
           "   <rect>\n"
           "    <x>0</x>\n"
           "    <y>0</y>\n"
           "    <width>100</width>\n"
           "    <height>20</height>\n"
           "   </rect>\n"
           "  </property>\n"
           " </widget>\n"
           "</ui>\n";
}

QString QtMaterialTextFieldPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialtextfield.h>");
}

