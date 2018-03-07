#include "qtmaterialbadge.h"
#include "qtmaterialbadgeplugin.h"

#include <QtPlugin>

QtMaterialBadgePlugin::QtMaterialBadgePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtMaterialBadgePlugin::initialize(QDesignerFormEditorInterface *)
{
    if (m_initialized)
        return;
    m_initialized = true;
}

bool QtMaterialBadgePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QtMaterialBadgePlugin::createWidget(QWidget *parent)
{
    return new QtMaterialBadge(parent);
}

QString QtMaterialBadgePlugin::name() const
{
    return QLatin1String("QtMaterialBadge");
}

QString QtMaterialBadgePlugin::group() const
{
    return QLatin1String("Material Widgets");
}

QIcon QtMaterialBadgePlugin::icon() const
{
    return QIcon("://qtmaterialbadgeicon.png");
}

QString QtMaterialBadgePlugin::toolTip() const
{
    return QLatin1String("");
}

QString QtMaterialBadgePlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QtMaterialBadgePlugin::isContainer() const
{
    return false;
}

QString QtMaterialBadgePlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"QtMaterialBadge\" name=\"qtMaterialBadge\">\n"
           "  <property name=\"geometry\">\n"
           "   <rect>\n"
           "    <x>0</x>\n"
           "    <y>0</y>\n"
           "    <width>30</width>\n"
           "    <height>30</height>\n"
           "   </rect>\n"
           "  </property>\n"
           "  <property name=\"minimumSize\">"
           "  <size>"
           "  <width>30</width>"
           "  <height>30</height>"
           "  </size>"
           "  </property>"
           " </widget>\n"
           "</ui>\n";
}

QString QtMaterialBadgePlugin::includeFile() const
{
    return QLatin1String("<QtMaterialWidgets/qtmaterialbadge.h>");
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qtmaterialbadgeplugin, QtMaterialBadgePlugin)
#endif // QT_VERSION < 0x050000
