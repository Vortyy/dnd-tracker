/*
 * File:	characterCreation.cpp
 * Created:	06/02/2020
 * Author:	Étienne Ménard
 */

#include "characterCreation.h"
#include "menu.h"

/*
 *  Reads all the available items from a file and adds them to an array.
 *  param: string arr[] : Array in which the available items are stored.
 *  param: int nb : Counter of how many items there are.
 */
void readFile(std::string filePath, std::string arr[], int &nb) {
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
	askIntWithBounds("Pick a race: ", arrayChoice, 1, nb);

	return arrayChoice;
}