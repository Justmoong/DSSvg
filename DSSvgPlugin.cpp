//
// Created by Justmoong on 5/28/25.
//
#include "DSSvgPlugin.h"
#include "DSSvgItem.h"

void DSSvgPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QStringLiteral("DSSvg"));
    qmlRegisterType<DSSvgItem>(uri, 1, 0, "DSSvgItem");
}