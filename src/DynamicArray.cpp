/*
 * DynamicArray.cpp
 *
 *  Created on: 7 cze 2018
 *      Author: Bartosz
 */

#include "DynamicArray.h"

namespace std {

DynamicArray::DynamicArray(int arraySize, int arrayValue) {

	this->arraySize = arraySize;
	this->dynamicArray = new int[this->arraySize];

	for(int i = 0; i < this->arraySize; i++) {

		this->dynamicArray[i] = arrayValue;
	}

}

DynamicArray::DynamicArray(int arraySize) {

	this->arraySize = arraySize;
	this->dynamicArray = new int[this->arraySize];

	for(int i = 0; i < this->arraySize; i++) {

		this->dynamicArray[i] = 0;
	}

}

DynamicArray::~DynamicArray() {

	delete [] this->dynamicArray;
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

} /* namespace std */
