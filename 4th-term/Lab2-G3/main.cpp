// ProszÄ™ napisaÄ‡ klasÄ™ Vector3d, reprezentujÄ…cÄ… wektor 3-wymiarowy.
// ma on moĹĽliwoĹ›Ä‡ dostÄ™pu do swoich komponentĂłw przez operator[].

// ProszÄ™ takĹĽe napisaÄ‡ klasÄ™ Matrix3d, ktĂłra reprezentuje macierz.
// Matrix3D skĹ‚ada siÄ™ z  Vector3d'Ăłw.
// DomyĹ›lny konstruktor wypeĹ‚nia je zerami.
// MoĹĽliwe sÄ… takĹĽe operacje matematyczne wektorĂłw i macierzy.

// W Matrix3d moĹĽliwy jest dostÄ™p do elementĂłw jak w tablicy 2-wymiarowej:
// Matrix3d matrix;
// matrix[i][j] = 10;
// Co trzeba zwrĂłciÄ‡?

// Uwagi:
// - ProszÄ™ tam gdzie to moĹĽliwe, unikaÄ‡ copy-paste'a! 
// - Jak oszczÄ™dziÄ‡ sobie wysiĹ‚ku przy mnoĹĽeniu macierzy przez wektor?

// SkoĹ„czone zadanie proszÄ™ spakowaÄ‡ i wysĹ‚aÄ‡ na UPEL, np.
// tar -czvf lab02.tar.gz lab02

#include <iostream>
#include "Matrix3d.h"
#include "Vector3d.h"

int main() {
	Vector3d v1(3., 1.5, 2.);
	const Vector3d v2(4, 2.);

	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v1 * v2: " << v1 * v2 << std::endl;
	std::cout << std::endl;
	
	v1[1] = 10;
	std::cout << "Po zmianie v1[2]: " << std::endl;
	std::cout << "v3: " << v1 << std::endl;
	
	std::cout << "v1 * 2: " << v1 * 2 << std::endl;
	std::cout << "2 * v1: " << 2 * v1 << std::endl;
	std::cout << std::endl;
	
	const Matrix3d m1(v1, v2, v2);
	Matrix3d m2;
	/*
	std::cout << "m1: " << std::endl;
	std::cout << m1 << std::endl;
	std::cout << "m2: " << std::endl;
	std::cout << m2 << std::endl;

	m2[0][0] = 100;
	std::cout << "Po zmianie m2[0][0]: " << std::endl;
	std::cout << m2 << std::endl;

	std::cout << "m1 * v2: " << std::endl;
	std::cout << m1 * v2 << std::endl;
	*/
}
/* wyniki

v1: [ 3 1.5 2 ]
v2: [ 4 2 0 ]
v1 * v2: 15

Po zmianie v1[2]:
v3: [ 3 10 2 ]
v1 * 2: [ 6 20 4 ]
2 * v1: [ 6 20 4 ]

m1:
[ 3 10 2 ]
[ 4 2 0 ]
[ 4 2 0 ]

m2:
[ 0 0 0 ]
[ 0 0 0 ]
[ 0 0 0 ]

Po zmianie m2[0][0]:
[ 100 0 0 ]
[ 0 0 0 ]
[ 0 0 0 ]

m1 * v2:
[ 32 20 20 ]

*/