#include "Array2D.h"

std::ostream& operator<<(std::ostream& os, const Array2D& arr)
{
	arr.print();
	return os;
}

Array2D::Array2D(int dim1, int dim2) : mDim1(dim1), mDim2(dim2)
{
		int size = mDim1 * mDim2;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = i + 1;
		}
}

Array2D::~Array2D()
{
	delete[] arr;
}

void Array2D::print() const
{
	int size = mDim1 * mDim2;
	for (int i = 0; i < size; i+=mDim2)
	{
		for (int j = 0; j < mDim2; j++)
		{
			std::cout << arr[i + j] << "\t";
		}
		std::cout << std::endl;
	}
}

void Array2D::reshape(int dim1, int dim2)
{
	if ((mDim1 * mDim2) != (dim1 * dim2))
	{
		throw BadDimsException("dimensions " + std::to_string(dim1) + " and " + std::to_string(dim2) + " do not conform with " + std::to_string(mDim1) + " and " + std::to_string(mDim2));
	}
	else
	{
		mDim1 = dim1;
		mDim2 = dim2;
	}
}

int* Array2D::operator[](int dim1) const
{
	return arr + dim1 * mDim2;
}

int& Array2D::at(int dim1, int dim2)
{
	if (dim2 >= mDim2)
	{
		throw std::out_of_range("out of range at j=" + std::to_string(dim2));
	}
	if (dim1 >= mDim1)
	{
		throw std::out_of_range("out of range at i=" + std::to_string(dim1));
	}
	
	return *(arr + dim1*mDim2 + dim2);
}

int Array2D::at(int dim1, int dim2) const
{
	if (dim2 >= mDim2)
	{
		throw std::out_of_range("out of range at j=" + std::to_string(dim2));
	}
	if (dim1 >= mDim1)
	{
		throw std::out_of_range("out of range at i=" + std::to_string(dim1));
	}
	
	return *(arr + dim1 * mDim2 + dim2);
}

Array2D& Array2D::operator=(Array2D& arr2d)
{
	if (arr != arr2d.arr)
	{
		delete [] arr;
		mDim1 = arr2d.mDim1;
		mDim2 = arr2d.mDim2;
		int size = mDim1 * mDim2;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr2d.arr[i];
		}
	}
	return *this;
}
