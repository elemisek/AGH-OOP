#pragma once

// klasa reprezentująca ustawianie-trzymanie-zwracanie - niepotrzebnie skomplikowana ZMIENNA
class SetHoldRet
{
    
public:
    // funkcja obsługująca przypisanie wartości to tworzonej zmiennej
    template <class T>
    void base(T val) const
    {
        auto& proto = storage<T>();
        proto = val;
    }
    
    // funkcja zwracająca utworzoną zmienną
    template <class T>
    T& product() const
    {
        auto& proto = storage<T>();
        return proto;
    }
    
private:
    
    // funkcja statyczna obsługująca przechowywanie zmiennej - zwracająca referencję
    template <class T>
    static T& storage()
    {
        static T val;
        return val;
    }
    
};