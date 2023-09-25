#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    double a;
    cout << "a = ";
    cin >> a;

    double z1 = (sin(a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));

    double z2 = tan(3 * a);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
}