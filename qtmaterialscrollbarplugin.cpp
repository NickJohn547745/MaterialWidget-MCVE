#include <QtMaterialWidgets/include/qtmaterialscrollbar.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialscrollbarplugin.h>

#include <QtPlugin>

QtMaterialScrollBarPlugin::QtMaterialScrollBarPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialScrollBarPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialScrollBarPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialScrollBarPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialScrollBar(parent);
}

QString QtMaterialScrollBarPlugin::name() const
{
    return QLatin1String("QtMaterialScrollBar");
}

QString QtMaterialScrollBarPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialScrollBarPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialScrollBarPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialScrollBarPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialScrollBarPlugin::isContainer() const
{
    return false;
}

QString QtMaterialScrollBarPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialScrollBar\" name=\"matScrollBar\">\n"
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

QString QtMaterialScrollBarPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialscrollbar.h>");
}

