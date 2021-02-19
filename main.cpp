#include <iostream>
#include "matrixMath.h"
#include "vectorMath.h"
#include <list>
# define M_PI           3.14159265358979323846  /* pi */
using namespace std;

void toArray(vec3 vector, float* out[1][3]) {
	float* p_vecValues = vector.getValues();
	float vecValues[1][3];

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			vecValues[i][j] = p_vecValues[j];
		}
	}
}
int main() {
	//cout << list[0] << endl;
	float angle = 0;
	//std::list<float[3]> myList = { {0,0,0} };
	
	//myMatrix.create2DArray(2, 2);
	//myMatrix.createMatrix(2, 2);
	/*myMatrix.setMatrix(new float[3][3]{
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
		});*/
	//cout << myMatrix.toString() << endl;

	//float** result = myMatrix.createMatrix<float>(3, 3);

	vec3 row1 = { 1, 2, 3 };

	matrix<2, 2> m2(new float[2][2]{
		{2, 1},
		{-8, 6}
	});
	//myMatrix.set<1,3>(row1.getValues());

	matrix<3, 2> m1(new float[3][2] {
		{1, 3},
		{4, -1},
		{-5, 10}
	});
	
	cout << "m1: \n" << m1.toString() << endl; 
	//cout << row1.toString() << endl;
	cout << "Result: " << (m1.mult<2,2>(m2)).toString() << endl;

	//cout << "Dot product: " << vec3(1, 0, 0).dotProduct(vec3(1, 1, 0), "degree") << endl;
	
	//cout << myMatrix.toString() << endl;
	    
	//cout << row1.toString() << endl;
	//cout << row2.toString() << endl;
	//cout << row1.getValues() << endl;
	
	system("PAUSE");
	return 0;
}