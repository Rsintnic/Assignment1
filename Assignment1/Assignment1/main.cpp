// this is a test file
//lets test the conflicts

#include <iostream>

#include "Engine.h"
#include "AssaultRifle.h"
#include "BattleRifle.h"
#include "Pistol.h"
#include "Player.h"

int main() {
	PrimaryWeapon* AR = new AssaultRifle();
	PrimaryWeapon* BR = new BattleRifle();
	SecondaryWeapon* P = new Pistol();

	Player p1;

	p1.Equip(AR);
	for (int i = 0; i <= 27; i++) {
		p1.ShootPrimary();
	}
	p1.Equip(P);
	p1.ShootSecondary();

	p1.UnequipPrimary();
	p1.Equip(BR);
	p1.ShootPrimary();

	getchar();
	return 0;
}