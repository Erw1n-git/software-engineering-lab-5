//#pragma once

//#ifdef funcTable_h
//#define funcTable_h

typedef double(*funcPtr)(double);

//void firstDerivative(double x, double eps, funcPtr f);
//void secondDerivative(double x, double eps, funcPtr f);
void printTable(double a, double b, double h, double eps, funcPtr f);

//#endif 
