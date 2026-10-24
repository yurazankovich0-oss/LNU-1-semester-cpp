#include <iostream>
#include <cmath>
#include "Series.h"
using namespace std;

int main()
{
 double a = -0.9, b = 0.9, h = 0.1, eps = 1 * pow(10,-6);
 for (double x =a; x <= b; x += h)
 {
 cout << "x = " << x << endl;
 cout << "arctg = " << arctgSeries(eps,x) << endl;
 }
    return 0;
}
