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
    return QIcon();
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
    return QLatin1String("<widget class=\"QtMaterialBadge\" name=\"qtMaterialBadge\">\n<widget>\n");
}

QString QtMaterialBadgePlugin::includeFile() const
{
    return QLatin1String("qtmaterialbadge.h");
}

