#pragma once

#include <exception>

class LoudyArray;

// klasa reprezentująca wyjątek zarządzający pamięcią tablicy - odwijanie stosu
class BerserkerException : std::exception
{
    
private:
    // wskaźnik na tablicę
    LoudyArray* _free_ptr;
    
public:
    // konstruktor przyjmujący wskaźnik na tablicę
    BerserkerException(LoudyArray* ptr);
    
    // destruktor usuwający tablicę
    ~BerserkerException();

};