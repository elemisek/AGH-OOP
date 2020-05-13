#pragma once

#include <string>
#include <vector>
#include "File.h"

class Directory : public File
{
public:
	Directory(std::string name);
	Directory(const Directory& dir);

	virtual ~Directory();
	Directory* clone() const override;

	// Overriden to additionally print directory content
	void print(size_t level = 0) const override;

	// Copy file or to content vector
	void copy(File* f);

	// Add file to directory
	void operator/(File* file);
protected:
	std::vector<File*> content;
};