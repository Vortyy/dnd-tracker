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
	int creationMenuChoice = 0, level = -1, proficiency = 0;
	std::string name = "", race = "", classe = "";
	std::string statsName[6] = { "STR", "DEX", "CON", "INT", "WIS", "CHA" };
	int statsTable[6] = { 0, 0, 0, 0, 0, 0 };
	int raceBonus[6] = { 0, 0, 0, 0, 0, 0 };
	std::string modifiersTable[6];

	do {
		system("CLS");
		creationMenu(name, level, race, classe, statsTable, statsName, modifiersTable, raceBonus);
		askIntWithBounds("Choose an option: ", creationMenuChoice, 1, 9);

		switch (creationMenuChoice) {
		case 1:
			askString("Enter your character's name: ", name);
			break;
		case 2:
			levelSelection(level, proficiency);
			break;
		case 3:
			chooseRace(race, raceBonus);
			break;

		case 4:
			chooseClass(classe);
			break;

		case 5:
			manualStats(statsTable, statsName, modifiersTable);
			break;

		case 8:
			viewCharacter(name, level, race, classe, proficiency, statsTable, modifiersTable);
			break;

		default:
			break;
		}
	} while (creationMenuChoice != 9);
}

/*
 * Display all of the character's data.
 */
void viewCharacter(std::string name, int level, std::string race, std::string classe, int proficiency, int statsTable[6], std::string modifiersTable[6]) {
	system("CLS");
	std::cout << name << ", level " << level << " " << race << " " << classe << std::endl
		<< "Proficiency bonus: +" << proficiency << std::endl;
	system("PAUSE");
}

/*
 * Enter the character's level and give it the according proficiency modifier
 */
void levelSelection(int &level, int &proficiency) {
	askIntWithBounds("Enter your character's level (1 - 20): ", level, 1, 20);

	switch (level) {
	case 1:
	case 2: 
	case 3:
	case 4:
		proficiency = 2;
		break;

	case 5:
	case 6:
	case 7:
	case 8: 
		proficiency = 3;
		break;

	case 9:
	case 10:
	case 11:
	case 12:
		proficiency = 4;
		break;

	case 13:
	case 14:
	case 15:
	case 16:
		proficiency = 5;
		break;

	case 17:
	case 18:
	case 19:
	case 20:
		proficiency = 6;
		break;

	default: 
		break;
	}
}

/*
 * Choose the race.
 * param: string race ~ variable in which the race is saved.
 */
void chooseRace(std::string &race, int raceBonus[6]) {
	int raceChoice;
	std::string races[16] = { "Aasimar", "Dragonborn", "Dwarf", "Elf", "Firbolg", "Gnome", "Goliath", "Half-Elf", "Half-Orc", "Halfling", "Human", "Kenku", "Lizardfolk", "Tabaxi", "Tiefling", "Triton" };
	bool confirmed = false;
	
	do {
		system("CLS");
		raceMenu(races);
		askIntWithBounds("Choose a race: ", raceChoice, 1, 16);

		race = races[raceChoice - 1];
		switch (raceChoice) {
		case 1: //aasimar
			raceBonus[4] = 1;
			raceBonus[5] = 2;
			break;

		case 2: //dragonborn
			break;

		case 3: //dwarf
			break;

		case 4: //elf
			break;

		case 5: //firbolg
			break;

		case 6: //gnome
			break;

		case 7: //goliath
			break;

		case 8: //half-elf
			break;

		case 9: //half-orc
			break;

		case 10: //halfling
			break;

		case 11: //human
			break;

		case 12: //kenku
			break;

		case 13: //lizardfolk
			break;

		case 14: //tabaxi
			break;

		case 15: //tiefling
			break;

		case 16: //triton
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
	std::string classes[12] = { "Barbarian", "Bard", "Cleric", "Druid", "Fighter", "Monk", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard" };
	bool confirmed;

	do {
		system("CLS");
		classMenu(classes);
		askIntWithBounds("Choose a class: ", classChoice, 1, 12);

		classe = classes[classChoice - 1];
		switch (classChoice) {
		case 1: // barbarian
			break;

		case 2: // bard
			break;

		case 3: // cleric
			break;

		case 4: // druid
			break;

		case 5: // fighter
			break;

		case 6: // monk
			break;

		case 7: // paladin
			break;

		case 8: // ranger 
			break;

		case 9: // rogue
			break;

		case 10: // sorcerer
			break;

		case 11: // warlock
			break;

		case 12: // wizard
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

void manualStats(int statsTable[6], std::string statsName[6], std::string modifiersTable[6]) {
	int statChoice, temp;
	do {
		system("CLS");
		statsMenu(statsTable, statsName, modifiersTable);
		askIntWithBounds("Choose an option: ", statChoice, 1, 7);

		switch (statChoice) {
		case 1:
			askIntWithBounds("Enter your rolled STR score (1 - 20) : ", temp, 1, 20);
			break;

		case 2:
			askIntWithBounds("Enter your rolled DEX score (1 - 20) : ", temp, 1, 20);
			break;

		case 3:
			askIntWithBounds("Enter your rolled CON score (1 - 20) : ", temp, 1, 20);
			break;

		case 4:
			askIntWithBounds("Enter your rolled INT score (1 - 20) : ", temp, 1, 20);
			break;

		case 5:
			askIntWithBounds("Enter your rolled WIS score (1 - 20) : ", temp, 1, 20);
			break;

		case 6:
			askIntWithBounds("Enter your rolled CHA score (1 - 20) : ", temp, 1, 20);
			break;

		default:
			break;
		}

		bumpScore(temp);
		statsTable[statChoice - 1] = temp;
	} while (statChoice != 7);
}

void bumpScore(int &score) {
	if (score < 3) score = 3;
	if (score > 18) score = 18;
}

std::string setModifiers(int temp) {
	std::string value;
	switch (temp) {
	case 3:
		value = "-4";
		break;
	case 4:
	case 5:
		value = "-3";
		break;
	case 6:
	case 7:
		value = "-2";
		break;
	case 8:
	case 9:
		value = "-1";
		break;
	case 10:
	case 11:
		value = "0";
		break;
	case 12:
	case 13:
		value = "+1";
		break;
	case 14:
	case 15:
		value = "+2";
		break;
	case 16:
	case 17:
		value = "+3";
		break;
	case 18:
	case 19:
		value = "+4";
		break;
	case 20:
		value = "+5";
		break;
	}

	return value;
}