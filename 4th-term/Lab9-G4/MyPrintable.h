#pragma once
#include <string>

// interfejs dla klas MyLine i MyText
class MyPrintable
{
    
public:
	// destruktor wirtualny
	virtual ~MyPrintable();

    // funkcja czysto wirtualna zwracajaca niesformatowany ciag znakow
    virtual std::string rawString() const = 0;
    
    // funkcja czysto wirtualna zwracajaca ilosc znakow w ciagu
    virtual unsigned int getLength() const = 0;
    
};
