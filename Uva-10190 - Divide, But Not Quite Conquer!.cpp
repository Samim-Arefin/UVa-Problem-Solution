#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    
    unsigned long long a,b,num,count;
    while(cin>>a>>b)
    {
        num=1,count=0;
        if(b>1 && a>1)
      {
        while(num<a)
        {
        num=num*b;
        count++;
        }
        if(num==a)
        {
                int j=0;
            while(num!=0)
            {
               cout<<num;
               if(j<count)
                    {
                    cout<<" ";
                    }
               num=num/b;
                    j++;
            }
            cout<<endl;
        }
        else
        {
        cout<<"Boring!"<<endl;
        }
      }
        else
        {
        cout<<"Boring!"<<endl;
        }
    }
}