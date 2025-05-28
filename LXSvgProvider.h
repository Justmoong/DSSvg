//
// Created by Justmoong on 5/28/25.
//
#pragma once
#include <QQuickImageProvider>
#include <QSvgRenderer>
#include <QImage>
#include <QPainter>

class LXSvgProvider : public QQuickImageProvider
{
public:
    LXSvgProvider();

    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize) override;
};