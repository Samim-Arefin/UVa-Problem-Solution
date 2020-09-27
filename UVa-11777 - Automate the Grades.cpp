#include<iostream>
using namespace std;
int main()
{
	int c, t1, t2, f, a, ct1, ct2, ct3, min = 0, avg = 0, grade = 0, count = 0;
	cin >> c;
	while (c--)
	{
		cin >> t1 >> t2 >> f >> a >> ct1 >> ct2 >> ct3;
		if (ct1 <= ct2 && ct1 <= ct3)
		{
			avg = (ct2 + ct3) / 2;
		}
		else if (ct2 <= ct1 && ct2 <= ct3)
		{
			avg = (ct1 + ct3) / 2;
		}
		else if (ct3 <= ct1 && ct3 <= ct2)
		{
			avg = (ct1 + ct2) / 2;
		}
		grade = avg + t1 + t2 + f + a;
		if (grade >= 90)
		{
			cout << "Case " << ++count << ": A" << endl;
		}
		else if (grade >= 80 && grade < 90)
		{
			cout << "Case " << ++count << ": B" << endl;
		}
		else if (grade >= 70 && grade < 80)
		{
			cout << "Case " << ++count << ": C" << endl;
		}
		else if (grade >= 60 && grade < 70)
		{
			cout << "Case " << ++count << ": D" << endl;
		}
		else if (grade < 60)
		{
			cout << "Case " << ++count << ": F" << endl;
		}
		grade = 0;
		avg = 0;
	}
}