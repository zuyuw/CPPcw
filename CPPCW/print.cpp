#include <iostream>
using namespace std;
#include "Matrix.h"

int main()
{
	int d = 3;
	Vector C(d);
		C[0] =  0.1;
		C[1] = -0.1;
		C[2] = 0.0;
	Vector B(d);
		B[0] =  0.1;
		B[1] = -0.1;
		B[2] = 0.0;
	
	Vector D(d);
	D = C + B;
	for (int i =0; i<d; i++)
		cout << D[i] << endl;
	
	double E;
	E = C^B;
	cout << E << endl;
	
	return 0;
}