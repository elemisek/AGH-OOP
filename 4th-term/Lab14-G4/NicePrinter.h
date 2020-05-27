#pragma once
#include <iostream>
#include <iomanip>

// klasa obsługująca wypisywanie, separator oraz licznik wypisywanej wartości
class NicePrinter
{
private:
    // licznik wypisywanej wartości
    static int mCounter;
    
    // liczba znaków do setw()
    int mDigits;
    
public:

    // wypisanie napisu oraz liczby znaków prefiksu
    NicePrinter(int digits) : mDigits(digits)
    {
        std::cout<<"NicePrinter: Set " << digits << "-digits prefix"<<std::endl;
    }
    
    // wypisanie separatora
    void separator(int value) const
    {
        std::cout << "=====-===== "<< value <<" =====-=====" << std::endl;
    }
    
    // wypisanie opisu o typach wypisywanych wartości
    void header(std::string&& str) const
    {
        std::cout << "* " << str <<  " *" << std::endl;
    }
    
    // wypisanie wartości i licznika na określonej szerokości
    template<class T>
    void operator()(T obj) const
    {
        std::cout << std::setw(mDigits) << mCounter++ << ": "<< obj << std::endl;
    }
    
};

// ustawienie początkowej wartości licznika
int NicePrinter::mCounter = 1;