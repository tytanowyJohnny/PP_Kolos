/*
 * DynamicArray.h
 *
 *  Created on: 7 cze 2018
 *      Author: Bartosz
 */

#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <iostream>

namespace std {

class DynamicArray {
public:
	DynamicArray(int arraySize, int arrayValue);
	DynamicArray(int arraySize);
	virtual ~DynamicArray();
	int getArraySize() const;
	void setArraySize(int arraySize);
	int* getDynamicArray() const;
	void addElement(int arrayElement);
	int getArrayElements() const;
	friend ostream& operator<<(ostream&, DynamicArray const&);

private:
	int arraySize;
	int * dynamicArray;
	int arrayElements;
};

} /* namespace std */

#endif /* DYNAMICARRAY_H_ */
