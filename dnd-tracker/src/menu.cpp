/*
 * File:	menu.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include "menu.h"

 /*
  * Displays the main menu.
  */
void mainMenu(Character characters[]) {
    std::cout << "DnD Character Tracker, by Etienne \"Vorty\" Menard" << std::endl << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << i + 1 << ". Slot : ";
		if (characters[i].name == "") {
			std::cout << "EMPTY";
		}
		else {
			std::cout << characters[i].name << ", Level " << characters[i].level << " " << characters[i].race;
		}
		std::cout << std::endl;
	}
	std::cout << "4. Exit program" << std::endl;
}

/*
  * Displays the race  menu.
  */
void raceMenu(std::string races[], int nbRaces) {
	std::cout << "List of available races" << std::endl << std::endl;
	for (int i = 0; i < nbRaces; i++) {
		std::cout << i + 1 << ". " << races[i] << std::endl;
	}
	std::cout << std::endl;
}