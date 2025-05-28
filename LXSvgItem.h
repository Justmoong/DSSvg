//
// Created by Justmoong on 5/28/25.
//
#pragma once

#include <QQuickPaintedItem>
#include <QSvgRenderer>
#include <QString>
#include <QColor>

class LXSvgItem : public QQuickPaintedItem {
    Q_OBJECT
    Q_PROPERTY(QString source READ source WRITE setSource NOTIFY sourceChanged)
    Q_PROPERTY(QString elementId READ elementId WRITE setElementId NOTIFY elementIdChanged)
    Q_PROPERTY(QColor colorOverride READ colorOverride WRITE setColorOverride NOTIFY colorOverrideChanged)

public:
    explicit LXSvgItem(QQuickItem *parent = nullptr);

    QString source() const;
    void setSource(const QString &source);

    QString elementId() const;
    void setElementId(const QString &elementId);

    QColor colorOverride() const;
    void setColorOverride(const QColor &color);

    void paint(QPainter *painter) override;

    signals:
        void sourceChanged();
    void elementIdChanged();
    void colorOverrideChanged();

private:
    void loadSvg();

    QString m_source;
    QString m_elementId;
    QColor m_colorOverride;
    QSvgRenderer m_renderer;
};