#include "Data.h"

void Data::print() const
{
	std::cout << mDay;
	std::for_each(mExp.begin(), mExp.end(), [](double n) { std::cout << std::setw(6) << n; });
	std::cout << std::endl;
}
