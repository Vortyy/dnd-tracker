/*
 * File:	main.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <string>
#include "cleanIO.h"
#include "menu.h"
#include "characterCreation.h"

int main() {
	int menuChoice;
	
	do {
		system("CLS");
		mainMenu();
		askIntWithBounds("Choose an option: ", menuChoice, 1, 3);
		switch (menuChoice) {
		case 1:
			createCharacter();
			break;

		case 2:
			std::cout << "Loading a character is not yet available." << std::endl;
			break;

		default:
			break;
		}
	} while (menuChoice != 3);

	return 0;
}