#pragma once
#include "shape.h"
class Circle : public Shape
{
public:
	Circle();
	Circle(double);
	~Circle() {};

	virtual void print() const;
	virtual double area() const;

protected:
	double r;


};