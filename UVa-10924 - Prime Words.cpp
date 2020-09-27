
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ch;
	int count, num = 0;
	while (cin >> ch)
	{
		count = 0;
		for (int i = 0; ch[i] != '\0'; i++)
		{
			if (ch[i] == 'a')
			{
				count = count + 1;
			}
			if (ch[i] == 'A')
			{
				count = count + 27;
			}
			if (ch[i] == 'b')
			{
				count += 2;
			}
			if (ch[i] == 'B')
			{
				count = count + 28;
			}
			if (ch[i] == 'c')
			{
				count += 3;
			}
			if (ch[i] == 'C')
			{
				count = count + 29;
			}
			if (ch[i] == 'd')
			{
				count += 4;
			}
			if (ch[i] == 'D')
			{
				count = count + 30;
			}
			if (ch[i] == 'e')
			{
				count += 5;
			}
			if (ch[i] == 'E')
			{
				count = count + 31;
			}
			if (ch[i] == 'f')
			{
				count += 6;
			}
			if (ch[i] == 'F')
			{
				count = count + 32;
			}
			if (ch[i] == 'g')
			{
				count += 7;
			}
			if (ch[i] == 'G')
			{
				count = count + 33;
			}
			if (ch[i] == 'h')
			{
				count += 8;
			}
			if (ch[i] == 'H')
			{
				count = count + 34;
			}
			if (ch[i] == 'i')
			{
				count += 9;
			}
			if (ch[i] == 'I')
			{
				count = count + 35;
			}
			if (ch[i] == 'j')
			{
				count += 10;
			}
			if (ch[i] == 'J')
			{
				count = count + 36;
			}
			if (ch[i] == 'k')
			{
				count += 11;
			}
			if (ch[i] == 'K')
			{
				count = count + 37;
			}
			if (ch[i] == 'l')
			{
				count += 12;
			}
			if (ch[i] == 'L')
			{
				count = count + 38;
			}
			if (ch[i] == 'm')
			{
				count += 13;
			}
			if (ch[i] == 'M')
			{
				count = count + 39;
			}
			if (ch[i] == 'n')
			{
				count += 14;
			}
			if (ch[i] == 'N')
			{
				count = count + 40;
			}
			if (ch[i] == 'o')
			{
				count += 15;
			}
			if (ch[i] == 'O')
			{
				count = count + 41;
			}
			if (ch[i] == 'p')
			{
				count += 16;
			}
			if (ch[i] == 'P')
			{
				count = count + 42;
			}
			if (ch[i] == 'q')
			{
				count += 17;
			}
			if (ch[i] == 'Q')
			{
				count = count + 43;
			}
			if (ch[i] == 'r')
			{
				count += 18;
			}
			if (ch[i] == 'R')
			{
				count = count + 44;
			}
			if (ch[i] == 's')
			{
				count += 19;
			}
			if (ch[i] == 'S')
			{
				count = count + 45;
			}
			if (ch[i] == 't')
			{
				count += 20;
			}
			if (ch[i] == 'T')
			{
				count = count + 46;
			}
			if (ch[i] == 'u')
			{
				count += 21;
			}
			if (ch[i] == 'U')
			{
				count = count + 47;
			}
			if (ch[i] == 'v')
			{
				count += 22;
			}
			if (ch[i] == 'V')
			{
				count = count + 48;
			}
			if (ch[i] == 'w')
			{
				count += 23;
			}
			if (ch[i] == 'W')
			{
				count = count + 49;
			}
			if (ch[i] == 'x')
			{
				count += 24;
			}
			if (ch[i] == 'X')
			{
				count = count + 50;
			}
			if (ch[i] == 'y')
			{
				count += 25;
			}
			if (ch[i] == 'Y')
			{
				count = count + 51;
			}
			if (ch[i] == 'z')
			{
				count += 26;
			}
			if (ch[i] == 'Z')
			{
				count = count + 52;
			}
		}
		int flag = 0;
		for (int j = 2; j <= (count / 2); j++)
		{
			if (count % j == 0)
			{
				flag++;
				break;
			}
		}
		if (flag == 0)
		{
			cout << "It is a prime word." << endl;
		}
		else
		{
			cout << "It is not a prime word." << endl;
		}
		count = 0;
	}
}
