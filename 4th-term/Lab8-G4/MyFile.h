#pragma once

#include "MyItem.h"

// klasa reprezentująca plik
class MyFile : public MyItem
{
    
    std::string name;
    std::string content;
    
public:
    // konstruktor korzystający z konstruktora MyItem, przypisujący nazwę name
    MyFile(const std::string & name) : MyItem(name) {};
    
    // domyślny konstruktor kopiujący
    MyFile(const MyFile& f) = default;
    
    // domyślny destruktor wirtualny
    virtual ~MyFile() = default;
    
    // funkcja clone zwracająca wskaźnik na kopię obiektu
    MyFile * clone() const override;
    
    // funkcja wyświetlająca strukturę katalogów (w ramach tej klasy jest to nazwa pliku)
    void ls(unsigned int op = 0) const override;
    
    // funkcja wyświetlająca content (zawartość pliku)
    void cat() const;
    
    // zaprzyjaźniony operator dodający ciąg znaków do zmiennej content
    friend MyFile& operator<<(MyFile& file, const std::string& txt);
};