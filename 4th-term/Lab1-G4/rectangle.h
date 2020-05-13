#pragma once
#include "shape.h"
class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(double, double);
	~Rectangle() {};

	virtual void print() const;
	virtual double area() const;

protected:
	double a;
	double b;

};