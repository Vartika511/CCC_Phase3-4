#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;++k)
    {
    int i,j;
    int n;
    long long x,y;
 
    //map to store value and its frequency
    map<int,int> mp;
    map<int, int> :: iterator it;
        cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
 
        if(mp.find(j)!=mp.end())
        {
            //increase frequency by 1
            mp[j]++;
        }
 
        else
        {
            mp[j]=1;
        }
    }
 
    n=mp.size();
 
    //array to memoize values 
    vector<pair<int,long long int> > dp(mp.size()+1);
 
    //initialize
    dp[0].first=0;
    dp[0].second=0;
 
    for(it=mp.begin(),i=1;it!=mp.end();i++,it++)
    {
        dp[i].first=it->first;
 
        x=it->first;
        y=it->second;
 
        dp[i].second=x*y;
    }
 
    //implement DP in bottom up manner    
    for(i=2;i<=n;i++)
    {
        //select previous value
        j=i-1;
 
        if(dp[i].first==(dp[j].first+1))
        {
            j--;
        }
 
        //now add
        dp[i].second+=dp[j].second;
 
        //compare
        dp[i].second=max(dp[i].second,dp[i-1].second);
    }
 
    //result
    cout<<dp[n].second<<endl;
    }
    return 0;
}
