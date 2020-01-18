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
void creationMenu(std::string name, int level, std::string race, std::string classe);

/*
 * Displays the race menu 
 */
void raceMenu();

/*
 * Displays the class menu
 */
void classMenu();

#endif // MENU_H_
