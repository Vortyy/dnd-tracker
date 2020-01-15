#pragma once
/*
 * File:	cleanIO.h
 * Created:	07/10/2019
 * Author:	�tienne M�nard
 */

#include <iostream>
#include <string>

#ifndef CLEANIO_H_
#define CLEANIO_H_

 /*
  *  Vides le buffer de cin.
  */
void cinClear();

/*
 *  V�rifies si le int entr� en param�tre est un int.
 *  param: int &positiveIntVar : Int � v�rifier
 */
void cinIntCheck(int &intVar);

/*
 *  V�rifies si le int entr� en param�tre est positif.
 *  param: int &intVar : Int � v�rifier
 */
void cinPositiveIntCheck(int &intVar);

/*
 *  V�rifies si le int entr� en param�tre est positif.
 *  param: int &intVar : Int � v�rifier
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
 */
void cinIntWithBoundsCheck(int &intVar, int min, int max);

/*
 *  Demandes un int � l'utilisateur.
 *  param: string message : La question � poser � l'utilisateur.
 *  param: int &intVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askInt(std::string message, int &intVar);

/*
 *  Demandes un int positif � l'utilisateur.
 *  param: string message : La question � poser � l'utilisateur.
 *  param: int &intVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askPositiveInt(std::string message, int &intVar);

/*
 *  Demandes un int entre les bornes d�finies � l'utilisateur.
 *  param: string message : La question � poser � l'utilisateur.
 *  param: int &intVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
 */
void askIntWithBounds(std::string message, int &intVar, int min, int max);

/*
 *  V�rifies si le int entr� en param�tre est un int.
 *  param: double &positiveIntVar : Double � v�rifier
 */
void cinDoubleCheck(int &doubleVar);

/*
 *  V�rifies si le double entr� en param�tre est positif.
 *  param: double &intVar : Double � v�rifier
 */
void cinPositiveDoubleCheck(int &doubleVar);

/*
 *  V�rifies si le double entr� en param�tre est positif.
 *  param: double &doubleVar : Double � v�rifier
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
 */
void cinDoubleWithBoundsCheck(int &doubleVar, int min, int max);

/*
 *  Demandes un double � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: double &doubleVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askDouble(std::string message, double &doubleVar);

/*
 *  Demandes un double positif � l'utilisateur.
 *  param: string message : La question � poser � l'utilisateur.
 *  param: double &doubleVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askPositiveDouble(std::string message, int &intVar);

/*
 *  Demandes un double entre les bornes d�finies � l'utilisateur.
 *  param: string message : La question � poser � l'utilisateur.
 *  param: double &doubleVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 *  param: int min : Valeur minimale � rentrer.
 *  param: int max : Valeur maximale � rentrer.
 */
void askDoubleWithBounds(std::string message, int &doubleVar, int min, int max);

/*
 *  Demandes un string � l'utilisateur.
 *  param: string question : La question � poser � l'utilisateur.
 *  param: string &stringVar : Le param�tre dans lequel la r�ponse de l'utilisateur sera enregistr�e.
 */
void askString(std::string message, std::string &stringVar);

#endif /* CLEANIO_H_ */
