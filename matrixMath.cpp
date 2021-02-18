#include "matrixMath.h"

Vec3::Vec3(float _x, float _y, float _z) {
	x = _x;
	y = _y;
	z = _z;
}
/*
template <unsigned int rows, unsigned int collumns>
template <typename T>
T** matrix<rows, collumns>::createMatrix(unsigned int m, unsigned int n) {

	T** Matrix = 0;
	Matrix = new T * [m];

	for (int i = 0; i < m; i++)
	{
		Matrix[i] = new T[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Matrix[i][j] = 0;
		}
	}

	return Matrix;
}
*/


float Vec3::dotProduct(Vec3 vec1, Vec3 vec2) {
	return 0;
}