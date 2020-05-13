#include "BerserkerException.h"

#include "Loudy.h"

BerserkerException::BerserkerException(LoudyArray* ptr) : _free_ptr(ptr) {}

BerserkerException::~BerserkerException()
{
    delete _free_ptr;
}