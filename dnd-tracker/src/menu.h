#pragma once
/*
 * File:	menu.h
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <string>

#ifndef MENU_H_
#define MENU_H_

/*
 * Displays the main menu.
 */
void mainMenu();

/*
 * Displays the character creation menu.
 */
void creationMenu(std::string name, int level, std::string race, std::string classe, int statsTable[6], std::string statsName[6], std::string modifiersTable[6], int raceBonus[6]);

/*
 * Displays the race menu 
 * param: string racesTable[16] ~ array with all the available classes.
 */
void raceMenu(std::string racesTable[16]);

/*
 * Displays the class menu
 * param: string classesTable[12] ~ array with all the availables classes.
 */
void classMenu(std::string classesTable[12]);

/*
 * Displays the stats' menu.
 */
void statsMenu(int statsTable[6], std::string statsName[6], std::string modifiersTable[6]);

#endif // MENU_H_
