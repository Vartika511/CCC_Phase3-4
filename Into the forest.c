#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int n,m;
int adj[1001][1001], result[1001];
int min = INT_MAX, max = INT_MIN, c = 1;

void dfs(int head)
{
    result[head] = 1;
    for(int i=0;i<n;i++)
    {
        if(adj[head][i]==1 && result[i]==0)
        {
            c++;
            dfs(i);
        }
    }
    if(c < min)     min = c;
    if(c > max)     max = c;
}

int main() 
{
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        
        adj[x-1][y-1] = 1;
        adj[y-1][x-1] = 1;
    }
    
    int x = 0;
    for(int i=0;i<n;i++)
    {
        if(result[i] == 0)
        {
            c = 1;
            dfs(i);
            x++;
        }
    }
    if(x==1)      min=max;
    printf("%d %d %d",max,min,x);
    
    return 0;
}
