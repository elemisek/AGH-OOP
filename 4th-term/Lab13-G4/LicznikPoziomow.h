#pragma once

// klasa reprezentująca licznik poziomów
class LicznikPoziomow
{
private:
    // licznik poziomów
    static int mLevel;
public:
    // głośny konstruktor inkrementujący licznik poziomów
    LicznikPoziomow();
    
    // głośny destruktor dekrementujący licznik poziomów
    ~LicznikPoziomow();
};