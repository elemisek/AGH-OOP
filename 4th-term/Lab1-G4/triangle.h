#pragma once
#include "shape.h"
class Triangle : public Shape
{
	public:
		Triangle();
		Triangle(double, double, double);
		~Triangle() {};

		virtual void print() const;
		virtual double area() const;

	protected:
		double a;
		double b;
		double c;

};