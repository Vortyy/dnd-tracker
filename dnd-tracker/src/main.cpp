/*
 * File:	main.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include "cleanIO.h"
#include "characterCreation.h"
#include "menu.h"

int main() {
	Character characters[3];
	
	int saveSlot;
	do {
		mainMenu(characters);
		std::cout << std::endl;
		askIntWithBounds("Select a option: ", saveSlot, 1, 4);
		if (saveSlot != 4) characters[saveSlot - 1] = characterCreation();
		system("cls");
	} while (saveSlot != 4);

	return 0;
}

Character characterCreation() {
	system("cls");
	Character character;
	askString("Enter your character's name: ", character.name);
	askIntWithBounds("Enter your character's level: ", character.level, 1, 20);

	return character;
}
