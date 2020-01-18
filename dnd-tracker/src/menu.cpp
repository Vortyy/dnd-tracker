/*
 * File:	menu.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include "menu.h"

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
void creationMenu(std::string name, int level, std::string race, std::string classe) {
	std::cout << "Your character:" << std::endl;
	if (name == "") {
		std::cout << "\t1. Enter your character's name" << std::endl;
	}
	else std::cout << "\tName: " << name << std::endl;

	if (level == -1) {
		std::cout << "\t2. Set your level" << std::endl;
	}
	else std::cout << "\tLevel: " << level << std::endl;

	if (race == "") {
		std::cout << "\t3. Select a race" << std::endl;
	}
	else std::cout << "\tRace: " << race << std::endl;

	if (classe == "") {
		std::cout << "\t4. Select a class" << std::endl;
	}
	else std::cout << "\tClass: " << classe << std::endl;


	std::cout << "\t6. \"Save\"" << std::endl;
}

/*
 * Displays the race menu
 */
void raceMenu() {
	std::cout << "Race list:" << std::endl
		<< "\t1. Aasimar" << std::endl
		<< "\t2. Dragonborn" << std::endl
		<< "\t3. Dwarf" << std::endl
		<< "\t4. Elf" << std::endl
		<< "\t5. Firbolg" << std::endl
		<< "\t6. Gnome" << std::endl
		<< "\t7. Goliath" << std::endl
		<< "\t8. Half-Elf" << std::endl
		<< "\t9. Half-Orc" << std::endl
		<< "\t10. Halfling" << std::endl
		<< "\t11. Human" << std::endl
		<< "\t12. Kenku" << std::endl
		<< "\t13. Lizardfolk" << std::endl
		<< "\t14. Tabaxi" << std::endl
		<< "\t15. Tiefling" << std::endl
		<< "\t16. Triton" << std::endl;
}

void classMenu() {
	std::cout << "Class list:" << std::endl
		<< "\t1. Barbarian" << std::endl
		<< "\t2. Bard" << std::endl
		<< "\t3. Cleric" << std::endl
		<< "\t4. Druid" << std::endl
		<< "\t5. Fighter" << std::endl
		<< "\t6. Monk" << std::endl
		<< "\t7. Paladin" << std::endl
		<< "\t8. Ranger" << std::endl
		<< "\t9. Rogue" << std::endl
		<< "\t10. Sorcerer" << std::endl
		<< "\t11. Warlock" << std::endl
		<< "\t12. Wizard" << std::endl;
}