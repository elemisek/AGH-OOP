#pragma once
#include <iostream>
#include <iomanip>
#include <string>

class NumerID
{

private:
	unsigned int mID;

public:
	NumerID(unsigned int ID) : mID(ID) {}

	unsigned int getID() const { return mID; }

	std::string numID() const
	{
		return '<' + std::to_string(getID()) + '>';
	}
	
};

std::ostream& operator<<(std::ostream& os, const NumerID& osoba)
{
	return os << '<' << std::setfill('0') << std::setw(6) << osoba.getID() << '>';
}