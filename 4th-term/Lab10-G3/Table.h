#pragma once
#include "Expense.h"


class Table
{
private:
	std::vector<Expense> mDays;

public:
	Table() = default;
	~Table() = default;

	void operator+=(const Expense&);
	void print() const;
	Table& sort(unsigned);
	Table& sortByMean();
};

