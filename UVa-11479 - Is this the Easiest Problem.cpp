#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a<=0 || b<=0 || c<=0)
        {
            cout<<"Case "<<i<<":"<<" "<<"Invalid"<<endl;
        }
        else if(a+b<=c || b+c<=a || c+a<=b)
        {
            cout<<"Case "<<i<<":"<<" "<<"Invalid"<<endl;
        }
        else if(a==b && b==c)
        {
            cout<<"Case "<<i<<":"<<" "<<"Equilateral"<<endl;
        }
        else if(a==b || b==c || c==a)
        {
            cout<<"Case "<<i<<":"<<" "<<"Isosceles"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<":"<<" "<<"Scalene"<<endl;
        }
    }
    return 0;

}
