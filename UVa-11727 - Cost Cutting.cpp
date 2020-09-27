#include<iostream>
using namespace std;
int main()
{
    int t,num=0;
    cin>>t;
    while(t--)
    {
        num++;
        int first,second,third;
        cin>>first>>second>>third;
        if((first>second && first<third)|| (first>third && first<second))
        {
            cout<<"Case "<<num<<":"<<" "<<first<<endl;
        }
               else if((second>first && second<third)|| (second>third && second<first))
        {
            cout<<"Case "<<num<<":"<<" "<<second<<endl;
        }
        else
        {
            cout<<"Case "<<num<<":"<<" "<<third<<endl;
        }
    }
    return 0;

}
