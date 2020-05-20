#include <string>
#include <iostream>
#include "Calc_error.h"

int LicznikPoziomow::mLevel = 0;

Calc_error::Calc_error(std::runtime_error* nextError, std::string&& message, std::string&& file, int line) :
    std::runtime_error(message + ", [plik = " + file + ", linia = " + std::to_string(std::move(line))+ "]"),
    mNextError(nextError)
    {}

void Calc_error::handler()
{
    try
    {
        std::cout << " Zlapano wyjatek:" << std::endl;
        throw;
    }
    catch (std::runtime_error* err)
    {
        Calc_error* calcPtr = dynamic_cast<Calc_error*>(err);
        std::runtime_error* next = calcPtr->mNextError;
        
        while(calcPtr)
        {
            std::cout << " -- z powodu: " << calcPtr->what() << std::endl;
            next = calcPtr->mNextError;
            delete calcPtr;
            calcPtr = dynamic_cast<Calc_error*>(next);
        }
        
        std::cout << " -- z powodu: " << next->what() << std::endl;
        delete next;
        
    }
}