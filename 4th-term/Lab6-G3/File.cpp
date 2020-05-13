#include "File.h"

#include <string>
#include <iostream>

File::File(std::string name) : name(name)
{

}

File* File::clone() const
{
	return new File(*this);
}

void File::rename(std::string newName)
{
	name = newName;
}

void File::print(size_t level) const
{
	for (size_t i = 0; i < level * 2; i++)
		std::cout << "_";

	std::cout << name << std::endl;
}