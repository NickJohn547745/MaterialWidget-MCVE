#include <QtMaterialWidgets/include/qtmaterialavatar.h>
#include <QtMaterialWidgets/Material-Widget-Plugin/qtmaterialavatarplugin.h>

#include <QtPlugin>

QtMaterialAvatarPlugin::QtMaterialAvatarPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialAvatarPlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialAvatarPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialAvatarPlugin::createWidget(QWidget *parent)
{
    return new QtMaterialAvatar(parent);
}

QString QtMaterialAvatarPlugin::name() const
{
    return QLatin1String("QtMaterialAvatar");
}

QString QtMaterialAvatarPlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialAvatarPlugin::icon() const
{
    return QIcon();
}

QString QtMaterialAvatarPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialAvatarPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialAvatarPlugin::isContainer() const
{
    return false;
}

QString QtMaterialAvatarPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialAvatar\" name=\"matAvatar\">\n"
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

QString QtMaterialAvatarPlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/include/qtmaterialavatar.h>");
}

