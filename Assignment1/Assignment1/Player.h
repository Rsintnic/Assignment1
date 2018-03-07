#pragma once
#include "PrimaryWeapon.h"
#include "SecondaryWeapon.h"
class Player
{
protected:

	PrimaryWeapon* pW;
	SecondaryWeapon* sW;

public:
	Player();
	~Player();
	void Equip(Weapon* w);
	void UnequipPrimary();
	void UnequipSecondary();
	void ShootPrimary();
	void ShootSecondary();
	void ReloadPrimary();
	void ReloadSecondary();
};

