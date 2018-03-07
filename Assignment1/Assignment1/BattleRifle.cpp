#include "BattleRifle.h"

#include <iostream>

BattleRifle::BattleRifle() : PrimaryWeapon(12)
{
}


BattleRifle::~BattleRifle()
{
}

void BattleRifle::Shoot() {
	if (clipCount > 0) {
		clipCount -= 3;
		std::cout << "Pow pow pow" << std::endl;
	}
	else {
		std::cout << "Clip is empty 0/" << ammoRemaining << std::endl;
	}
}
