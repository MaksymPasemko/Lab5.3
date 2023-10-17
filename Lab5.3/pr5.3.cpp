#include <iostream>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
	double yp, yk, z;
	int n;

	cout << "yp = "; cin >> yp;
	cout << "yk = "; cin >> yk;
	cout << "n = "; cin >> n;

	double dg = (yk - yp) / n;
	double y = yp;

	while (y <= yk)
	{
		z = f(1 + y * y) + pow(f(f(1) + pow(f(y * y), 2)), 2);
		cout << y << "  " << z << endl;
		y += dg;
	}
	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return (cos(x / 2)) / (1 + pow(sin(x), 2));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = pow(x, 3 * i) / ((2 * i) * (2 * i - 1));
			a *= R;
			S += a;
		} while (i < 6);
		return S;
	}
}




