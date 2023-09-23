#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    double a;
    cout << "a = ";
    cin >> a;

    double z1 = (1 - 2 * sin(a) * sin(a)) / (1 + sin(2 * a));

    double z2 = (1 - tan(a)) / (1 + tan(a));

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
}