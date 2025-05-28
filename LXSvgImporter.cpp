//
// Created by Justmoong on 5/28/25.
//
// SvgImageProviderModule.cpp
#include "LXSvgImporter.h"
#include "LXSvgProvider.h"

void SvgImporter::registerProvider(QQmlEngine *engine, const QString &prefix) {
    engine->addImageProvider(prefix, new LXSvgProvider());
}