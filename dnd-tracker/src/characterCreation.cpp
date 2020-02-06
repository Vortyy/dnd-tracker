/*
 * File:	characterCreation.cpp
 * Created:	06/02/2020
 * Author:	Étienne Ménard
 */

#include "characterCreation.h"
#include "menu.h"

void readRaces(std::string races[], int& nbRaces) {
	std::ifstream racesFile;
	std::string included;

	openFile(racesFile, "races.txt");

	getline(racesFile, races[0]);
	ifEmpty(racesFile);

	racesFile >> races[nbRaces] >> included;
	while (!racesFile.eof()) {
		if (included == "true") {
			nbRaces++;
		}
		racesFile >> races[nbRaces] >> included;
	}
}

int pickRace(std::string races[], int nbRaces) {
	int raceChoice;

	raceMenu(races, nbRaces);
	askIntWithBounds("Pick a race: ", raceChoice, 1, nbRaces);

	return raceChoice;
}