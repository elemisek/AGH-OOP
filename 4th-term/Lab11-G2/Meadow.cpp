#include "Meadow.h"
#include <algorithm>
#include <vector>
#include <set>

void Meadow::print(const std::string& s) const 
{
	std::cout << "=== " << s << " ===";
	std::for_each(_animals.begin(), _animals.end(), [](const std::unique_ptr<Animal>& animal) { std::cout << std::endl; animal->print();  });
	std::cout << std::endl;
}

void Meadow::countNames() const
{
	std::vector<std::string> names;
	for (auto& animal : _animals)
		names.push_back(animal->name());
	std::sort(names.begin(), names.end());
	std::set<std::string> keys(names.begin(), names.end());
	for (auto& key : keys)
		std::cout << key << ": " << std::count(names.begin(), names.end(), key) << std::endl;
}

std::vector<Sheep*> Meadow::getSheepHerd()
{
	std::vector<Sheep*> sheepHerd;
	for (auto& animal : _animals)
	{
		auto cast = dynamic_cast<Sheep*>(animal.get());
		if (cast) sheepHerd.push_back(cast);
	}
	return sheepHerd;
}
