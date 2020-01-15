#pragma once
/*
 * File:	cleanIO.h
 * Created:	07/10/2019
 * Author:	Étienne Ménard
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
 *  Vérifies si le int entré en paramètre est un int.
 *  param: int &positiveIntVar : Int à vérifier
 */
void cinIntCheck(int &intVar);

/*
 *  Vérifies si le int entré en paramètre est positif.
 *  param: int &intVar : Int à vérifier
 */
void cinPositiveIntCheck(int &intVar);

/*
 *  Vérifies si le int entré en paramètre est positif.
 *  param: int &intVar : Int à vérifier
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void cinIntWithBoundsCheck(int &intVar, int min, int max);

/*
 *  Demandes un int à l'utilisateur.
 *  param: string message : La question à poser à l'utilisateur.
 *  param: int &intVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askInt(std::string message, int &intVar);

/*
 *  Demandes un int positif à l'utilisateur.
 *  param: string message : La question à poser à l'utilisateur.
 *  param: int &intVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askPositiveInt(std::string message, int &intVar);

/*
 *  Demandes un int entre les bornes définies à l'utilisateur.
 *  param: string message : La question à poser à l'utilisateur.
 *  param: int &intVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void askIntWithBounds(std::string message, int &intVar, int min, int max);

/*
 *  Vérifies si le int entré en paramètre est un int.
 *  param: double &positiveIntVar : Double à vérifier
 */
void cinDoubleCheck(int &doubleVar);

/*
 *  Vérifies si le double entré en paramètre est positif.
 *  param: double &intVar : Double à vérifier
 */
void cinPositiveDoubleCheck(int &doubleVar);

/*
 *  Vérifies si le double entré en paramètre est positif.
 *  param: double &doubleVar : Double à vérifier
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void cinDoubleWithBoundsCheck(int &doubleVar, int min, int max);

/*
 *  Demandes un double à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: double &doubleVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askDouble(std::string message, double &doubleVar);

/*
 *  Demandes un double positif à l'utilisateur.
 *  param: string message : La question à poser à l'utilisateur.
 *  param: double &doubleVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askPositiveDouble(std::string message, int &intVar);

/*
 *  Demandes un double entre les bornes définies à l'utilisateur.
 *  param: string message : La question à poser à l'utilisateur.
 *  param: double &doubleVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 *  param: int min : Valeur minimale à rentrer.
 *  param: int max : Valeur maximale à rentrer.
 */
void askDoubleWithBounds(std::string message, int &doubleVar, int min, int max);

/*
 *  Demandes un string à l'utilisateur.
 *  param: string question : La question à poser à l'utilisateur.
 *  param: string &stringVar : Le paramètre dans lequel la réponse de l'utilisateur sera enregistrée.
 */
void askString(std::string message, std::string &stringVar);

#endif /* CLEANIO_H_ */
