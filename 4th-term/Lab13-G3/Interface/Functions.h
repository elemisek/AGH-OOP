#pragma once
#include <string>
#include <iostream>

class Function
{
public:
	virtual double calc(double) const = 0;
	virtual std::string name() const = 0;
};

class Log10 : public Function
{
public:
	double calc(double) const override;
	std::string name() const override { return "log10"; }
};

class Asin : public Function
{
public:
	double calc(double) const override;
	std::string name() const override { return "asin"; }
};

class Legendre : public Function
{
public:
	Legendre(int n) : _n(n) {}
	double calc(double) const override;
	std::string name() const override { return "Legendre polynomial"; }

private:
	int _n;
};

