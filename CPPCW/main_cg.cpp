#include <iostream>

using namespace std;
#include "Matrix.h"
#include "CGMethod.h"

int main()
{
	int d = 2;
	Matrix C(d);
	Vector B(d);
	Vector x(d);
	for (int i=0; i<d; i++) C[i].resize(d);
	C[0][0] =  1;  C[0][1] =  2;
	C[1][0] =  3;  C[1][1] = -4;
	B[0] = -2.0/3;
	B[1] = 3;

	x[0] = 0;
	x[1] = 0;

	LinearEquation l(B, C);
	x = l.Solve(x);
	for (int i=0; i<d; i++)
		cout << x[i] << endl;
	return 0;
}