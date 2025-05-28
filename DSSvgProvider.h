//
// Created by Justmoong on 5/28/25.
//
#pragma once
#include <QQuickImageProvider>
#include <QSvgRenderer>
#include <QImage>
#include <QPainter>

class DSSvgProvider : public QQuickImageProvider
{
public:
    DSSvgProvider();

    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize) override;
};