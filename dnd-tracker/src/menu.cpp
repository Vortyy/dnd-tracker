/*
 * File:	menu.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include "menu.h"
#include "characterCreation.h"

 /*
  * Displays the main menu.
  */
void mainMenu() {
	std::cout << "DnD Character Tracker, by Etienne \"Vorty\" Menard:" << std::endl
		<< "\t1. Create a character" << std::endl
		<< "\t2. Load a character" << std::endl
		<< "\t3. Exit program" << std::endl;
}

/*
 * Displays the character creation menu.
 */
void creationMenu(std::string name, int level, std::string race, std::string classe, int statsTable[6], std::string statsName[6], std::string modifiersTable[6], int raceBonus[6]) {
	std::cout << "Your character:" << std::endl;

	if (name == "") std::cout << "\t1. Enter your character's name" << std::endl;
	else std::cout << "\tName: " << name << std::endl;

	if (level == -1) std::cout << "\t2. Set your level" << std::endl;
	else std::cout << "\tLevel: " << level << std::endl;

	if (race == "") std::cout << "\t3. Select a race" << std::endl;
	else std::cout << "\tRace: " << race << std::endl;

	if (classe == "") std::cout << "\t4. Select a class" << std::endl;
	else std::cout << "\tClass: " << classe << std::endl;

	if (statsTable[0] == 0) std::cout << "\t5. Set your ability scores" << std::endl;
	else {
		for (int i = 0; i < 6; i++) {
			if (race != "") {
				int temp = statsTable[i] + raceBonus[i];
				modifiersTable[i] = setModifiers(temp);
				std::cout << "\t" << statsName[i] << ": " << temp << " (" << modifiersTable[i] << ")" << std::endl;
			}
			else {
				int temp = statsTable[i];
				modifiersTable[i] = setModifiers(temp);
				std::cout << "\t" << statsName[i] << ": " << statsTable[i] << " (" << modifiersTable[i] << ")" << std::endl;
			}
			
		}
	}

	std::cout << "\t8. View your character's sheet." << std::endl
		<< "\t9. \"Save\"" << std::endl;
}

/*
 * Displays the race menu
 * param: string racesTable[16] ~ array with all the available classes.
 */
void raceMenu(std::string racesTable[16]) {
	std::cout << "Race list:" << std::endl;
	for (int i = 1; i < 17; i++) {
		std::cout << "\t" << i << ". " << racesTable[i - 1] << std::endl;
	}
}

/*
 * Displays the class menu
 * param: string classesTable[12] ~ array with all the availables classes.
 */
void classMenu(std::string classesTable[12]) {
	std::cout << "Class list:" << std::endl;
	for (int i = 1; i < 13; i++) {
		std::cout << "\t" << i << ". " << classesTable[i - 1] << std::endl;
	}
}

/*
 * Displays the stats' menu.
 */
void statsMenu(int statsTable[6], std::string statsName[6], std::string modifiersTable[6]) {
	std::cout << "Your character's ability scores:" << std::endl;

	for (int i = 1; i < 7; i++) {
		if (statsTable[i - 1] == 0) std::cout << "\t" << i << ". Set your " << statsName[i - 1] << " score" << std::endl;
		else std::cout << "\t" << statsName[i - 1] << ": " << statsTable[i - 1] << std::endl;
	}

	std::cout << "\t7. Back" << std::endl;
}