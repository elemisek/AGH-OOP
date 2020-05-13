#pragma once
#include <vector>
#include <functional>
#include <iostream>
class FunctionVector
{
private:
	std::vector <std::function<double(double)>> wektor;
	std::vector <double> wyniki;
public:
	double calc(double);
	void insert(std::function<double(double)>);
	double operator [](const int a);
};

