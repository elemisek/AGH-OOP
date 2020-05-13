#include "functions.h"
Linear::Linear(double a,double b)
{
	this->a=a;
	this->b=b;
}
double Linear::operator ()(const double & x) const
{
	return a*x+b;
}
double Sqrt::operator ()(const double & x) const
{
	return sqrt(x);
}
Sin::Sin(double a, double b)
{
	this->a=a;
	this->b=b;
}
double Sin::operator ()(const double & x) const
{
	return sin(a*x+b);
}

