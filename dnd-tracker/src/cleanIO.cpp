/*
 * File:	cleanIO.cpp
 * Created:	07/10/2019
 * Author:	�tienne M�nard
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
 *  V�rifies si le int entr� en param�tre est un int.
 *  param: int &positiveIntVar : Int � v�rifier
 */
void cinIntCheck(int &intVar) {
	while (std::cin.fail()) { //loop tant que le cin est corrompu
		std::cout << "Please enter a numerical value: ";
		cinClear();
		std::cin >> intVar;
	}
}

/*
 *  V�rifies si le int entr� en param�tre est positif.
 *  param: int &intVar : Int � v�rifier
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
 *  V�rifies si le int entr� en param�tre est positif.
 *  param: int &intVar : Int � v�rifier
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
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
 *  V�rifies si le int entr� en param�tre est un int.
 *  param: int &intVar : Int � v�rifier
 */
void askInt(std::string message, int &intVar) {
	std::cout << message;
	std::cin >> intVar;
	cinIntCheck(intVar);
	cinClear();
}

/*
 *  Demandes un int positif � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: int &intVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askPositiveInt(std::string message, int &intVar) {
	std::cout << message;
	std::cin >> intVar;
	cinPositiveIntCheck(intVar);
	cinClear();
}

/*
 *  Demandes un int entre les bornes d�finies � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: int &intVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
 */
void askIntWithBounds(std::string message, int &intVar, int min, int max) {
	std::cout << message;
	std::cin >> intVar;
	cinIntWithBoundsCheck(intVar, min, max);
	cinClear();
}

/*
 *  V�rifies si le int entr� en param�tre est un int.
 *  param: double &positiveIntVar : Double � v�rifier
 */
void cinDoubleCheck(int &doubleVar) {
	while (std::cin.fail()) { //loop tant que le cin est corrompu
		std::cout << "Please enter a numerical value: ";
		cinClear();
		std::cin >> doubleVar;
	}
}

/*
 *  V�rifies si le double entr� en param�tre est positif.
 *  param: double &doubleVar : Double � v�rifier
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
 *  V�rifies si le double entr� en param�tre est positif.
 *  param: double &doubleVar : Double � v�rifier
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
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
 *  Demandes un double � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: double &doubleVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askDouble(std::string message, double &doubleVar) {
	std::cout << message;
	std::cin >> doubleVar;
}

/*
 *  Demandes un int positif � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: double &double : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askPositiveDouble(std::string message, int &doubleVar) {
	std::cout << message;
	std::cin >> doubleVar;
	cinPositiveDoubleCheck(doubleVar);
	cinClear();
}

/*
 *  Demandes un double entre les bornes d�finies � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: double &double : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
 */
void askDoubleWithBounds(std::string message, int &doubleVar, int min, int max) {
	std::cout << message;
	std::cin >> doubleVar;
	cinDoubleWithBoundsCheck(doubleVar, min, max);
	cinClear();
}

/*
 *  Demandes un string � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: string &stringVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askString(std::string message, std::string &stringVar) {
	std::cout << message;
	std::cin >> stringVar;
}