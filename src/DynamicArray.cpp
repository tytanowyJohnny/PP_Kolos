/*
 * DynamicArray.cpp
 *
 *  Created on: 7 cze 2018
 *      Author: Bartosz
 */

#include <algorithm>

#include "DynamicArray.h"

namespace std {

DynamicArray::DynamicArray(int arraySize, int arrayValue) {

	this->arraySize = arraySize;
	this->dynamicArray = new int[this->arraySize];
	this->arrayElements = arraySize;

	for(int i = 0; i < this->arraySize; i++) {

		this->dynamicArray[i] = arrayValue;
	}

}

DynamicArray::DynamicArray(int arraySize) {

	this->arraySize = arraySize;
	this->dynamicArray = new int[this->arraySize];
	this->arrayElements = arraySize;

	for(int i = 0; i < this->arraySize; i++) {

		this->dynamicArray[i] = 0;
	}

}

DynamicArray::~DynamicArray() {

	delete [] this->dynamicArray;
}

void DynamicArray::addElement(int arrayElement) {

	if(this->arrayElements >= this->arraySize) { // out of bounds

		int tempArray[this->arraySize*2];

		copy(this->dynamicArray, this->dynamicArray+this->arraySize, tempArray);

		delete this->dynamicArray;

		this->dynamicArray = new int[this->arraySize*2];

		copy(tempArray, tempArray+(this->arraySize*2), this->dynamicArray);

		this->dynamicArray[this->arrayElements] = arrayElement;

		this->arraySize = this->arraySize * 2;
		this->arrayElements += 1;

	} else {

		this->dynamicArray[this->arrayElements] = arrayElement;

		this->arrayElements += 1;

	}

}

DynamicArray DynamicArray::operator=(int size) {

	return DynamicArray(size);
}

int DynamicArray::operator[] (int element) {

	if(element >= 0 && element < this->arraySize) {
		return this->dynamicArray[element];
	} else {

		cout << "Poza zakresem!" << endl;
		return 0;
	}
}

ostream& operator<< (ostream &out, DynamicArray const& array) {

	for(int i = 0; i < array.getArraySize(); i++) {

		out << array[i];

		if(i < array.getArraySize() - 1)
			cout << ", ";

	}

	return out;
}


int DynamicArray::getArraySize() const {
	return arraySize;
}

void DynamicArray::setArraySize(int arraySize) {
	this->arraySize = arraySize;
}

int* DynamicArray::getDynamicArray() const {
	return dynamicArray;
}

int DynamicArray::getArrayElements() const {
	return arrayElements;
}

} /* namespace std */
