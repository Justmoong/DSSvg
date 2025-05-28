//
// Created by Justmoong on 5/28/25.
//


#include <QQmlEngine>
#include <QQmlExtensionPlugin>

class SvgPlugin : public QQmlExtensionPlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override {
        qmlRegisterType<SvgItem>(uri, 1, 0, "SvgItem");
    }
};
