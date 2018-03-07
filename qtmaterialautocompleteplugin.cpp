#include "qtmaterialautocomplete.h"
#include "qtmaterialautocompleteplugin.h"

#include <QtPlugin>

QtMaterialAutoCompletePlugin::QtMaterialAutoCompletePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialAutoCompletePlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialAutoCompletePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialAutoCompletePlugin::createWidget(QWidget *parent)
{
    return new QtMaterialAutoComplete(parent);
}

QString QtMaterialAutoCompletePlugin::name() const
{
    return QLatin1String("QtMaterialAutoComplete");
}

QString QtMaterialAutoCompletePlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialAutoCompletePlugin::icon() const
{
    return QIcon();
}

QString QtMaterialAutoCompletePlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialAutoCompletePlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialAutoCompletePlugin::isContainer() const
{
    return false;
}

QString QtMaterialAutoCompletePlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialAutoComplete\" name=\"qtMaterialAutoComplete\">\n"
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

QString QtMaterialAutoCompletePlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/qtmaterialautocomplete.h>");
}

