#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (pow(x - R, 2) + pow(y - R, 2) == pow(R, 2) || (y = x && -R <= x <= 0 && -R <= y <= 0)) {
		cout << "True";
	}
	else {
		cout << "Folse";
	}
}
