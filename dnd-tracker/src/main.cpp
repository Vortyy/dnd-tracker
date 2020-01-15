/*
 * File:	main.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <string>
#include "cleanIO.h"
#include "menu.h"

int main() {
	int menuChoice;
	
	do {
		mainMenu();
		askIntWithBounds("Your choice: ", menuChoice, 1, 2);
		switch (menuChoice) {
		case 1:
			break;

		default:
			break;
		}
	} while (menuChoice != 2);

	return 0;
}