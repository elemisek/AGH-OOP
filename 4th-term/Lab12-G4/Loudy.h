#pragma once

#include <exception>
#include <iostream>
#include "BerserkerException.h"

// klasa reprezentująca obiekt z głośnym konstruktorem i destruktorem
class Loudy
{
    
private:
    // nazwa obiektu Loudy (Laudy)
    std::string mName;
    
public:
    // głośny konstruktor
    Loudy();
    
    // konstruktor ustawiający nazwę
    Loudy(std::string name);
    
    // głośny destruktor
    ~Loudy();
    
    // funkcja rzucająca wyjątek
    void skip() const;
    
};

// klasa reprezentująca tablicę obiektów Loudy
class LoudyArray
{
    
private:
    // tablica wskaźników na wskaźniki
    Loudy ** mPtr = nullptr;
    
    // zmienna przechowująca wielkość tablicy
    size_t mSize;
    
public:
    // konstruktor
    LoudyArray(size_t size);
    
    // destruktor
    ~LoudyArray();
    
    // funkcja wpisująca element do tablicy, jeśli element jest nadpisywany to go usuwa, jeśli niepoprawny indeks to usuwa i rzuca wyjątek
    void set(size_t ind, Loudy * elem);
    
};