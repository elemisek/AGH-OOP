#pragma once
#include <string>
#include <stdexcept>

struct BadDimsException : std::runtime_error
{
	using std::runtime_error::runtime_error;
};
