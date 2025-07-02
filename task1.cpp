#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return x * x * x - x - 2;
}

void bisection(double a, double b, double tolerance)
{
    int iterations = 0;
    double c ;
    double error = abs(a-b);
    while (error>=tolerance)
    {
        iterations++;
        c = (a + b) / 2.0;
        if(f(c) == 0.0)break;
        else if(f(c) * f(a) < 0.0)
        b = c;
        else 
        a = c;
        error = abs(a-b);
    }
    cout << "Traditional Bisection Result: x = " << c << ", iterations = " << iterations << endl;
    
}