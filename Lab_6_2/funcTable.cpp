#include <iostream>
#include <cmath>

#include "funcTable.h"

double firstDerivative(double x, double eps, funcPtr f)
{
	return (f(x + eps) - f(x)) / eps;
}

double secondDerivative(double x, double eps, funcPtr f)
{
	double y1 = firstDerivative(x, eps, f);
	double y2 = firstDerivative(x + eps, eps, f);
	return (y2 - y1) / eps;
}

void printTable(double a, double b, double h, double eps, funcPtr f)
{
	double y, root;
	double max = b +1;

	for(int i = a; i <= b; i+= h)
	{
		if(secondDerivative(i, eps, f) == 0)
		{
			max = i;
		}
	}
	
	if(max == b + 1)
	{
		std::cout << "There are no roots on the given interval!" << std::endl;
	}
	else
	{
		std::cout << "Max root of the second derivative of the function is: " << max << std::endl;
	}
}
