#include<bits/stdc++.h>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long num,num2;
    while(t--)
    {
        cin>>num>>num2;
      if(((num+num2)%2==0)&& ((num-num2)%2==0))
      {
          if((num+num>=0) && (num-num2>=0))
          {
           cout<<((num+num2)/2)<<" "<<((num-num2)/2)<<endl;
          }
          else
          {
          cout<<"impossible"<<endl;
          }
      }
      else if(((num+num2)%2!=0))
      {
          cout<<"impossible"<<endl;
      }
    }
    return 0;
}
