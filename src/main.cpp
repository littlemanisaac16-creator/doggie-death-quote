#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    void resetLevel() {
        PlayLayer::resetLevel();

        auto deathLabel = static_cast<CCLabelBMFont*>(this->getChildByID("death-label"));
        if (deathLabel) {
            deathLabel->setString("Stop testing gravity!");
        }
    }
};
