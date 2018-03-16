#include <QtMaterialWidgets/include/qtmaterialcheckbox.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialcheckboxplugin.h>

#include <QtPlugin>

QtMaterialCheckBoxPlugin::QtMaterialCheckBoxPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialCheckBoxPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialCheckBoxPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialCheckBoxPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialCheckBox(parent);
}

QString QtMaterialCheckBoxPlugin::name() const
{
    return QLatin1String("QtMaterialCheckBox");
}

QString QtMaterialCheckBoxPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialCheckBoxPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialCheckBoxPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialCheckBoxPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialCheckBoxPlugin::isContainer() const
{
    return false;
}

QString QtMaterialCheckBoxPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialCheckBox\" name=\"matCheckBox\">\n"
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

QString QtMaterialCheckBoxPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialcheckbox.h>");
}

