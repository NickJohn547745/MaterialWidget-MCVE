#include <QtMaterialWidgets/include/qtmaterialdialog.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialdialogplugin.h>

#include <QtPlugin>

QtMaterialDialogPlugin::QtMaterialDialogPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialDialogPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialDialogPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialDialogPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialDialog(parent);
}

QString QtMaterialDialogPlugin::name() const
{
    return QLatin1String("QtMaterialDialog");
}

QString QtMaterialDialogPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialDialogPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialDialogPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialDialogPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialDialogPlugin::isContainer() const
{
    return false;
}

QString QtMaterialDialogPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialDialog\" name=\"matDialog\">\n"
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

QString QtMaterialDialogPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialdialog.h>");
}

