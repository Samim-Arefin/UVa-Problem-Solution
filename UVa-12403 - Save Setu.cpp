#include<bits/stdc++.h>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  string str;
  int num,sum=0,t;
  cin>>t;
  while(t--)
  {
      cin>>str;
      if(str=="donate")
      {
          cin>>num;
          sum+=num;
      }
      else if(str=="report")
      {
          cout<<sum<<endl;
      }
  }
  return 0;
}
