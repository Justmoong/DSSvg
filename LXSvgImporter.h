//
// Created by Justmoong on 5/28/25.
//

// SvgImageProviderModule.h
#pragma once
#include <QQmlEngine>

namespace LXSvgImporter {
    void registerProvider(QQmlEngine *engine, const QString &prefix = "svg");
}