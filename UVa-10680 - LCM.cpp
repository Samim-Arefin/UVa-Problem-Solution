#include <bits/stdc++.h>
#define Max 1000005
using namespace std;
bitset<Max> arr;
vector<int> v1;
void sieve()
{
    arr[0] = arr[1] = true;
    for (int i = 4; i < Max; i += 2)
    {
        arr[i] = true;
    }
    for (int i = 3; i * i < Max; i += 2)
    {
        if (arr[i] == false)
        {
            for (int j = i * i; j < Max; j += i + i)
            {
                arr[j] = true;
            }
        }
    }
    v1.push_back(2);
    for (int i = 3; i < Max; i += 2)
    {
        if (arr[i] == false)
        {
            v1.push_back(i);
        }
    }
}
int nonzerodigitfinder(unsigned long long num)
{
        int digitholder=0;
        while(num)
        {
           int digit=num%10;
           if(digit!=0)
           {
               digitholder=digit;
               break;
           }
           num/=10;
        }
    return digitholder;
}
unsigned long long LCM(unsigned long long num)
{
    unsigned long long lcm=1;
    for(int i=0;v1[i]<=num && i<v1.size();i++)
    {
        long long mul=v1[i];
        while(mul*v1[i]<=num)
        {
            mul*=v1[i];
        }
        lcm*=mul;
        lcm%=1000000000;
    }
    return lcm;
}
int main()
{
    sieve();
    int num;
    while(cin>>num,num>0)
    {
       cout<<nonzerodigitfinder(LCM(num))<<endl;
    }
}