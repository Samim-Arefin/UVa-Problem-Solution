#include<bits/stdc++.h>
using namespace std;
string fib[5000];
string add(string a,string b)
{
    string str;
    int carry=0;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a.size()>b.size())
    {
        for(int i=0;i<b.size();i++)
        {
          int num=a[i]-'0'+b[i]-'0'+carry;
          str.push_back((num%10)+'0');
          carry=num/10;
        }
        for(int i=b.size();i<a.size();i++)
        {
            int num=a[i]-'0'+carry;
            str.push_back((num%10)+'0');
            carry=num/10;
        }
        if(carry)
        {
            str.push_back(carry+'0');
        }
        reverse(str.begin(),str.end());
        return str;
    }
    else
    {
     
        for(int i=0;i<a.size();i++)
        {
          int num=a[i]-'0'+b[i]-'0'+carry;
          str.push_back((num%10)+'0');
          carry=num/10;
        }
        for(int i=a.size();i<b.size();i++)
        {
            int num=b[i]-'0'+carry;
            str.push_back((num%10)+'0');
            carry=num/10;
        }
        if(carry)
        {
            str.push_back(carry+'0');
        }
        reverse(str.begin(),str.end());
        return str;
    }
    
}
void fibbonacci()
{
    fib[0]='0';
    fib[1]='1';
    for(int i=2;i<=5000;i++)
    {
        fib[i]=add(fib[i-2],fib[i-1]);
    }
}
int main()
{
    fibbonacci();
int num;
while(cin>>num)
{
    cout<<fib[num]<<endl;
}
}