#include<bits/stdc++.h>
#define Max 50001
std::bitset<Max>arr;
std::vector<int>prime;
void sieve()
{
    arr[0]=arr[1]=true;
    for(int i=4;i<Max;i+=2)
    {
        arr[i]=true;
    }

    for(int i=3;i*i<Max;i+=2)
    {
        if(arr[i]==false)
        {
            for(int j=i*i; j<Max;j+=i+i)
            {
                arr[j]=true;
            }
        }
    }

    prime.push_back(2);
    for(int i=3;i<Max;i+=2)
    {
        if(arr[i]==false)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test;
    std::cin>>test;
    while(test--)
    {
        int num,primenumber;
        std::cin>>num;
        for(int i=0;i<prime.size();i++)
        {
            if((prime[i]<num) && ((prime[i]*2)>num))
            {
                primenumber=prime[i];
                break;
            }
        }
        std::cout<<primenumber<<'\n';

    }

}
