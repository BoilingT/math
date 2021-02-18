#pragma once
#include <iostream>
#include <string>
using namespace std;

template <unsigned int rows, unsigned int collumns>
class matrix {

private:
	float **values = createMatrix<float>(rows, collumns);

	template <typename T>
	T** createMatrix(int m, int n) {

		T** Matrix = 0;
		Matrix = new T* [m];

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
	
public:

	int collumnCount = 0;
	int rowCount = 0;

	//Create a matrix containing only zeros (0).
	matrix() {
		collumnCount = collumns;
		rowCount = rows;
	}

	//Create a matrix with specified data.
	matrix(float arr2d[rows][collumns]) {
		collumnCount = collumns;
		rowCount = rows;
		set<rows, collumns>(arr2d);
	}

	//Set new data into the matrix or new data with different dimensions to create a whole new and different matrix.
	//Takes an 2d array as input.
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

	//Set new data into the matrix or new data with different dimensions to create a whole new and different matrix.
	//Takes a one dimensional array (like a vector).
	template <int r, int c>
	matrix set(float * arr1d) {
		//cout << "r = " << r << " c = " << c << " rows = " << rows << " cols = " << collumns << endl;
		if (r == rows && c == collumns)
		{
			for (int col = 0; col < collumnCount; col++)
			{
				for (int row = 0; row < rowCount; row++)
				{
					values[row][col] = arr1d[col];
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
					values[row][col] = arr1d[col];
				}
			}
			return *this;
		}
	}
	
	//Convert the data into a readable string.
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
	
	///Add two matrices together.
	matrix add(matrix addMatrix) {
		if (collumnCount == addMatrix.collumnCount && rowCount == addMatrix.rowCount)
		{
			for (int i = 0; i < rowCount; i++)
			{
				for (int j = 0; j < collumnCount; j++)
				{
					values[i][j] += addMatrix.values[i][j];
				}
			}
		}
		return *this;
	}

	matrix add(float numb) {

		for (int i = 0; i < rowCount; i++)
		{
			for (int j = 0; j < collumnCount; j++)
			{
				values[i][j] += numb;
			}
		}
		return *this;
	}

	matrix subtract(matrix subratctMatrix) {
		if (collumnCount == subratctMatrix.collumnCount && rowCount == subratctMatrix.rowCount)
		{
			for (int i = 0; i < rowCount; i++)
			{
				for (int j = 0; j < collumnCount; j++)
				{
					values[i][j] -= subratctMatrix.values[i][j];
				}
			}
		}
		return *this;
	}

	matrix subtract(float numb) {

		for (int i = 0; i < rowCount; i++)
		{
			for (int j = 0; j < collumnCount; j++)
			{
				values[i][j] -= numb;
			}
		}
		return *this;
	}

	matrix divide(matrix divideMatrix) {
		if (collumnCount == divideMatrix.collumnCount && rowCount == divideMatrix.rowCount)
		{
			for (int i = 0; i < rowCount; i++)
			{
				for (int j = 0; j < collumnCount; j++)
				{
					values[i][j] /= divideMatrix.values[i][j];
				}
			}
		}
		return *this;
	}

	matrix divide(float scaler) {
		for (int i = 0; i < rowCount; i++)
		{
			for (int j = 0; j < collumnCount; j++)
			{
				values[i][j] /= scaler;
			}
		}
		return *this;
	}

	//Scale a matrix with a scaler
	matrix scale(float scaler) {
		for (int i = 0; i < rowCount; i++)
		{
			for (int j = 0; j < collumnCount; j++)
			{
				values[i][j] *= scaler;
			}
		}
		return *this;
	}

	//Multiply two matricies
	template <int r, int c>
	matrix mult(matrix<r, c> multMatrix) {
		return *this;
	}
};