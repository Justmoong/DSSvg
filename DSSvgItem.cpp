//
// Created by Justmoong on 5/28/25.
//
#include "DSSvgItem.h"
#include <QPainter>

DSSvgItem::DSSvgItem(QQuickItem *parent)
    : QQuickPaintedItem(parent) {}

QString DSSvgItem::source() const {
    return m_source;
}

void DSSvgItem::setSource(const QString &source) {
    if (m_source == source)
        return;
    m_source = source;
    loadSvg();
    emit sourceChanged();
    update();
}

QString DSSvgItem::elementId() const {
    return m_elementId;
}

void DSSvgItem::setElementId(const QString &elementId) {
    if (m_elementId == elementId)
        return;
    m_elementId = elementId;
    emit elementIdChanged();
    update();
}

QColor DSSvgItem::colorOverride() const {
    return m_colorOverride;
}

void DSSvgItem::setColorOverride(const QColor &color) {
    if (m_colorOverride == color)
        return;
    m_colorOverride = color;
    emit colorOverrideChanged();
    update(); // 향후 구현에 따라 필요
}

void DSSvgItem::loadSvg() {
    m_renderer.load(m_source);
}

void DSSvgItem::paint(QPainter *painter) {
    if (!m_renderer.isValid())
        return;

    if (!m_elementId.isEmpty() && m_renderer.elementExists(m_elementId)) {
        m_renderer.render(painter, m_elementId);
    } else {
        m_renderer.render(painter);
    }
}