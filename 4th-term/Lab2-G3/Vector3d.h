#pragma once
#include <iostream>
class Vector3d
{
private:
	float * tablica;
public:
	Vector3d(float x=0,float y=0, float z=0)
	{
		tablica = new float[3];
		tablica[0] = x;
		tablica[1] = y;
		tablica[2] = z;

	};
	~Vector3d()
	{
		delete[] tablica;
	}
	float & operator[](int el) { return tablica[el]; }
	const float & operator[](int el) const { return tablica[el]; }
	float operator*(const Vector3d&);
	Vector3d operator*(float a);

	friend Vector3d operator*(float a,Vector3d& vector);
	friend std::ostream& operator<<(std::ostream& os, const Vector3d& vector);
};
Vector3d operator*(float a, Vector3d& vector);
std::ostream& operator<<(std::ostream& os, const Vector3d& vector);

