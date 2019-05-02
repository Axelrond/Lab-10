#include <string>
#include "Sojourner.h"
player::player(std::string name, std::string area, int level = 1, int EXP = 0)
{
	setName(name);
	setArea(area);
	setLevel(level);
	setEXP(EXP);
	setMaxHealth();
	setHealth(playerMaxHealth);
	setDamage();
	setEXPReq();
}

void player::setName(std::string name)
{
	playerName = name;
}

void player::setArea(std::string area)
{
	playerArea = area;
}

void player::setLevel(int level)
{
	playerLevel = level;
}

void player::setHealth(double health)
{
	playerHealth = health;
}

void player::setMaxHealth()
{
	playerMaxHealth = (100 * getLevel());
}

void player::setDamage()
{
	playerDamage = (30 * getLevel());
}

std::string player::getName()
{
	return playerName;
}

std::string player::getArea()
{
	return playerArea;
}

int player::getLevel()
{
	return playerLevel;
}

double player::getHealth()
{
	return playerHealth;
}

double player::getMaxHealth()
{
	return playerMaxHealth;
}

int player::getDamage()
{
	return playerDamage;
}

int player::getEXP()
{
	return EXP;
}

void player::setEXP(int _EXP)
{
	EXP = _EXP;
}

int player::getEXPReq()
{
	return EXPReq;
}

void player::setEXPReq()
{
	EXPReq = 70 + ((getLevel()*getLevel()) * 35);
}