#pragma once
/*
 * File:	characterCreation.h
 * Created:	06/02/2020
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <string>

#ifndef CHARACTERCREATION_H_
#define CHARACTERCREATION_H_

struct Ability {
	int str;
	int dex;
	int con;
	int intel;
	int wis;
	int cha;
};

struct Character {
	std::string name = "";
	std::string race = "";
	std::string classe = "";
	int level = -1;
	Ability ability;
};

Character characterCreation();

#endif // !CHARACTERCREATION_H_
