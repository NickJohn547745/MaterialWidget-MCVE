#include <QtMaterialWidgets/include/qtmaterialsnackbar.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialsnackbarplugin.h>

#include <QtPlugin>

QtMaterialSnackBarPlugin::QtMaterialSnackBarPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialSnackBarPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialSnackBarPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialSnackBarPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialSnackbar(parent);
}

QString QtMaterialSnackBarPlugin::name() const
{
    return QLatin1String("QtMaterialSnackBar");
}

QString QtMaterialSnackBarPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialSnackBarPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialSnackBarPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialSnackBarPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialSnackBarPlugin::isContainer() const
{
    return false;
}

QString QtMaterialSnackBarPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialSnackBar\" name=\"matSnackBar\">\n"
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

QString QtMaterialSnackBarPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialsnackbar.h>");
}

