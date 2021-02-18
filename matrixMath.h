#pragma once
#include <iostream>
#include <string>
using namespace std;

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

template <unsigned int rows, unsigned int collumns>
class matrix {

private:
	


public:
	template <typename T>
	T** createMatrix(int m, int n) {

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

	int collumnCount = 0;
	int rowCount = 0;
	float **values = createMatrix<float>(rows, collumns);

	matrix(float arr2d[rows][collumns]) {
		cout << " rows = " << rows << " cols = " << collumns << endl;
		collumnCount = collumns;
		rowCount = rows;
		set<rows, collumns>(arr2d);
	}
	
	template <int r, int c>
	matrix set(float arr2d[r][c]) {
		//cout << "r = " << r << " c = " << c << " rows = " << rows << " cols = " << collumns << endl;
		if (r == rows && c == collumns)
		{
			for (int col = 0; col < collumnCount; col++)
			{
				for (int row = 0; row < rowCount; row++)
				{
					values[row][col] = arr2d[row][col];
				}
			}
			return *this;
		}
		else if (r != rows || c != collumns)
		{
			values = 0;
			values = createMatrix<float>(r, c);
			collumnCount = c;
			rowCount = r;
			for (int col = 0; col < c; col++)
			{
				for (int row = 0; row < r; row++)
				{
					values[row][col] = arr2d[row][col];
				}
			}
			return *this;
		}
	}
	
	
	string toString() {
		if (this != NULL)
		{
			string str;
			for (int row = 0; row < rowCount; row++)
			{
				str += "{";
				for (int col = 0; col < collumnCount; col++)
				{
					str += to_string(values[row][col]) + ", ";
				}
				if (row < rowCount-1)
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
		else
		{
			return "";
		}
	}
	

};