#include "Math.h"
#include <cmath>


Sin::Sin() : parameter(1.)
{
	
}

Sin::Sin(double parameter) : parameter(parameter)
{

}

Function * Sin::clone() const
{
	return new Sin(*this);
}

void Sin::set_parameter(double parameter)
{
	this->parameter = parameter;
}

double Sin::calc(double argument) const
{
	return sin(parameter*argument);
}



Quadratic::Quadratic() : a(1), b(1), c(1)
{

}

Quadratic::Quadratic(double a, double b, double c) : a(a), b(b), c(c)
{

}

Function * Quadratic::clone() const
{
	Function * fun = new Quadratic(*this);
	return fun;
}

double Quadratic::calc(double argument) const
{
	return a * argument * argument + b * argument + c;
}

Derivative::Derivative(Function * fnc) : mfnc((fnc->clone())), dx(0.01)
{

}

Derivative::~Derivative()
{
	
	
}

Function * Derivative::clone() const
{
	return new Derivative(*this);
}

void Derivative::set_dx(double dx)
{
	this->dx = dx;
}

double Derivative::calc(double argument) const
{
	return (mfnc->calc(argument + dx) - mfnc->calc(argument - dx)) / (2 * dx);
}

