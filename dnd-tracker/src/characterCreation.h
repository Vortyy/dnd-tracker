#pragma once
/*
 * File:	characterCreation.h
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <string>
#include "cleanIO.h"
#include "menu.h"

#ifndef CHARACTERCREATION_H_
#define CHARACTERCREATION_H_

/*
 * Go through the steps to create a DnD character.
 */
void createCharacter();

/*
 * Display all of the character's data.
 */
void viewCharacter(std::string name, int level, std::string race, std::string classe, int proficiency, int statsTable[6], std::string modifiersTable[6]);

/*
 * Enter the character's level and give it the according proficiency modifier
 */
void levelSelection(int &level, int &proficiency);

/*
 * Choose the race.
 * param: string race ~ variable in which the race is saved.
 */
void chooseRace(std::string &race, int raceBonus[6]);

/*
 * Choose the class.
 * param: string classe ~ variable in which the class is saved.
 */
void chooseClass(std::string &classe);

/*
 * User confirms the class or race is correct.
 * param: string selection ~ name of the race or class.
 * param: int type ~ 0 = race, 1 = class.
 * param: bool confirmed ~ returns wether it was the correct selection or not to paretn function.
 */
void confirmation(std::string selection, int type, bool &confirmed);

void manualStats(int statsTable[6], std::string statsName[6], std::string modifiersTable[6]);

void bumpScore(int &score);

std::string setModifiers(int temp);

#endif // CHARACTERCREATION_H_