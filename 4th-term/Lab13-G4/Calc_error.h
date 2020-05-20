#pragma once

#include "LicznikPoziomow.h"
#include <stdexcept>

// klasa reprezentująca błąd w obliczeniach i trzymająca wskaźnik do następnego błędus
class Calc_error : public std::runtime_error
{
private:
    // wskaźnik typu runtime_error na następny błąd
    std::runtime_error* mNextError;
    
public:
    // konstruktor przyjmujący:
    // nextError - nastęony error w hierarchii
    // message - opis obecnego błędu
    // file - plik w którym wystąpił błąd
    // line - linia w ktorej wystepuje blad w pliku file
    Calc_error(std::runtime_error* nextError, std::string&& message, std::string&& file, int line);
    
    // funkcja zajmująca się obsługą wszystkich błędów i usuwaniem wskaźników na nie (zarządzanie pamięcią)
    static void handler();
    
    // zaprzyjaźniona klasa zliczająca poziomy
    friend class LicznikPoziomow;
};