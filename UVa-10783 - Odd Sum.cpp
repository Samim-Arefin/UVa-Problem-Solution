#include<iostream>
using namespace std;
int main()
{
    int t,j=0;
    cin>>t;
    while(t--)
    {
    int num1,num3,sum=0;
    cin>>num1>>num3;
    for(int i=num1;i<=num3;i++)
    {
        if(i%2==1)
        {
            sum+=i;
        }
    }
    j++;
    cout<<"Case "<<j<<":"<<" "<<sum<<endl;
    }
    return 0;
}
