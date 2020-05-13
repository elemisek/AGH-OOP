#include "BitArray.h"
BitArray::BitArray(unsigned int length, bool ones)
{
	bits = new unsigned char[(length / 8) + 1];
	for (unsigned int i = 0; i < length / 8 + 1; i++) 
	{
		if (ones)
			bits[i] = 0xFF;
		else
			bits[i] = 0x00;
	}
	this->length = length;
}

void BitArray::print() const
{
	for (unsigned int i = 0; i < length; i++) 
	{
		std::cout << (*this)[length - i - 1];
		if ((length-i-1) % 8 == 0) 
			std::cout << " <-" << length - i - 1 << " ";
	}
}
bool BitArray::operator[](unsigned int position) const
{
	return (bool)BitChanger(bits[position / 8], position % 8);
}
BitChanger BitArray::operator[](unsigned int position)
{
	return BitChanger(bits[position / 8], position % 8);
}

BitArray * BitArray::operator=(const BitArray & ba)
{
	delete[] bits;
	bits = new unsigned char[(ba.length / 8) + 1];
	length = ba.length;
	std::memcpy(bits, ba.bits, (ba.length / 8) + 1);
	return this;
}
