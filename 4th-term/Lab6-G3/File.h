#pragma once

#include <string>

/// Base class of filesystem
class File
{
public:
	File(std::string name);
	File(const File& f) = default;

	virtual ~File() = default;

	// Return pointer to copy of itself. Needs to be overriden in each derived class
	virtual File* clone() const;

	void rename(std::string newName);

	// For standard print no arguments should be delivered, level is used to align different levels of nesting
	virtual void print(size_t level = 0) const;
protected:
	std::string name;
};