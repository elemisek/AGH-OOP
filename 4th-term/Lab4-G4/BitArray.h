#pragma once
#include "BitChanger.h"

class BitArray 
{
public:
	
	BitArray(unsigned int length, bool ones = false);
	virtual ~BitArray() { delete[] bits; }

	void print() const;
	bool operator[](unsigned int position) const;
	
	BitChanger operator[](unsigned int position);
	BitArray* operator=(const BitArray& ba);
	
private:
	unsigned char* bits;
	unsigned int length;
};