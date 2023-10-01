#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double R;
    double y;

    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    if (x >= 2 * R)
    {
        y = R;
    }
    else
    {
        if (R < x && x < 2 * R)
        {
            y = sqrt(pow(R, 2) - pow((x - R), 2));
        }
        else
        {
            if (x == R)
            {
                y = 0;
            }
            else
            {
                if (0 < x && x < R)
                {
                    y = R - sqrt(pow((-R), 2) - pow(x, 2));
                }
                else
                {
                    if (x == 0)
                    {
                        y = -R;
                    }
                    else
                    {
                        if (-6 < x && x < 0)
                        {
                            y = -(x - R) / (-6 - R);
                        }
                        else
                        {
                            y = (-6 - R) / (x - R);
                        }
                    }
                }
            }
        }
    }

    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}