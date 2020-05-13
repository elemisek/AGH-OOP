#pragma once
#include <string>

// Tego pliku nie mo¿na modyfikowaæ.
class Animal 
{
public:
	explicit Animal(const std::string &name) :_name(name) {}
	virtual ~Animal() {}

	std::string name() const { return _name; }
	virtual void print() const = 0;

private:
	std::string _name; // imiê zwiêrzêcia
};

