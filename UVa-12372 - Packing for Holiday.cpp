#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int l,w,h;
        while(cin>>l>>w>>h)
        {
            if(l<=20 && w<=20 && h<=20)
            {
                cout<<"Case "<<++count<<":"<<" "<<"good"<<endl;
            }
            else
            {
                cout<<"Case "<<++count<<":"<<" "<<"bad"<<endl;
            }
        }
    }
    return 0;
}
