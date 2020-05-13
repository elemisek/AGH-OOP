#pragma once
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "BadDimsException.h"

class Array2D
{
private:
	int* arr = nullptr;
	int mDim1;
	int mDim2;

public:
	Array2D(int, int);
	~Array2D();

	void print() const;
	void reshape(int, int);
	int* operator[](int) const;
	int& at(int, int);
	int at(int, int) const;
	Array2D& operator=(Array2D&);

	friend std::ostream& operator<<(std::ostream&, const Array2D&);
};

std::ostream& operator<<(std::ostream&, const Array2D&);
