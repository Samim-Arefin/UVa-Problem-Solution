#include<bits/stdc++.h>
#define Max 100005
using namespace std;
long long phi[Max];
unsigned long long precalculate[Max];
void ETF()
{
    for(long long i=1;i<Max;i++)
    {
        phi[i]=i;
    }
    for(long long i=2;i<Max;i++)
    {
        if(phi[i]==i)
        {
            for(long long j=i;j<Max;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
}
void calculate()
{
    ETF();
    for(long long i=1;i<Max;i++)
    {
        for(long long j=2;i*j<Max;j++)
        {
            precalculate[i*j]+=i*phi[j];
        }
    }
    for(long long i=2;i<Max;i++)
    {
        precalculate[i]+=precalculate[i-1];
    }
}
int main()
{
    calculate();
    long long num;
    while(cin>>num,num>0)
    {
        cout<<precalculate[num]<<endl;
    }
}