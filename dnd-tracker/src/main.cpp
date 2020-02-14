/*
 * File:	main.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include "header.h"

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