//
// Created by Justmoong on 5/28/25.
//
#include <QQuickPaintedItem>
#include <QSvgRenderer>
#include <QPainter>
#include <QString>
#include <QColor>
#include <QtQml/qqml.h>

class LXSvgItem : public QQuickPaintedItem {
    Q_OBJECT
    Q_PROPERTY(QString source READ source WRITE setSource NOTIFY sourceChanged)
    Q_PROPERTY(QString elementId READ elementId WRITE setElementId NOTIFY elementIdChanged)
    Q_PROPERTY(QColor colorOverride READ colorOverride WRITE setColorOverride NOTIFY colorOverrideChanged)

public:
    void paint(QPainter *painter) override;

private:
    QString m_source;
    QString m_elementId;
    QColor m_colorOverride;
    QSvgRenderer m_renderer;
};