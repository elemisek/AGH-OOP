#pragma once
#include <cmath>
#include <vector>
class Linear
{
private:
	double a;
	double b;
public:
	Linear(double,double);
	double operator ()(const double &) const;
};
class Sqrt
{
public:
	double operator ()(const double &) const;
};
class Sin
{
private:
	double a;
	double b;
public:
	Sin(double, double);
	double operator ()(const double &) const;
};
