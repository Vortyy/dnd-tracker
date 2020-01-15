/*
 * File:	cleanIO.cpp
 * Created:	07/10/2019
 * Author:	Étienne Ménard
 */

#include "cleanIO.h"

 /*
  *  Vides le buffer de cin.
  */
void cinClear() {
	std::cin.clear();
	std::cin.ignore();
}

/*
 *  Vérifies si le int entré en paramètre est un int.
 *  param: int &positiveIntVar : Int à vérifier
 */
void cinIntCheck(int &intVar) {
	while (std::cin.fail()) { //loop tant que le cin est corrompu
		std::cout << "Please enter a numerical value: ";
		cinClear();
		std::cin >> intVar;
	}
}

/*
 *  Vérifies si le int entré en paramètre est positif.
 *  param: int &intVar : Int à vérifier
 */
void cinPositiveIntCheck(int &intVar) {
	cinIntCheck(intVar);
	while (intVar < 0) {
		std::cout << "Please enter a positive numerical value: ";
		cinClear();
		std::cin >> intVar;
	}
}

/*
 *  Vérifies si le int entré en paramètre est positif.
 *  param: int &intVar : Int à vérifier
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void cinIntWithBoundsCheck(int &intVar, int min, int max) {
	cinIntCheck(intVar);
	while (intVar < min || intVar > max) {
		std::cout << "Please enter a numerical value between " << min << " and " << max << ": ";
		cinClear();
		std::cin >> intVar;
	}
}

/*
 *  Vérifies si le int entré en paramètre est un int.
 *  param: int &intVar : Int à vérifier
 */
void askInt(std::string message, int &intVar) {
	std::cout << message;
	std::cin >> intVar;
	cinIntCheck(intVar);
	cinClear();
}

/*
 *  Demandes un int positif à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: int &intVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askPositiveInt(std::string message, int &intVar) {
	std::cout << message;
	std::cin >> intVar;
	cinPositiveIntCheck(intVar);
	cinClear();
}

/*
 *  Demandes un int entre les bornes définies à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: int &intVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void askIntWithBounds(std::string message, int &intVar, int min, int max) {
	std::cout << message;
	std::cin >> intVar;
	cinIntWithBoundsCheck(intVar, min, max);
	cinClear();
}

/*
 *  Vérifies si le int entré en paramètre est un int.
 *  param: double &positiveIntVar : Double à vérifier
 */
void cinDoubleCheck(int &doubleVar) {
	while (std::cin.fail()) { //loop tant que le cin est corrompu
		std::cout << "Please enter a numerical value: ";
		cinClear();
		std::cin >> doubleVar;
	}
}

/*
 *  Vérifies si le double entré en paramètre est positif.
 *  param: double &doubleVar : Double à vérifier
 */
void cinPositiveDoubleCheck(int &doubleVar) {
	cinDoubleCheck(doubleVar);
	while (doubleVar < 0) {
		std::cout << "Please enter a positive numerical value: ";
		cinClear();
		std::cin >> doubleVar;
	}
}

/*
 *  Vérifies si le double entré en paramètre est positif.
 *  param: double &doubleVar : Double à vérifier
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void cinDoubleWithBoundsCheck(int &doubleVar, int min, int max) {
	cinIntCheck(doubleVar);
	while (doubleVar < min || doubleVar > max) {
		std::cout << "Please enter a numerical value between " << min << " and " << max << ": ";
		cinClear();
		std::cin >> doubleVar;
	}
}

/*
 *  Demandes un double à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: double &doubleVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askDouble(std::string message, double &doubleVar) {
	std::cout << message;
	std::cin >> doubleVar;
}

/*
 *  Demandes un int positif à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: double &double : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askPositiveDouble(std::string message, int &doubleVar) {
	std::cout << message;
	std::cin >> doubleVar;
	cinPositiveDoubleCheck(doubleVar);
	cinClear();
}

/*
 *  Demandes un double entre les bornes définies à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: double &double : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void askDoubleWithBounds(std::string message, int &doubleVar, int min, int max) {
	std::cout << message;
	std::cin >> doubleVar;
	cinDoubleWithBoundsCheck(doubleVar, min, max);
	cinClear();
}

/*
 *  Demandes un string à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: string &stringVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askString(std::string message, std::string &stringVar) {
	std::cout << message;
	std::cin >> stringVar;
}