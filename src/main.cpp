#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        FLAlertLayer::create(
            "Geode",
            "Hello from your new mod! This was compiled using GitHub Actions.",
            "OK"
        )->show();

        return true;
    }
};
