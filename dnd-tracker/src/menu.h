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
void arrayMenu(std::string arr[], int nb);

#endif // MENU_H_
