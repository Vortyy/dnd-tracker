/*
 * File:	characterCreation.cpp
 * Created:	06/02/2020
 * Author:	Étienne Ménard
 */

#include "characterCreation.h"
#include "menu.h"

/*
 * Load the ability scores with valid values
 * param: Ability ability : struct containing character's ability scores
 */
void editAbilityScores(Ability &ability) {
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
	else if (level >= 14 && level <= 20) proficiency = 6;
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