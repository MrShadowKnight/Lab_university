#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    double y;
    double A;

    cout << "x = ";
    cin >> x;

    if (x <= -1)
    {
        A = log10(fabs(cos(5 * x))) + exp(1 / x + x);
    }
    else if (x > -1 && x < 0.4)
    {
        A = ((2 - x) * (2 - x) * (2 - x)) / ((2 - x) * (2 - x) * (2 - x)) - tan(x);
    }
    else if (x >= 0.4)
    {
        A = sin(5 * x) - (fabs(1 - x)) / (fabs(1 - x));
    }
}