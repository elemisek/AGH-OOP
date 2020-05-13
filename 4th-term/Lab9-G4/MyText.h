#pragma once
#include "Attributes.h"
#include "MyPrintable.h"


// klasa reprezentujaca text
class MyText : public AttColor, public AttFormat, public MyPrintable
{
    
public:
    // konstruktor ustawiajacy lancuch znakow i atrybuty
    MyText(const std::string& str, AttFormat::Attribute f, AttColor::Attribute c) : AttColor(c), AttFormat(f), m_str(str) {}
    
    // funkcja ustawiajaca lancuch znakow
    void setText(const std::string& str) { m_str = str; }
    
    // funkcja zwracajaca lancuch znakow
    std::string rawString() const override { return m_str; }
    
    // funkcja zwracajaca dlugosc lancucha znakow
    unsigned int getLength() const override { return m_str.size(); }
    
private:
    // zmienna przechowujaca lancuch znakow
    std::string m_str;
     
};
