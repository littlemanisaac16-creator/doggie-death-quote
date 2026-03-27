#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    void resetLevel() {
        PlayLayer::resetLevel();

        if (auto deathLabel = static_cast<CCLabelBMFont*>(this->getChildByID("death-label"))) {
            deathLabel->setString("Stop testing gravity!");
        }
    }
};
