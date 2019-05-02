#pragma once
#include <string>

class classMob

{
public:
	classMob(std::string, int, std::string, int); // name,lvl,area,difficulty
	void setName(std::string);
	void setLevel(int);
	void setArea(std::string);
	void setDamage();
	void setHealth(double);
	void setMaxHealth();
	void setDifficulty(int);
	std::string getName();
	int getLevel();
	std::string getArea();
	int getDamage();
	double getHealth();
	double getMaxHealth();
	int getDifficulty();
	int getEXP();
	void setEXP();

private:
	std::string mobName;
	std::string mobArea;
	int mobLevel;
	int mobDamage;
	double mobHealth;
	double mobMaxHealth;
	int mobDifficulty;
	int EXP;
};