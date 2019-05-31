#include "CGMethod.h"
#include <cmath>
#include <cstdlib>


Vector LinearEquation::Solve(Vector& x0)
{
	Vector s = b + (-1) * (Q * x0);
	Vector p = s;
	double s_norm = s^s;
	while (s_norm > epsilon)
	{
		double a = (s_norm) / (p^(Q*p));
		x0 = x0 + a*p;
		s = s + ((-1)*a) * (Q*p);
		double beta = (s^s)/(s_norm);
		p = s + beta*p;
		s_norm = s^s;
	}
	return x0;
}


