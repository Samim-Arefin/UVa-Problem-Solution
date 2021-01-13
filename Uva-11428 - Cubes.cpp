#include<iostream>
using namespace std;
int main()
{
    int n,count,x,y;
    while(cin>>n)
    {
        count=0;
        if(n==0)
        {
            break;
        }
        for(int i=0;i<60;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if((i*i*i)-(j*j*j)==n)
                   {
                       x=i;
                       y=j;
                       count=1;
                       break;
                   }
            }
            if(count==1)
            {
                break;
            }
        }
        if(count!=1)
        {
        cout<<"No solution"<<endl;
        }
        else
        {
        cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
