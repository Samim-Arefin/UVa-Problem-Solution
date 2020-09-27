#include<iostream>
using namespace std;
int main()
{
    long long num,digit,pos;
    while(cin>>num && num>=0)
    {
        pos=1;
        digit=0;
        while(num>0)
        {
            digit+=(num%3)*pos;
            num/=3;
            pos*=10;
        }
        cout<<digit<<endl;
    }
    return 0;
}
