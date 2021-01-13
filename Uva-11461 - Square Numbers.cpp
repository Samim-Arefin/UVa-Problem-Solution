#include<bits/stdc++.h>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int num,num2;
    int count=0;
    while((cin>>num>>num2) && (num>0 && num2>0))
    {
        count=0;
        for(int i=num;i<=num2;i++)
        {
            int temp=sqrt(i);
            if((temp<=num2) && (temp*temp)==i)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
