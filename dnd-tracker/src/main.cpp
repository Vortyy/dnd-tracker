/*
 * File:	main.cpp
 * Created:	15/01/2020
 * Author:	Étienne Ménard
 */

#include <fstream>
#include "cleanIO.h"
#include "characterCreation.h"
#include "menu.h"

void openFile(std::ifstream& file, std::string fileName);
void ifEmpty(std::ifstream& file);
void readRaces(std::string races[], int &nbRaces);

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
	std::string races[37];
	int nbRaces = 0;

	askString("Enter your character's name: ", character.name);
	askIntWithBounds("Enter your character's level (1 - 20): ", character.level, 1, 20);

	readRaces(races, nbRaces);

	return character;
}

void readRaces(std::string races[], int &nbRaces) {
	std::ifstream racesFile;
	std::string included;
	
	openFile(racesFile, "races.txt");

	getline(racesFile, races[0]);
	ifEmpty(racesFile);
	
	racesFile >> races[nbRaces] >> included;
	while (!racesFile.eof()) {
		if (included == "true") {
			std::cout << nbRaces + 1 << ". " << races[nbRaces] << std::endl; // debug
			nbRaces++;
		}
		racesFile >> races[nbRaces] >> included;
	}
	system("pause");
}

void openFile(std::ifstream& file, std::string fileName) {
	file.open(fileName); //Notes en entrée

	if (!file.is_open()) //le fichier n'existe pas
	{
		std::cout << "File is missing" << std::endl;
		system("pause");
		exit(0);
	}
}

void ifEmpty(std::ifstream& file) {
	if (file.fail()) //si le fichier est vide
	{
		std::cout << "File is empty" << std::endl;
		file.close();
		system("pause");
		exit(0);
	}
}
