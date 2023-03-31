#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n, m, result[6];
int grid[1000][1000];

void ebolaCure(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=n || grid[i][j] == 0)
        return;
    
    if(m < grid[i][j])
        m = grid[i][j];
    grid[i][j] = 0;
    ebolaCure(i-1,j-1);
    ebolaCure(i-1,j);
    ebolaCure(i-1,j+1);
    ebolaCure(i,j-1);
    ebolaCure(i,j+1);
    ebolaCure(i+1,j-1);
    ebolaCure(i+1,j);
    ebolaCure(i+1,j+1);
}

int main() 
{
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&grid[i][j]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j] != 0)
            {
                m = 0;
                ebolaCure(i,j);
                result[m]++;
            }
        }
    }
    for(int i=2;i<6;i++)
        printf("%d ",result[i]);
    return 0;
}
