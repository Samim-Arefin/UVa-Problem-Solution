#include<iostream>
using namespace std;
int main()
{
    int line,i=1,num,count;
    while(1)
    {
        cin>>num;
        if(num<0)
        {
           break;
        }
        line=1;
        count=0;
        while(line<num)
        {
            line+=line;
            count++;
        }
        cout<<"Case "<<i<<": "<<count<<endl;
        i++;
    }
    return 0;
}
