#pragma once
#include "Mean.h"

class HarmonicMean : public Mean
{
public:

    // konstruktor przypisujący nazwę średniej do składowej mname
    HarmonicMean() { mname = "Harmonic"; }
    
    
    // operator aktualizujący sumę - dodający odwrotność kolejnej wartości
    HarmonicMean& operator<<(double);
    
    // funkcja obliczająca wartość średniej
    double result() const override;
    
    // funkcja tworząca obiekt typu HarmonicMean i zwracająca wskaźnik na niego
    static HarmonicMean * create();
    
};

// operator informujący o błędzie - próba dodania elementu do obiektu const
const HarmonicMean& operator<<(const HarmonicMean&, double);