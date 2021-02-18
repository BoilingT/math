#include <iostream>
#include "matrixMath.h"
#include <list>
# define M_PI           3.14159265358979323846  /* pi */
using namespace std;

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
	float list[][3] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	matrix<3, 3> myMatrix(list);

	float list2[][3] = {
		{2,0,0}
	};
	
	cout << myMatrix.toString() << endl;


	cout << myMatrix.set<1, 3>(list2).toString() << endl;
	
	
	system("PAUSE");
	return 0;
}