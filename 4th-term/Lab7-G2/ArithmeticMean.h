#pragma once
#include "Mean.h"

class ArithmeticMean : public Mean
{
public:
    // konstruktor przypisujący nazwę średniej do składowej mname
    ArithmeticMean() { mname= "Arithmetic"; }
    
    
    // operator aktualizujący sumę - dodający kolejną wartość
    ArithmeticMean& operator<<(double);
    
    // funkcja obliczająca wartość średniej
    double result() const override;
};

// operator informujący o błędzie - próba dodania elementu do obiektu const
const ArithmeticMean& operator<<(const ArithmeticMean&, double);