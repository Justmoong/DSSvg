//
// Created by Justmoong on 5/28/25.
//
#pragma once
#include <QQmlExtensionPlugin>

class LXSvgPlugin : public QQmlExtensionPlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    void registerTypes(const char *uri) override;
};