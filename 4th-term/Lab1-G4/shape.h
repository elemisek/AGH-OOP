#include <iostream>
#pragma once
class Shape
{
public:
	Shape() {};
	virtual ~Shape()=default;

	virtual void print() const = 0;
	virtual double area() const = 0;
	static void print(const Shape& temp)
	{
		temp.print();
	}
	void print(std::ostream& s) const
	{
		print();
	}

	


};