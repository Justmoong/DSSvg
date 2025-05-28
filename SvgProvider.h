//
// Created by Justmoong on 5/28/25.
//
#pragma once
#include <QQuickImageProvider>
#include <QSvgRenderer>
#include <QImage>
#include <QPainter>

class SvgProvider : public QQuickImageProvider
{
public:
    SvgProvider();

    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize) override;
};