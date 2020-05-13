#include "Directory.h"
#include <string>
#include <iostream>

Directory::Directory(std::string name) : File(name)
{

}

Directory::Directory(const Directory& dir) : File(dir.name)
{
	for (auto& file : dir.content)
		content.push_back(file->clone());
}

Directory::~Directory()
{
	for (auto& file : content)
	{
		delete file;
	}
}

Directory* Directory::clone() const
{
	return new Directory(*this);
}

void Directory::print(size_t level) const
{
	for (size_t i = 0; i < level * 2; i++)
		std::cout << "_";

	std::cout << name << "/" << std::endl;

	for (auto& file : content)
	{
		file->print(level + 1);
	}
}

void Directory::copy(File* cp)
{
	content.push_back(cp->clone());
}

void Directory::operator/(File* file)
{
	content.push_back(file);
}