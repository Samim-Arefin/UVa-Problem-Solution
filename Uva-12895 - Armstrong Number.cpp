#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long num,count,add,add2,sum=0,temp=1,digit=0;
    int t;
    cin>>t;
    while(t--)
    {
    cin>>num;
    add=add2=num;
    sum=0;
    count=0;
    while(add2>0)
    {
        add2/=10;
        count++;
    }
    while(add>0)
    {
        temp=1;
        digit=add%10;
        for(int i=1;i<=count;i++)
        {
            temp*=digit;
        }
        sum+=temp;
        add/=10;
    }
    if(num==sum)
    {
        cout<<"Armstrong"<<endl;
    }
    else
    {
     cout<<"Not Armstrong"<<endl;
    }
    }
    return 0;
}
