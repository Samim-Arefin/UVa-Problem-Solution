#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool a,b,c;
    while(cin>>a>>b>>c)
    {
      if(a==b && b==c)
      {
          cout<<"*"<<endl;
      }
      else if(a!=b && b==c)
      {
          cout<<"A"<<endl;
      }
      else if(b!=c && c==a)
      {
          cout<<"B"<<endl;
      }
      else if(c!=a && a==b)
      {
          cout<<"C"<<endl;
      }
    }
    return 0;
}
