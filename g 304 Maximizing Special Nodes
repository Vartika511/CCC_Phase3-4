#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector <int> g[1005],rg[1005];
int n;
int solve(vector<int>G[])
{
    int a[1005]={0};
    for(int i=1;i<=n;i++)
    {
        for(auto node:G[i]){
        if(G[node].size()==0)
            a[i]=1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        ans+=a[i];
    return ans;
}

int main() {
    int e;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        rg[y].push_back(x);
    }
    int a=solve(g);
    int b=solve(rg);
    cout<<max(a,b);
    return 0;
}
