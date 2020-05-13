#pragma once

#include <vector>
#include "MyItem.h"
#include "MyUnique.h"

//klasa reprezentująca katalog
class MyDir : public MyItem
{
    
    std::vector<MyUnique> content;
    
public:
    // konstruktor korzystający z konstruktora MyItem, przypisujący nazwę name
    MyDir(const std::string & name) : MyItem(name) {};
    
    // konstruktor kopujący działający dla directory i wszystkich jego elementów
    MyDir(const MyDir& dir) : MyItem(dir)
    {
        for(auto &i : dir.content)
            content.push_back(i->clone());
    }
    
    // konstruktor przenoszący działający dla directory i wszystkich jego elementów
    MyDir(MyDir&& dir) : MyItem(dir)
    {
        for(auto &i : dir.content)
            content.push_back(std::move(i));
            
        dir.content.clear();
    }
    
    // wirtualny destruktor
    virtual ~MyDir();
    
    // funkcja clone zwracająca wskaźnik na kopię obiektu
    MyDir * clone() const override;
    
    // funkcja wyświetlająca strukturę katalogów (w ramach tej klasy jest to zawartość katalogu)
    void ls(unsigned int op = 0) const override;
    
    // operator dodawania obiektu item do directory
    void operator/=(MyUnique&&);
    
};
