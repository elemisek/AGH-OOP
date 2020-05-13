#pragma once
#include <iostream>
#include <string>

class Mean
{
protected:

    double sum = 0; // składowa przechowująca sumę elementów
    size_t counter = 0; // składowa przechowująca liczbę elementów
    std::string mname; // składowa przechowująca nazwę średniej
    
public:

    // domyślny destruktor wirtualny
    virtual ~Mean()=default;
    
    
    // operator aktualizujący sumę - dodający kolejną wartość ( odpowiednio dodaje wartość lub jej odwrotność )
    virtual Mean& operator<<(double) = 0;
    
    // funkcja obliczająca wartość średniej, korzystająca ze zmiennych sum i counter
    virtual double result() const = 0;
    
    // funkcja zwracająca nazwę średniej
    virtual std::string name() const;
    
    // funkcja zerująca przechowywaną sumę i licznik
    void reset();
    
    // zaprzyjaźniony operator wypisujący na ekran nazwę średniej przy użyciu funkcji name()
    friend std::ostream& operator<<(std::ostream&, const Mean&);

};

//operator wypisujący na ekran nazwę średniej przy użyciu funkcji name()
std::ostream& operator<<(std::ostream&, const Mean&);