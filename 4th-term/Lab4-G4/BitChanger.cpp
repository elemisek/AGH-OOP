#include "BitChanger.h"

BitChanger & BitChanger::operator=(bool value)
{
	if (value)
		ptr |= 1 << currentbit;
	else
		ptr &= ~(1 << currentbit);
	return *this;
}

BitChanger::operator bool() const
{
	return (bool)(ptr & (1 << currentbit));
}
