#pragma once
class Weapon
{
public:
	Weapon();
	~Weapon();
	virtual void Shoot() {};
	virtual void Reload() {};
};

