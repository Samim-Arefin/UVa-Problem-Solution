#include<iostream>
using namespace std;
int main()
{
    long int num,add,sum=0,count;
    int t,rev;
    cin>>t;
    while(t--)
    {
        cin>>num;
        add=num;
        count=0;
        while(1)

        {
            sum=0;
            while(add>0)
            {
                sum=sum*10+add%10;
                add/=10;
            }
            if(sum==num)
            {
                break;
            }
            else
            {
                add=sum+num;
                num=sum+num;
                count++;
            }
        }
        cout<<count<<" "<<num<<endl;
    }
    return 0;
}
