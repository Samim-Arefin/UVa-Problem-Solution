N#include<bits/stdc++.h>
using namespace std;
int main()
{
    int result,num,k;
    while(cin>>num>>k)
    {
        result=num;
        while(num>=k)
        {
          result+=num/k;
          num=num/k+num%k;
        }
        cout<<result<<endl;
    }
    return 0;
}
