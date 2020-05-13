#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <numeric>

class Expense
{
private:
	std::string mDay;
	std::vector<double> mExp;
public:
	Expense(std::string& day, std::vector<double> exp) : mDay(day), mExp(exp) {}
	~Expense() = default;

	void print() const;
	double mean() const;
	double get(unsigned) const;
};

