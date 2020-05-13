#pragma once
#include "Animal.h"
#include <iostream>

class Sheep : public Animal
{
private:
	bool _isSheared;
public:
	Sheep(const std::string& name) : Animal(name), _isSheared(false) {}
	virtual ~Sheep() override;
	void print() const override;
	void shear();
};

class Cow : public Animal
{
public:
	Cow(const std::string& name) : Animal(name) {}
	void print() const override;
};

class Horse : public Animal
{

public:
	Horse(const std::string& name) : Animal(name) {}
	void print() const override;
};

