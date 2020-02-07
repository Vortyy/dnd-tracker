#pragma once
/*
 * File:	characterCreation.h
 * Created:	06/02/2020
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <fstream>
#include <string>
#include "cleanIO.h"

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
	int level = 0;
	Ability ability;
};

Character characterCreation();
void readFile(std::string filePath, std::string arr[], int& nb);
int pickFromArray(std::string arr[], int nb);

#endif // !CHARACTERCREATION_H_
