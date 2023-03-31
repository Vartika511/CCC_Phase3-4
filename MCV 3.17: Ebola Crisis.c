#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n, c1 = 0;
int grid[1000][1000];
int result[6][2];

void modyDir(int i,int j)
{
    if(i>0 && j>0 && grid[i-1][j-1]==1)
    {
        c1++;
        grid[i-1][j-1] = 0;
    }
    
    if(i>0 && grid[i-1][j]==1)
    {
        c1++;
        grid[i-1][j] = 0;
    }
    
    if(i>0 && j<n-1 && grid[i-1][j+1]==1)
    {
        c1++;
        grid[i-1][j+1] = 0;
    }
    
    if(j>0 && grid[i][j-1]==1)
    {
        c1++;
        grid[i][j-1] = 0;
    }
    
    if(j<n-1 && grid[i][j+1]==1)
    {
        c1++;
        grid[i][j+1] = 0;
    }
    
    if(i<n-1 && j>0 && grid[i+1][j-1]==1)
    {
        c1++;
        grid[i+1][j-1] = 0;
    }
    
    if(i<n-1 && grid[i+1][j]==1)
    {
        c1++;
        grid[i+1][j] = 0;
    }
    
    if(i<n-1 && j<n-1 && grid[i+1][j+1]==1)
    {
        c1++;
        grid[i+1][j+1] = 0;
    }
}

void find(int x)
{
    int c = 0; c1= 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j] == x)
            {
                c++;
                modyDir(i,j);
            }
        }
    }
    result[x][0] = c;
    result[x][1] = c1;
}

int main() 
{
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&grid[i][j]);
    
    for(int i=5;i>=2;i--)
        find(i);
    
    for(int i=2;i<=5;i++)
        printf("%d ",result[i][0]);
    printf("\n");
    for(int i=2;i<=5;i++)
        printf("%d ",result[i][1]);
    return 0;
}
