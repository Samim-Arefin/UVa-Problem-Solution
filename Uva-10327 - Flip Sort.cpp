#include<bits/stdc++.h>
using namespace std;
int main()
{
    int limit,count,temp;
    while(cin>>limit)
    {
        int arr[limit];
        count=0;
        for(int i=0;i<limit;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<limit;i++)
        {
            for(int j=0;j<limit-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    count++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
}
