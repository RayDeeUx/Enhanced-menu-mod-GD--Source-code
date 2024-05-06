#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) { return false; }
			
		bool hasIconProfileMod = Loader::get()->isModLoaded("capeling.icon_profile_2.2");
		bool hasBetterMenuMod = Loader::get()->isModLoaded("muhammadgames.bettermenu");
		bool hasMinecraftify = Loader::get()->isModLoaded("zalphalaneous.minecraft");
		bool hasMinecraftMenu = Loader::get()->isModLoaded("undefined0.minecraft_menu");
		bool hasNoGrounds = Loader::get()->isModLoaded("riley.nogrounds");
	
		if (
			!hasBetterMenuMod &&
			!hasMinecraftify &&
			!hasMinecraftMenu
		) {
	
			// changes the editor button
			if (auto editorButton = getChildByIDRecursive("editor-button")) {
				editorButton->setPosition(211.25, 55);
				editorButton->setScale(1.55);
			}
		
			// changes the play button
			if (auto playButton = getChildByIDRecursive("play-button")) {
				playButton->setPosition(320, 55);
				playButton->setScale(0.7);
			}
		
			// changes the 3 middle buttons
			if (auto mainMenu = getChildByIDRecursive("main-menu")) mainMenu->setPosition(284.5, 190);
		
			// changes the achievements button
			if (auto achievementsButton = getChildByIDRecursive("achievements-button")) {
				achievementsButton->setPosition(-90.45, 284.45);
				achievementsButton->setScale(0.619);
			}
		
			// changes the settings button
			if (auto settingsButton = getChildByIDRecursive("settings-button")) {
				settingsButton->setPosition(383, 80.476);
				settingsButton->setScale(0.819);
			}
		
			// changes the stats button
			if (auto statsButton = getChildByIDRecursive("stats-button")) statsButton->setPosition(403.5, 276.5);
		
			// changes the newgrounds button
			if (!hasNoGrounds) {
				getChildByIDRecursive("newgrounds-button")->setPosition(320.2, 24.5);
				getChildByIDRecursive("newgrounds-button")->setScale(0.844);
			}
		
			// changes the geode button
			if (auto geodeButton = getChildByIDRecursive("geode.loader/geode-button")) {
				geodeButton->setPosition(139.5, 48.476);
				geodeButton->setScale(1.6);
			}
		
			// changes the username button
			if (auto playerUsername = getChildByIDRecursive("player-username"))
			{
				playerUsername->setPosition(72, 175);
				playerUsername->setScale(0.679);
			}
		
			// changes the username button with compatibility for the IconProfile mod
			if (hasIconProfileMod) {
				getChildByIDRecursive("profile-button")->setPosition(99.5, 44);
				getChildByIDRecursive("profile-button")->setScale(1.4);
			}
			else {
				getChildByIDRecursive("profile-button")->setPosition(54.5, 44);
				getChildByIDRecursive("profile-button")->setScale(1.4);
			}
	
		}

	return true;
	}
};