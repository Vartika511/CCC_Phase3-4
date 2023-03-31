#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int *v;
int min=1001,max=0,c=1,n;
void dfs(int i,int a[][n])
{
    v[i]=1;
    for(int j=0;j<n;j++)
    {
        if(v[j]==0&&a[i][j]==1){
            c++;
            dfs(j,a);
          }
    }
    if(c<min)min=c;
    if(c>max)max=c;
    
}
int main() {
    int m;
    scanf("%d%d",&n,&m);
    v=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        v[i]=0;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        
        a[x-1][y-1]=1;
        a[y-1][x-1]=1;
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0){c=1;dfs(i,a);x++;}
    }
    if(c<min)min=c;
    if(c>max)max=c;
    if(x==1)min=max;
    printf("%d %d %d",max,min,x);
        return 0;
}
