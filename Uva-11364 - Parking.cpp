#include<iostream>
using namespace std;
int main()
{
    int t,limit,num;
    cin>>t;
    while(t--)
    {
        cin>>limit;
        int max=0,min=99;
        while(limit--)
        {
            cin>>num;
            if(num>max)
            {
                max=num;
            }
            if(num<min)
            {
                min=num;
            }
        }
        cout<<(max-min)*2<<endl;
    }
    return 0;
}
