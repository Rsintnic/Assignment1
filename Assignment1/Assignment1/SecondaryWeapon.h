#pragma once

#include "Weapon.h"

class SecondaryWeapon : public Weapon
{
protected:
	unsigned int clipSize;
	unsigned int clipCount;
public:
	SecondaryWeapon(unsigned int _clipSize);
	~SecondaryWeapon();
	virtual void Shoot() {};
	void Reload();

};

