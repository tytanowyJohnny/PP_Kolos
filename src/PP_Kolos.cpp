//============================================================================
// Name        : PP_Kolos.cpp
// Author      : Bartosz Kubacki
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "DynamicArray.h"

using namespace std;

int main() {


	cout << "------------------------------" << endl;
	cout << "ZADANIE 1 - TABLICA DYNAMICZNA" << endl;
	cout << "------------------------------" << endl;

	// konstruktor 2 parametrowy
	DynamicArray myArray = DynamicArray(20, 4);
	// konstruktor 1 parametrowy
	DynamicArray * myArray_1 = new DynamicArray(20);


	/*
	 * Wyswietlenie tablic
	 */
	cout << "myArray | myArray_1" << endl;

	for(int i = 0; i < myArray.getArraySize(); i++) {

		cout << myArray.getDynamicArray()[i] << " | " << myArray_1->getDynamicArray()[i] << endl;
	}

	return 0;
}
