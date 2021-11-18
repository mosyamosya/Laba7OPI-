#include <iostream>
#include <iomanip>
#include "windows.h"
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;

int main()
{
	float minX, maxX, h, x;
	double y;
	cin >> minX >> maxX >> h;
	x = minX;
	while (x <= maxX + h / 2)
	{
		y = cos(x) + log(x) - pow(M_E, x);
		cout << x << setw(3) << y << endl;
		x += h;
	};
}
