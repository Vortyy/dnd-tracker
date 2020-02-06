/*
 * File:	cleanIO.cpp
 * Created:	07/10/2019
 * Author:	Étienne Ménard
 */

#include "cleanIO.h"

 /*
  *  Empties the buffer
  */
void cinClear() {
	std::cin.clear();
	std::cin.ignore();
}

/*
 *  Verifies the input is an integer.
 *  param: int &input : int to verify
 */
void cinIntCheck(int &input) {
	while (std::cin.fail()) { // Loops while input isn't an int
		std::cout << "Please enter a numerical value: ";
		cinClear();
		std::cin >> input;
	}
}

/*
 *  Verifies the input is within given bounds.
 *  param: int &input : int to verify
 *  param: int min : Max value
 *  param: int max : Min value
 */
void cinIntWithBoundsCheck(int &input, int min, int max) {
	cinIntCheck(input);
	while (input < min || input > max) {
		std::cout << "Please enter a numerical value between " << min << " and " << max << ": ";
        cinClear();
		std::cin >> input;
        cinIntCheck(input);
	}
}

/*
 *  Asks the user for an integer.
 *  param: string message : Output message
 *  param: int &input : Variable in which the input will be saved
 */
void askInt(std::string message, int &input) {
	std::cout << message;
	std::cin >> input;
	cinIntCheck(input);
	cinClear();
    std::cout << std::endl;
}

/*
 *  Asks the user for an integer between set bounds.
 *  param: string message : Output message
 *  param: int &input : Variable in which the input will be saved
 *  param: int min : Min value
 *  param: int max : Max value
 */
void askIntWithBounds(std::string message, int &input, int min, int max) {
	std::cout << message;
	std::cin >> input;
	cinIntWithBoundsCheck(input, min, max);
	cinClear();
	std::cout << std::endl;
}

/*
 *  Asks the user for a string.
 *  param: string message : Output message
 *  param: string &input : Variable in which the input will be saved
 */
void askString(std::string message, std::string &input) {
	std::cout << message;
	std::cin >> input;
    cinClear();
	std::cout << std::endl;
}

/*
 *  Tests if the file is opened.
 *  param: ifstream& file : Input file
 *  param: string fileName : File's path
 */
void openFile(std::ifstream& file, std::string fileName) {
	file.open(fileName);

	if (!file.is_open()) {
		std::cout << "File is missing" << std::endl;
		system("pause");
		exit(0);
	}
}

/*
 *  Tests if the file is empty, closes if true.
 *  param: ifstream& file : Input file
 */
void ifEmpty(std::ifstream& file) {
	if (file.fail()) {
		std::cout << "File is empty" << std::endl;
		file.close();
		system("pause");
		exit(0);
	}
}