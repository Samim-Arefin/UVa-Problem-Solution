#include<iostream>
#include<math.h>
#include<cmath>
#include<iomanip>
#define pi acos(-1)
using namespace std;

int main()
{
	double a, b, c;

	while (cin >> a >> b >> c)
	{
		double s = (a + b + c) / 2;
		double p = abs(sqrt((s - a) * (s - b) * (s - c) / s));
		double r = pi * p * p;
		double q = sqrt(s * (s - a) * (s - b) * (s - c));
		double t = abs(q - r);
		double r1 = (a * b * c) / (4 * q);
		double u = pi * r1 * r1;
		double v = u - q;
		cout << fixed << setprecision(4) << v << " " << t << " " << r << endl;
	}
	return 0;
}
