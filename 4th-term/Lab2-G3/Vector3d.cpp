#include "Vector3d.h"

Vector3d operator*(float a, Vector3d & vector)
{
	return vector*a;
}

std::ostream & operator<<(std::ostream & os, const Vector3d & vector)
{ 
	os << "[ ";
	for (int i = 0; i < 3; i++)
		os << vector.tablica[i] << " ";
	os << "]";
	return os;
}

float Vector3d::operator*(const Vector3d & other)
{
	float sum=0;
	for(int i=0;i<3;i++)
	sum += tablica[i] * other.tablica[i];
	return sum;
}

Vector3d Vector3d::operator*(float a)
{
	Vector3d temp;
	for (int i = 0; i < 3; i++)
		temp.tablica[i] *= a;
	return temp;
}
