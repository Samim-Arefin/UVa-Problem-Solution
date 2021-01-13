#include<bits/stdc++.h>
using namespace std;
int main()
{
 long int a,b;
 int sum=0,count=0;
  while(cin>>a>>b && (a>0 && b>0))
 {
     count=0;
     sum=0;
   while(a>0 || b>0)
   {
       sum=(sum+a%10+b%10)/10;
       a/=10;
       b/=10;
       if(sum>0)
       {
        count++;
       }
   }
 if(count==0)
  {
  cout<<"No carry operation."<<endl;
  }
  else if(count==1)
  {
  cout<<count<<" carry operation."<<endl;
  }
  else
  {
  cout<<count<<" carry operations."<<endl;
  }
 }
 return 0;
}
