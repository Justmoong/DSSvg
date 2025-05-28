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
        // URI 일치 여부는 CMake의 qt_add_qml_module() URI와 반드시 같아야 함
        Q_ASSERT(uri == QStringLiteral("SvgProvider"));
        qmlRegisterType<LXSvgItem>(uri, 1, 0, "LXSvgItem");
    }
};