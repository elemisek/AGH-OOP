#pragma once
#include "Attributes.h"
#include "MyPrintable.h"

// klasa reprezentujaca linie
class MyLine : public AttColor, public MyPrintable
{
    
public:
    // konstruktor ustawiajacy atrybut, dlugosc i znak
    MyLine(char c, unsigned int l, AttColor::Attribute att) : AttColor(att), m_char(c), m_length(l) {}
    
    // funkcja ustawiajaca ilosc znakow w ciagu
    void setLength(unsigned int l) { m_length = l; }
    
    // funkcja ustawiajaca znak
    void setChar(char c) { m_char = c; }
    
    // funkcja zwracajaca ciag okreslonych znakow okreslonej dlugosci
    std::string rawString() const override { return std::string(m_length, m_char); }
    
    // funkcja zwracajaca ilosc znakow
    unsigned int getLength() const override { return m_length; }
    
private:
    // zmienna przechowujaca znak
    char m_char;
    
    // zmienna przechowujaca ilosc znakow
    unsigned int m_length;
    
};
