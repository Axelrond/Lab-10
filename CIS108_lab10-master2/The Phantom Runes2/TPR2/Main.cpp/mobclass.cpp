#include <string>
#include "MobClass.h"
classMob::classMob(std::string name, int lvl, std::string area, int difficulty)
{
	setName(name);
	setLevel(lvl);
	setArea(area);
	setDifficulty(difficulty);
	setDamage();
	setMaxHealth();
	setHealth(mobMaxHealth);
	setEXP();
}

void classMob::setName(std::string name)
{
	mobName = name;
}

void classMob::setLevel(int level)
{
	mobLevel = level;
}

void classMob::setArea(std::string area)
{
	mobArea = area;
}

void classMob::setDifficulty(int difficulty)
{
	mobDifficulty = difficulty;
}

void classMob::setDamage()
{
	mobDamage = (3 * (getLevel()) + ((getDifficulty()*getLevel()) / 2));
}

void classMob::setHealth(double health)
{
	mobHealth = health;
}
void classMob::setMaxHealth()
{
	mobMaxHealth = (15 * (getDifficulty() + getLevel()));
}

std::string classMob::getName()
{
	return mobName;
}

int classMob::getLevel()
{
	return mobLevel;
}

std::string classMob::getArea()
{
	return mobArea;
}

int classMob::getDifficulty()
{
	return mobDifficulty;
}

int classMob::getDamage()
{
	return mobDamage;
}

double classMob::getHealth()
{
	return mobHealth;
}

double classMob::getMaxHealth()
{
	return mobMaxHealth;
}

int classMob::getEXP()
{
	return EXP;
}

void classMob::setEXP()
{
	EXP = (getLevel() * 35);
}