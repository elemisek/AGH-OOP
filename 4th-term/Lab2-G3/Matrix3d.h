#pragma once
#include <iostream>
#include "Vector3d.h"
class Matrix3d
{
	float ** tablica;
	Matrix3d(const Vector3d& x, const Vector3d& y, const Vector3d& z)
	{
		tablica = new float*[3];
		for (int i = 0; i < 3; ++i)
			tablica[i] = new float[3];
		for (int i = 0; i < 3; i++)
		{
			tablica[0][i] = x[i];
		}
		for (int i = 0; i < 3; i++)
		{
			tablica[0][i] = y[i];
		}
		for (int i = 0; i < 3; i++)
		{
			tablica[0][i] = z[i];
		}
	}
	~Matrix3d()
	{
		for(int i=0;i<3;i++)
		delete[] tablica[i];
		delete[] tablica;
	}
	Matrix3d()
	{
		float ** tablica = new float*[3];
		for (int i = 0; i < 3; ++i)
			tablica[i] = new float[3];

	}
	float* operator[](int el) { return tablica[el]; }
	const float* operator[](int el) const { return tablica[el]; }
	Matrix3d operator*(const Matrix3d&);


	friend std::ostream& operator<<(std::ostream& os, const Matrix3d& matrix);
};
std::ostream& operator<<(std::ostream& os, const Matrix3d& matrix);