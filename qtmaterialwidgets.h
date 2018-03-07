#ifndef QTMATERIALWIDGETS_H
#define QTMATERIALWIDGETS_H

#include <QtDesigner>
#include <qplugin.h>

class QtMaterialWidgets : public QObject, public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetCollectionInterface")

public:
    explicit QtMaterialWidgets(QObject *parent = 0);

    virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const Q_DECL_OVERRIDE;

private:
    QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif
