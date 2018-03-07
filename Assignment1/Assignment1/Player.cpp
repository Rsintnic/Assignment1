#include "Player.h"

#include <iostream>

Player::Player()
{
	pW = nullptr;
	sW = nullptr;
}


Player::~Player()
{

}

void Player::Equip(Weapon* w) {
	if (dynamic_cast<PrimaryWeapon*>(w) && pW == nullptr) {
		pW = dynamic_cast<PrimaryWeapon*>(w);
		std::cout << "Equipped to primary slot." << std::endl;
	}
	else if (dynamic_cast<SecondaryWeapon*>(w) && sW == nullptr) {
		sW = dynamic_cast<SecondaryWeapon*>(w);
		std::cout << "Equipped to secondary slot." << std::endl;
	}
	else
		std::cout << "Weapon cannot be equipped." << std::endl;
}

void Player::UnequipPrimary() {
	pW = nullptr;
	std::cout << "Primary weapon dropped." << std::endl;
}

void Player::UnequipSecondary() {
	sW = nullptr;
	std::cout << "Secondary weapon dropped." << std::endl;
}

void Player::ShootPrimary() {
	pW->Shoot();
}

void Player::ShootSecondary() {
	sW->Shoot();
}
void Player::ReloadPrimary() {
	pW->Reload();
}

void Player::ReloadSecondary() {
	sW->Reload();
}
