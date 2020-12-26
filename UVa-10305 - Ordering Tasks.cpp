#include<bits/stdc++.h>
#define Max 101
std::vector<int> graph[Max];
std::bitset<Max> visit;
std::vector<int> v1;

void reset()
{
    for(int i=0;i<Max;i++)
    {
        graph[i].clear();
    }
}

void dfs(int source)
{
    visit[source]=true;

    for(auto child:graph[source])
    {
        if(visit[child]==false)
        {
            dfs(child);
        }
    }

     v1.push_back(source);
}


int main()
{
    int nodes,edges;
    while(std::cin>>nodes>>edges)
    {
        if(nodes==0 && edges==0)
        {
            break;
        }
        for(int i=0;i<edges;i++)
        {
            int u,v;
            std::cin>>u>>v;
            graph[u].push_back(v);
        }

        for(int i=1;i<=nodes;i++)
        {
            if(visit[i]==0)
            {
                dfs(i);
            }
        }

        reverse(v1.begin(),v1.end());
        int s=v1.size();
        for(int i=0;i<v1.size();i++)
        {
            std::cout<<v1[i];
            if(i+1<s)
            {
              std::cout<<" ";
            }
        }
        std::cout<<'\n';

        v1.clear();
        visit.reset();
        reset();
    }
}

