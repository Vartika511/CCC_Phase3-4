#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int max(int x,int y){return x>=y?x:y;}
int min(int x,int y){return x<=y?x:y;}
int main() 
{
    int n;  scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    
    int max1=INT_MIN, min1=INT_MAX,max2=INT_MIN, min2=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        max1=max(max1,a[i]+i);
        min1=min(min1,a[i]+i);
        max2=max(max2,a[i]-i);
        min2=min(min2,a[i]-i);
    }
    int res=max(max1-min1,max2-min2);
    printf("%d",res);
    return 0;
}
