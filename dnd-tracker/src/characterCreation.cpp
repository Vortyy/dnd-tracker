/*
 * File:	characterCreation.cpp
 * Created:	06/02/2020
 * Author:	Étienne Ménard
 */

#include "characterCreation.h"
#include "menu.h"

/*
 * Goes through the whole process to create a character
 */
Character characterCreation() {
	system("cls");
	Character character;
	std::string races[40];
	std::string classes[20];
	int nbRaces = 0, nbClasses = 0;

	askString("Enter your character's name: ", character.name); // Name

	enterLevel(character.level, character.modifier.proficiency); // Level 

	readFileToArray("races.txt", races, nbRaces); // Race
	character.race = races[pickFromArray(races, nbRaces) - 1];

	readFileToArray("classes.txt", classes, nbClasses); // Class
	character.classe = classes[pickFromArray(classes, nbClasses) - 1];

	editAbilityScores(character.ability);

	updateAbilityModifiers(character.ability, character.modifier);

	updateAC(character.ac, character);

	updateInitiative(character.initiative, character.modifier.dex);

	return character;
}

/*
 * Asks the user to enter its character's level and sets its proficiency bonus accordingly
 * param: int &level : Character's level
 * param: int &proficiency : Character's proficiency level
 */
void enterLevel(int& level, int& proficiency) {
	askIntWithBounds("Enter your character's level (1 - 20): ", level, 1, 20);

	if (level >= 1 && level <= 4) proficiency = 2;
	else if (level >= 5 && level <= 8) proficiency = 3;
	else if (level >= 9 && level <= 12) proficiency = 4;
	else if (level >= 13 && level <= 16) proficiency = 5;
	else if (level >= 17 && level <= 20) proficiency = 6;
}

/*
 * Load the ability scores with valid values
 * param: Ability ability : struct containing character's ability scores
 */
void editAbilityScores(Ability &ability) {
	system("cls");
	int temp;
	if (ability.str == 0) {
		askIntWithBounds("Enter your Strength score (1 - 20): ", temp, 1, 20);
		if (temp < 3) temp = 3;
		if (temp > 18) temp = 18;
		ability.str = temp;
	}

	if (ability.dex == 0) {
		askIntWithBounds("Enter your Dexterity score (1 - 20): ", temp, 1, 20);
		if (temp < 3) temp = 3;
		if (temp > 18) temp = 18;
		ability.dex = temp;
	}

	if (ability.con == 0) {
		askIntWithBounds("Enter your Constitution score (1 - 20): ", temp, 1, 20);
		if (temp < 3) temp = 3;
		if (temp > 18) temp = 18;
		ability.con = temp;
	}

	if (ability.intel == 0) {
		askIntWithBounds("Enter your Intelligence score (1 - 20): ", temp, 1, 20);
		if (temp < 3) temp = 3;
		if (temp > 18) temp = 18;
		ability.intel = temp;
	}

	if (ability.wis == 0) {
		askIntWithBounds("Enter your Wisdom score (1 - 20): ", temp, 1, 20);
		if (temp < 3) temp = 3;
		if (temp > 18) temp = 18;
		ability.wis = temp;
	}

	if (ability.cha == 0) {
		askIntWithBounds("Enter your Charisma score (1 - 20): ", temp, 1, 20);
		if (temp < 3) temp = 3;
		if (temp > 18) temp = 18;
		ability.cha = temp;
	}
}

/*
 * Updates all modifiers with correct values
 * param: Ability ability : struct containing ability scores
 * param: Modifier modifier : struct containing ability modifiers
 */
void updateAbilityModifiers(Ability ability, Modifier& modifier) {
	scoreToModifier(ability.str, modifier.str);
	scoreToModifier(ability.dex, modifier.dex);
	scoreToModifier(ability.con, modifier.con);
	scoreToModifier(ability.intel, modifier.intel);
	scoreToModifier(ability.wis, modifier.wis);
	scoreToModifier(ability.cha, modifier.cha);
}

/* 
 * Gives the appropriate modifier depending of the score
 * param: int score : value to compare
 * param: int &modifier : value returned
 */
void scoreToModifier(int score, int& modifier) {
	if (score == 1) modifier = -5;
	else if (score == 2 || score == 3) modifier = -4;
	else if (score == 4 || score == 5) modifier = -3;
	else if (score == 6 || score == 7) modifier = -2;
	else if (score == 8 || score == 9) modifier = -1;
	else if (score == 10 || score == 11) modifier = 0;
	else if (score == 12 || score == 13) modifier = 1;
	else if (score == 14 || score == 15) modifier = 2;
	else if (score == 16 || score == 17) modifier = 3;
	else if (score == 18 || score == 19) modifier = 4;
	else if (score == 20) modifier = 5;
}

/*
 * Updates character's AC using various parameters
 * param: int &ac : AC to update
 * param: Character character : struct containing all character's value and nested structs
 */
void updateAC(int &ac, Character character) {
	ac = 10 + character.modifier.dex; // no armor
	// https://merricb.com/2014/09/13/armour-class-in-dungeons-dragons-5e/
}

/*
 * Updates character's initiative
 * param: int &initiative : Initiative to update
 * param: int dexMod : Dexterity modifier
 */
void updateInitiative(int& initiative, int dexMod) {
	initiative = dexMod;
}

/*
 *  Reads all the available items from a file and adds them to an array.
 *  param: string arr[] : Array in which the available items are stored.
 *  param: int nb : Counter of how many items there are.
 */
void readFileToArray(std::string filePath, std::string arr[], int &nb) {
	std::ifstream file;
	std::string included;

	openFile(file, filePath);

	getline(file, arr[0]);
	ifEmpty(file);

	while (file) {
		file >> arr[nb] >> included;
		while (included == "false" && file) {
			file >> arr[nb] >> included;
		}
		nb++;
	}
	nb--;
	file.close();
}

/*
 *  Asks the user to pick an item from an array.
 *  param: string races[] : Array in which the available races are stored.
 */
int pickFromArray(std::string arr[], int nb) {
	int arrayChoice;

	arrayMenu(arr, nb);
	askIntWithBounds("Choose an option: ", arrayChoice, 1, nb);

	return arrayChoice;
}