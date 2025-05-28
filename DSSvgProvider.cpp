//
// Created by Justmoong on 5/28/25.
//
#include "DSSvgProvider.h"

DSSvgProvider::DSSvgProvider()
    : QQuickImageProvider(QQuickImageProvider::Image)
{
}

QImage DSSvgProvider::requestImage(const QString &id, QSize *size, const QSize &requestedSize)
{
    QString path = id;
    if (path.startsWith("qrc:/"))
        path = path.mid(3);

    QSvgRenderer renderer(path);
    QSize defaultSize = renderer.defaultSize();
    QSize finalSize = requestedSize.isValid() ? requestedSize : defaultSize;

    QImage image(finalSize, QImage::Format_ARGB32_Premultiplied);
    image.fill(Qt::transparent);

    QPainter painter(&image);
    renderer.render(&painter);

    if (size)
        *size = finalSize;

    return image;
}