#ifndef CGMethod_h
#define CGMethod_h

#include "Matrix.h"

typedef vector<Vector> SamplePath;

class LinearEquation
{
	public:
		Vector b;
		Matrix Q;
		
		const double epsilon = 0.000001;

		LinearEquation(Vector b_, Matrix Q_)
		{
			b = b_; Q = Q_;
		}
		Vector Solve(Vector& x0);
};

#endif