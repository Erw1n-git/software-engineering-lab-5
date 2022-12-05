#include <iostream>
#include <cmath>

#include "funcTable.h"

double function1(double x)
{
	double y = pow(x, 3) + 2 * x;
	return y;
}

double function2(double x)
{
	double y = sin(x) + x * x;
	return y;
}

int main()
{
	double a,b,h, eps = 0.0000001; 
	funcPtr f;
	
	std::cout << "Enter bounds of interval(a, b) and step(h): " << std::endl;
	std::cin >> a >> b >> h;

	f = function1;
	std::cout << "The first function ( x^3 + 2x ): " << std::endl;
	printTable(a, b, h, eps, f);

	f = function2;
	std::cout << "The second function ( sin(x)  + x^2 ): " << std::endl;
	printTable(a, b, h, eps, f);

	return 0;
}
