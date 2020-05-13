#include "Table.h"

void Table::operator+=(const Expense& exp)
{
	mDays.push_back(exp);
}

void Table::print() const
{
	std::for_each(mDays.begin(), mDays.end(), [](const Expense& exp) { return exp.print(); });
}

Table & Table::sort(unsigned col)
{
	if (col < mDays.size())
		std::sort(mDays.begin(), mDays.end(), [col](const Expense& exp1, const Expense& exp2) { return exp1.get(col) < exp2.get(col); });
	else
		std::cout << "Indeks 3 nieprawidlowy!" << std::endl;

	return *this;
}

Table & Table::sortByMean()
{
	std::sort(mDays.begin(), mDays.end(), [](const Expense& exp1, const Expense& exp2) { return exp1.mean() < exp2.mean(); });
		
	return *this;
}



