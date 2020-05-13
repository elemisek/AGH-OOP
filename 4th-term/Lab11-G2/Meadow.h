#pragma once
#include "Animals.h"
#include <vector>
#include <memory>
#include <string>

class Meadow
{
private:
	std::vector<std::unique_ptr<Animal>> _animals;
public:
	Meadow() = default;
	~Meadow() = default;

	void add(std::unique_ptr<Animal> animal) { _animals.push_back(std::move(animal)); }
	void print(const std::string&) const;
	void countNames() const;
	std::vector<Sheep*> getSheepHerd();




};

