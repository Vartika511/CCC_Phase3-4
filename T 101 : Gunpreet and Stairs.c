#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    
    int grid[n+1],i;
    grid[0] = 0; grid[1] = 1; grid[2] = 2; grid[3] = 4;
    for(i=4;i<=n;i++)
        grid[i] = grid[i-1] + grid[i-2] + grid[i-3];
    
    printf("%d",grid[n]);
    
    return 0;
}
