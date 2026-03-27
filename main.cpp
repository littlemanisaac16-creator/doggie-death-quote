#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

// We are "hooking" into the PlayLayer (the part of GD that handles playing levels)
class $modify(PlayLayer) {
    void resetLevel() {
        // Run the normal reset code first
        PlayLayer::resetLevel();

        // Check if the death message label exists
        if (auto deathLabel = static_cast<CCLabelBMFont*>(this->getChildByID("death-label"))) {
            // Change the text to Doggie's iconic quote!
            deathLabel->setString("Stop testing gravity!");
        }
    }
};