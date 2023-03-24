#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

long min(long x,long y)
{
    return x<=y ? x : y;
}

long minMovesToDestroy(int arr[],int l,int r,int v)
{
    if(l > r)
        return 0;
    int result = INT_MAX;
    for(int i=l;i<=r;i++)
    {
        if(arr[i] == v)
        {
            result = minMovesToDestroy(arr,l,i-1,v) + minMovesToDestroy(arr,i+1,r,v);
            break;
        }
    }
    if(result == INT_MAX)
        result = 1 + minMovesToDestroy(arr,l,r,v+1);
    return min(result,r-l+1);
}

int main() 
{
    int testCases;
    scanf("%d",&testCases);
    
    while(testCases--)
    {
        int buildingCount;
        scanf("%d",&buildingCount);
        
        int heights[buildingCount], i;
        for(i=0;i<buildingCount;i++)
            scanf("%d",&heights[i]);
        
        printf("%ld\n",minMovesToDestroy(heights,0,buildingCount-1,0));
    }
    return 0;
}
