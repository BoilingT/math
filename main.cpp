#include <iostream>
#include "matrixMath.h"
#include <list>
# define M_PI           3.14159265358979323846  /* pi */
using namespace std;

int main() {
	//cout << list[0] << endl;
	float angle = 0;
	//std::list<float[3]> myList = { {0,0,0} };
	float myList[][3] = {
		{1, 2, 3},
		{4, 5, 6}//,
		//{7, 8, 9}
	};
	matrix<3, 2> myMatrix(myList);

	//column x rows
	matrix<1, 3> multMatrix(new float[][1]{
		{1},
		{1},
		{1}
		});

	cout << multMatrix.toString() << endl;
	cout << myMatrix.mult(multMatrix).toString() << endl;
	//cout << multMatrix.mult(myMatrix).toString() << endl;

	/*Vec3<3> rotationMatrix =
	{ new float[]
		{
		cos(angle), -sin(angle), 0.f,
		sin(angle), cos(angle), 0.f,
		0.f, 0.f, 1.f
	} 
	};*/
	
	
	system("PAUSE");
	return 0;
}