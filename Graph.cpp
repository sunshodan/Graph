#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> arr(20001);
vector<int> visited(20001,0);
vector<int> distances(20001,0);
void dfs(int node,int d)
{
    if(visited[node]==0)
    {
        visited[node]=1;
        distances[node]=d;
        for(auto it=arr[node].begin();it!=arr[node].end();it++)
            {
                dfs(*it,d+1);
            }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin>>t;
    while(t--)
    {
        int nodes;
        cin>>nodes;
        int edges;
        cin>>edges;
        for(int i=1;i<=edges;i++)
        {
            int a,b;
            cin>>a>>b;

            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        // for(int i=1;i<=nodes;i++)
        // {
        //     cout<<i<<": ";
        //     for(auto it=arr[i].begin();it!=arr[i].end();it++)
        //     {
        //         cout<<*it<<" ";
        //     }
        //     cout<<endl;
        // }
        // dfs(5);
        // int count=1;
        // for(int i=1;i<=nodes;i++)
        // {
        //     if(visited[i]==0)
        //         {
        //             dfs(i);
        //             count++;
        //         }
        // }
        // cout<<count<<endl;
        // int porposes;
        // cin>>porposes;
        // int girls[porposes];
        // for(int i=0;i<porposes;i++)
        // {
        //     cin>>girls[i];
        //     // dfs(girls[i],0);
        // }
        // dfs(1,0);
        // int min=distances[girls[0]];
        // for(int i=1;i<porposes;i++)
        // {
        //     if(distances[girls[i]]<min)
        //     {
        //         min=distances[girls[i]];
        //     }
        // }
        // int value=INT_MAX;
        // int flag=0;
        // for(int i=0;i<porposes;i++)
        // {
        //     if(distances[girls[i]]==min&&flag==0)
        //     {
        //         flag=1;
        //         value=girls[i];
        //     }
        //     else if(distances[girls[i]]==min)
        //     {
        //         if(girls[i]<value)
        //             value=girls[i];
        //     }
        // }
        // cout<<value<<endl;
        dfs(1,0);
        // cout<<distances[5];
        int flag=1;
        for(int i=1;i<=nodes;i++)
        {
            if(visited[i]==0)
            {
                flag=0;
                break;
            }
        }
        if(nodes-1==edges&&flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
