/*
 * File:	characterCreation.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include "characterCreation.h"

 /*
  * Goes through the steps to create a DnD character.
  */
void createCharacter() {
	int creationMenuChoice, level = -1;
	std::string name = "", race = "", classe = "";
	int statTable[6];
	int modifiersTable[7];

	do {
		system("CLS");
		creationMenu(name, level, race, classe);
		askIntWithBounds("Choose an option: ", creationMenuChoice, 1, 6);

		switch (creationMenuChoice) {
		case 1:
			askString("Enter your character's name: ", name);
			break;
		case 2: 
			askIntWithBounds("Enter your character's level (1 - 20): ", level, 1, 20);
			std::cout << std::endl;
			break;
		case 3:
			chooseRace(race);
			break;

		case 4:
			chooseClass(classe);
			break;

		default:
			break;
		}
	} while (creationMenuChoice != 6);
}

/*
 * Choose the race.
 * param: string race ~ variable in which the race is saved.
 */
void chooseRace(std::string &race) {
	int raceChoice;
	bool confirmed = false;
	
	do {
		system("CLS");
		raceMenu();
		askIntWithBounds("Choose a race: ", raceChoice, 1, 16);

		switch (raceChoice) {
		case 1:
			race = "Aasimar";
			break;

		case 2:
			race = "Dragonborn";
			break;

		case 3:			
			race = "Dwarf";
			break;

		case 4:
			race = "Elf";
			break;

		case 5:
			race = "Firbolg";
			break;

		case 6:
			race = "Gnome";
			break;

		case 7:
			race = "Goliath";
			break;

		case 8:
			race = "Half-Elf";
			break;

		case 9:
			race = "Half-Orc";
			break;

		case 10:
			race = "Halfling";
			break;

		case 11:
			race = "Human";
			break;

		case 12:
			race = "Kenku";
			break;

		case 13:
			race = "Lizardfolk";
			break;

		case 14:
			race = "Tabaxi";
			break;

		case 15:
			race = "Tiefling";
			break;

		case 16:
			race = "Triton";
			break;


		default: break;
		}

		confirmation(race, 0, confirmed);
	} while (confirmed != true);
}

/*
 * Choose the class.
 * param: string classe ~ variable in which the class is saved.
 */
void chooseClass(std::string &classe) {
	int classChoice;
	bool confirmed = false;

	do {
		system("CLS");
		classMenu();
		askIntWithBounds("Choose a class: ", classChoice, 1, 16);

		switch (classChoice) {
		case 1:
			classe = "Barbarian";
			break;
		case 2:
			classe = "Bard";
			break;

		case 3:
			classe = "Cleric";
			break;

		case 4:
			classe = "Druid";
			break;

		case 5:
			classe = "Fighter";
			break;

		case 6:
			classe = "Monk";
			break;

		case 7:
			classe = "Paladin";
			break;

		case 8:
			classe = "Ranger";
			break;

		case 9:
			classe = "Rogue";
			break;

		case 10:
			classe = "Sorcerer";
			break;

		case 11:
			classe = "Warlock";
			break;

		case 12:
			classe = "Wizard";
			break;

		default: 
			break;
		}

		confirmation(classe, 1, confirmed);
	} while (confirmed != true);
}

/*
 * User confirms the class or race is correct.
 * param: string selection ~ name of the race or class.
 * param: int type ~ 0 = race, 1 = class.
 * param: bool confirmed ~ returns wether it was the correct selection or not to paretn function.
 */
void confirmation(std::string selection, int type, bool &confirmed) {
	std::string conf;
	std::string typeName;
	if (type == 0) typeName = "race";
	else if (type == 1) typeName = "class";

	std::cout << "You have selected the " << selection << " " << typeName << "." << std::endl;
	do {
		askString("Is this correct? (y/n) : ", conf);
		if (conf == "y" || conf == "Y") confirmed = true;
	} while (conf != "y" && conf != "Y" && conf != "n" && conf != "N");
}