/*
 * DynamicArray.h
 *
 *  Created on: 7 cze 2018
 *      Author: Bartosz
 */

#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

namespace std {

class DynamicArray {
public:
	DynamicArray(int arraySize, int arrayValue);
	DynamicArray(int arraySize);
	virtual ~DynamicArray();
	int getArraySize() const;
	void setArraySize(int arraySize);
	int* getDynamicArray() const;

private:
	int arraySize;
	int * dynamicArray;
};

} /* namespace std */

#endif /* DYNAMICARRAY_H_ */
