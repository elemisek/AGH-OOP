#include "Animals.h"
#include <iostream>


Sheep::~Sheep()
{
	print();
	std::cout << " wraca do zagrody\n";
}

void Sheep::print() const
{
	std::cout << "- Owca " << name() << " ";
	_isSheared ? std::cout << "ostrzyzona" : std::cout << "nieostrzyzona";
}

void Sheep::shear()
{
	_isSheared = true;
}

void Cow::print() const
{
	std::cout << "- Krowa " << name() << " ";
}

void Horse::print() const
{
	std::cout << "- Kon " << name() << " ";
}
