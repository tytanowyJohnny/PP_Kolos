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

	// przelodowanie =
	DynamicArray myArray_3 = 5;

	// dodawanie elemntu
	myArray.addElement(60);

	// wyswietlenie dodanego elementu
	cout << "Dodany element do myArray: " << myArray[20] << endl;

	// przeladowanie opratora
	cout << "Przeladowanie myArray: " << myArray << endl;
	cout << "Przeladowanie myArray_1: " << myArray_1 << endl;
	cout << "Przeladowanie myArray_3: " << myArray_3 << endl;

	//rozmiar tablic
	cout << "myArray size: " << myArray.getArraySize() << endl;
	cout << "myArray_1 size: " << myArray_1->getArraySize() << endl;
	cout << "myArray_3 size: " << myArray_3.getArraySize() << endl;

	// liczba elementow tablic
	cout << "myArray elements: " << myArray.getArrayElements() << endl;
	cout << "myArray_1 elements: " << myArray_1->getArrayElements() << endl;
	cout << "myArray_3 elements: " << myArray_3.getArrayElements() << endl;

	// destruktor check
	while(true) {

		DynamicArray * destruct_test = new DynamicArray(10);
		delete destruct_test;
	}

	return 0;
}
