#include<bits/stdc++.h>
#define Max 20000001
std::vector<int>v1;
std::vector<std::pair<int,int>>prime;
std::bitset<Max>arr;
void sieve()
{
    arr[0]=true;
    arr[1]=true;
    for(int i=4;i<Max;i+=2)
    {
        arr[i]=true;
    }
    for(int i=3;i*i<Max;i+=2)
    {
        if(arr[i]==false)
        {
            for(int j=i*i;j<Max;j+=i+i)
            {
                arr[j]=true;
            }
        }
    }
    v1.push_back(2);
    for(int i=3;i<Max;i+=2)
    {
        if(arr[i]==false)
        {
            v1.push_back(i);
        }
    }
    for(int i=0;i<v1.size();i++)
    {
        if((v1[i+1]-v1[i])==2)
        {
            prime.push_back({v1[i],v1[i+1]});
        }
    }
}
int main()
{
    sieve();
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int num;
    while(std::cin>>num)
    {
        std::cout<<"("<<prime[num-1].first<<", "<<prime[num-1].second<<")\n";
    }
}
