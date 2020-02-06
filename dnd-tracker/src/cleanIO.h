#pragma once
/*
 * File:	cleanIO.h
 * Created:	07/10/2019
 * Author:	Étienne Ménard
 */

#include <iostream>
#include <fstream>
#include <string>

#ifndef CLEANIO_H_
#define CLEANIO_H_

void cinClear();

void cinIntCheck(int &input);
void cinIntWithBoundsCheck(int &input, int min, int max);

void askInt(std::string message, int &input);
void askIntWithBounds(std::string message, int &input, int min, int max);

void askString(std::string message, std::string &input);

void openFile(std::ifstream& file, std::string fileName);
void ifEmpty(std::ifstream& file);

#endif /* CLEANIO_H_ */
