#include <iostream>
#include <cmath>

using namespace std;

int f(const double x);

int main()
{
	double tp, tk, z;
	int n;

	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	double dt = (tk - tp) / n;

	double t = tp;

	while (t <= tk)
	{
		z = f(2 * t) + f(t * t + 1) * f(t * t + 1);
		cout << t << "(-)" << z << endl;
		t += dt;
	}
	return 0;
}
int f(const double x)
{
	if (abs(x) >= 1)
		return (sin(2*x)+1) / (sin(x)+cos(x)* cos(x));
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		do
		{
			n++;
			double R = pow(x,4) / ((2 * n) * 2 * n + 1);
			a *= R;
			S += a;
		} while (n < 7);
		return S;
	}
}