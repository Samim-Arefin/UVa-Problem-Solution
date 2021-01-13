#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    string str;
     while(cin>>num>>str,num>0)
    {
        int size=(str.size()/num);
      for(int i=0;i<str.size();i++)
    {
        if((i+1)%size==0)
        {
            int j=i;
           int diff=(i+1)-size;
            for(;j>=diff;j--)
            {
                cout<<str[j];
            }
        }
    }
    cout<<endl;
    }
}