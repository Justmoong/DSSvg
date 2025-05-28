//
// Created by Justmoong on 5/28/25.
//
#include <QQmlEngine>
#include <QQmlExtensionPlugin>
#include "LXSvgItem.h"

class LXSvgPlugin : public QQmlExtensionPlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override {
        Q_ASSERT(uri == QStringLiteral("LXSvg"));
        qmlRegisterType<LXSvgItem>(uri, 1, 0, "LXSvgItem");
    }
};