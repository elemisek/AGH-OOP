#include "LicznikPoziomow.h"
#include <iostream>

LicznikPoziomow::LicznikPoziomow()
{
    std::cout << "Rozpoczynamy poziom numer " << ++LicznikPoziomow::mLevel << "." << std::endl;
}

LicznikPoziomow::~LicznikPoziomow()
{
    std::cout << "Konczymy poziom numer " << LicznikPoziomow::mLevel-- << "." << std::endl;
}