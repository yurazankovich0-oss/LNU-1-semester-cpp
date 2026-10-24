#include "Series.h"
#include <cmath>

double arctgSeries(double eps, double x)
{
 double sum = 0;
 int n = 0;
 double term = x;

 while (fabs(term) >= eps)
 {
    sum += term ;
    n++;
    term = (pow(-1,n)*pow(x,2*n+1))/(2*n+1);
 }

 return sum;
 
}
