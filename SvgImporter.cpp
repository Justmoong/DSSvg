//
// Created by Justmoong on 5/28/25.
//
// SvgImageProviderModule.cpp
#include "SvgImporter.h"
#include "SvgProvider.h"

void SvgImporter::registerProvider(QQmlEngine *engine, const QString &prefix) {
    engine->addImageProvider(prefix, new SvgProvider());
}