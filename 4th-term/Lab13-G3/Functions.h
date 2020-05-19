#pragma once
#include <string>

class Log10
{
public:
	double calc(double) const;
	std::string name() const { return "log10"; }
};

class Asin
{
public:
	double calc(double) const;
	std::string name() const { return "asin"; }
};

class Legendre
{
public:
	Legendre(int n) : _n(n) {}
	double calc(double) const;
	std::string name() const { return "Legendre polynomial"; }

private:
	int _n;
};

