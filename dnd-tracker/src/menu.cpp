/*
 * File:	menu.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include "menu.h"

 /*
  *  Displays the main menu.
  */
void mainMenu(Character characters[]) {
    std::cout << "DnD Character Tracker, by Etienne \"Vorty\" Menard" << std::endl << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "\tSlot " << i + 1 << " : ";
		if (characters[i].name == "") {
			std::cout << "EMPTY";
		}
		else {
			std::cout << characters[i].name << ", Level " << characters[i].level << " " << characters[i].race << " " << characters[i].classe;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << "4. Exit program" << std::endl;
}

/*
 *  Displays the options in a menu.
 */
void arrayMenu(std::string arr[], int nb) {
	std::cout << "List of available options" << std::endl << std::endl;
	for (int i = 0; i < nb; i++) {
		std::cout << i + 1 << ". " << arr[i] << std::endl;
	}
	std::cout << std::endl;
}