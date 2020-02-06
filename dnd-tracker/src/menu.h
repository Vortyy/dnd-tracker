#pragma once
/*
 * File:	menu.h
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <string>
#include "characterCreation.h"

#ifndef MENU_H_
#define MENU_H_

void mainMenu(Character characters[]);
void raceMenu(std::string races[], int nbRaces);

#endif // MENU_H_
