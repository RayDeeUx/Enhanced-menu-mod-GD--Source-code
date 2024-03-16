#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/loader/Mod.hpp>
#include <Geode/cocos/label_nodes/CCLabelBMFont.h>
#include <iostream>

using namespace geode::prelude;



class $modify(MenuLayer) {
	bool init() {
		if (!MenuLayer::init())
			return false;
                        
        bool hasIconProfileMod = Loader::get()->isModLoaded("capeling.icon_profile_2.2");


        // changes the editor button
        this->getChildByIDRecursive("editor-button")->setPosition(211.25, 55);
        this->getChildByIDRecursive("editor-button")->setScale(1.55);

        // changes the play button
        this->getChildByIDRecursive("play-button")->setPosition(320, 55);
        this->getChildByIDRecursive("play-button")->setScale(0.7);

        // changes the 3 middle buttons
        this->getChildByIDRecursive("main-menu")->setPosition(284.5, 190);

        // changes the achievements button
        this->getChildByIDRecursive("achievements-button")->setPosition(-90.45, 284.45);
        this->getChildByIDRecursive("achievements-button")->setScale(0.619);

        // changes the settings button
        this->getChildByIDRecursive("settings-button")->setPosition(383, 80.476);
        this->getChildByIDRecursive("settings-button")->setScale(0.819);

        // changes the stats button
        this->getChildByIDRecursive("stats-button")->setPosition(403.5, 276.5);

        // changes the newgrounds button
        this->getChildByIDRecursive("newgrounds-button")->setPosition(320.2, 24.5);
        this->getChildByIDRecursive("newgrounds-button")->setScale(0.844);

        // changes the geode button
        this->getChildByIDRecursive("geode.loader/geode-button")->setPosition(139.5, 48.476);
        this->getChildByIDRecursive("geode.loader/geode-button")->setScale(1.6);

        // changes the username button
        this->getChildByIDRecursive("player-username")->setPosition(72, 175);
        this->getChildByIDRecursive("player-username")->setScale(0.679);

        // changes the username button with compatibility for the IconProfile mod
        if (hasIconProfileMod == true) {
                this->getChildByIDRecursive("profile-button")->setPosition(99.5, 44);
                this->getChildByIDRecursive("profile-button")->setScale(1.4);
        }
        else {
                this->getChildByIDRecursive("profile-button")->setPosition(54.5, 44);
                this->getChildByIDRecursive("profile-button")->setScale(1.4);
        }

        return true;
	}
};