/*
 * File:	main.cpp
 * Created:	15/01/2020
 * Author:	�tienne M�nard
 */

#include <fstream>
#include "cleanIO.h"
#include "menu.h"

int main() {
	Character characterTable[3];
	
	int saveSlot;
	do {
		mainMenu(characterTable);
		std::cout << std::endl;
		askIntWithBounds("Select a option: ", saveSlot, 1, 4);
		if (saveSlot != 4) characterTable[saveSlot - 1] = characterCreation();
		system("cls");
	} while (saveSlot != 4);

	return 0;
}

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

	return character;
}