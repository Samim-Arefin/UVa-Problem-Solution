#include<bits/stdc++.h>
using namespace std;
int main()
{
    int limit,num[51],result,sum,avg,count=0;
    while(cin>>limit && limit>0)
    {
        result=sum=avg=0;
        for(int i=0;i<limit;i++)
        {
            cin>>num[i];
            sum+=num[i];
        }
        avg=sum/limit;
        for(int i=0;i<limit;i++)
        {
            if(num[i]>avg)
            {
                result+=(num[i]-avg);
            }
        }
        cout<<"Set #"<<++count<<endl;
        cout<<"The minimum number of moves is "<<result<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
