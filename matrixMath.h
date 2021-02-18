#pragma once
#include <iostream>
#include <string>
using namespace std;

class Math {
public:

};

class Vec3
{

private:

public:
	float x, y, z = 0;

	Vec3(float _x, float _y, float _z);

	float dotProduct(Vec3 vec1, Vec3 vec2);

};

class Vec4
{

private:
	float x, y, z, w;

public:
	Vec4(float _x, float _y, float _z, float _w) {
		x = _x;
		y = _y;
		z = _z;
		w = _w;
	}
};

template <int cols, int rows>
class matrix {
public:
	float list[rows][cols];

	matrix(float arr[rows][cols]) {
		for (int col = 0; col < cols; col++)
		{
			for (int row = 0; row < rows; row++)
			{
				list[row][col] = arr[row][col];
			}
		}
	}

	string toString() {
		string str;
		for (int row = 0; row < rows; row++)
		{
			str += "{";
			for (int col = 0; col < cols; col++)
			{
				str += to_string(list[row][col]) + ", ";
			}
			if (row < rows-1)
			{
				str += "}, ";
			}
			else
			{
				str += "}";
			}
		}
		return str;
	}

	template <int C, int R>
	matrix<C,R> mult(matrix<C, R> Matrix) {
		
		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				//cout << Matrix.list[i][j];
				Matrix.list[j][i] += 1.f;
			}
		}

		return Matrix;
	}
};