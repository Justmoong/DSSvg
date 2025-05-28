//
// Created by Justmoong on 5/28/25.
//
#include "DSSvgPlugin.h"

class DSSvgPlugin : public QQmlExtensionPlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override {
        Q_ASSERT(uri == QStringLiteral("DSSvg"));
        qmlRegisterType<DSSvgItem>(uri, 1, 0, "DSSvgItem");
    }
};