#pragma once
#include <iostream>

class BitChanger 
{
public:

	BitChanger(unsigned char& ptr, unsigned int currentbit): ptr(ptr), currentbit(currentbit) {}

	BitChanger& operator=(bool value);
	operator bool() const;
	
private:

	unsigned char& ptr;
	unsigned int currentbit;
};