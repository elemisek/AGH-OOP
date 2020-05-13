#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <algorithm>
#include <iostream>
#include <iomanip>

class Data
{
private:
	std::string mDay;
	std::vector <double> mExp;

public:
	Data(const std::string& day, std::vector <double> exp) : mDay(day), mExp(exp) {}
	~Data() = default;

	void print() const;
};

