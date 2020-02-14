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
	int str = 0;
	int dex = 0;
	int con = 0;
	int intel = 0;
	int wis = 0;
	int cha = 0;
};

struct Modifier {
	int proficiency = 0;
	int str = 0;
	int dex = 0;
	int con = 0;
	int intel = 0;
	int wis = 0;
	int cha = 0;
};

struct Character {
	std::string name = "";
	std::string race = "";
	std::string classe = "";
	int level = 0;
	Ability ability;
	Modifier modifier;
};

Character characterCreation();
void enterLevel(int& level, int& proficiency);
void editAbilityScores(Ability &ability);
void readFileToArray(std::string filePath, std::string arr[], int& nb);
int pickFromArray(std::string arr[], int nb);

#endif // !CHARACTERCREATION_H_
