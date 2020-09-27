#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num;
    cin>>t;
    while(t--)
  {
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++)
        {
        cin>>arr[i];
        }
        int temp,count=0;
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num-i-1;j++)
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
    cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
return 0;
}
