#include "Expense.h"

void Expense::print() const
{
	std::cout << mDay;
	std::for_each(mExp.begin(), mExp.end(), [](double n) { std::cout << std::setw(6) << n; });
	std::cout << std:: endl;
}

double Expense::mean() const
{
	return std::accumulate(mExp.begin(), mExp.end(), 0.)/mExp.size();
}

double Expense::get(unsigned ind) const
{
	return mExp[ind];
}
