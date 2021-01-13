#include<bits/stdc++.h>
using namespace std;
long long divide(long long num)
{
    long long sum=0;
   for(int i=1;i*i<=num;i++)
   {
       if(i*i==num)
       {
           sum+=i;
       }
       else if(num%i==0)
       {
            long long temp=num/i;
            if(temp==num)
            {
                sum+=i;
            }
            else
            {
                sum+=i+temp;
            }
            
       }
       
   }
   return sum;
}
long long spacegenerator(long long num)
{
 int count=0;
  while(num>0)
  {
      num/=10;
      count++;
  }
  return count;
}
int main()
{
    long long num;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>num)
    {
        if(num==0)
        {
            cout<<"END OF OUTPUT"<<endl;
        }
        else if(divide(num)==num && num!=1)
        {
            for(int i=spacegenerator(num);i<5;i++)
            {
                cout<<" ";
            }
            cout<<num<<"  PERFECT"<<endl;
        }
        else if(divide(num)<=num)
        {
            
            for(int i=spacegenerator(num);i<5;i++)
            {
                cout<<" ";
            }
            cout<<num<<"  DEFICIENT"<<endl;
        }
        else
        {
            
            for(int i=spacegenerator(num);i<5;i++)
            {
                cout<<" ";
            }
           cout<<num<<"  ABUNDANT"<<endl;
        }
        
    }

}