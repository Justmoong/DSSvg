//
// Created by Justmoong on 5/28/25.
//
// SvgImageProviderModule.cpp
#include "DSSvgImporter.h"
#include "DSSvgProvider.h"

void SvgImporter::registerProvider(QQmlEngine *engine, const QString &prefix) {
    engine->addImageProvider(prefix, new DSSvgProvider());
}