#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        string str;
    vector<char> c;
    vector<int> v;
    cin>>str;
    int sum=0,count=1;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            c.push_back(str[i]);
            if(count==0)
            {
              v.push_back(sum);
            }
            sum=0;
  
        }
        
       else if(str[i]>='0' && str[i]<='9')
        {
            sum=(sum*10)+str[i]-'0';
            count=0;
        }
    }
    if(sum>=1)
    {
        v.push_back(sum);
    }
    cout<<"Case "<<k<<": ";
    for(int i=0;i<v.size();i++)
    {
        char ch=c[i];
        for(int j=0;j<v[i];j++)
        {
            cout<<ch;
        }
    }
    cout<<endl;
    }
}