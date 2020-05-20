#include "Number.h"
#include <iostream>

int Number::mX1 = 0;
int Number::mX2 = 0;

void Number::setRange(int x1, int x2)
{
	if (x1 < x2)
	{
		mX1 = x1;
		mX2 = x2;
	}
	else
	{
		mX1 = x2;
		mX2 = x1;
	}
}

Number::Number(double value)
{
	if (value >= mX1 && value <= mX2)
		mValue = value;
	else
		throw std::out_of_range("Out of range during construction");
}

Number& Number::value()
{
	return *this;
}

double Number::value() const
{
	return mValue;
}

void Number::operator=(double value)
{
	if (value >= mX1 && value <= mX2)
		mValue = value;
	else
		throw  std::out_of_range("Out of range during assigment");
}

void Number::print() const
{
	std::cout << "Number: " << mValue << " is in the range [" << mX1 << ", " << mX2 << "]" << std::endl;
}

