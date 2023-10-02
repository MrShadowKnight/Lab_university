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

    // Спосіб 1
    if (x <= -1)
    {
        A = log10(fabs(cos(5 * x))) + exp(1 / x + x);
    }
    if (x > -1 && x < 0.4)
    {
        A = sqrt(pow((2 - x), 3)) - tan(x);
    }
    if (x >= 0.4)
    {
        A = sin(5 * x) - sqrt(abs(1 - x));
    }
    y = x + A;
    cout << "1) y = " << A << endl;

    // Спосіб 2
    if (x <= -1)
    {
        A = log10(fabs(cos(5 * x))) + exp(1 / x + x);
    }
    else
    {
        if (x > -1 && x < 0.4)
        {
            A = sqrt(pow((2 - x), 3)) - tan(x);
        }
        else
        {
            A = sin(5 * x) - sqrt(abs(1 - x));
        }
    }
    y = x + A;
    cout << "2) y = " << A;
}