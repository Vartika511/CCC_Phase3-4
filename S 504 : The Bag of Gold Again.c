#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a, int b) { return (a > b)? a : b; } 
  
// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 
   int i, w; 
   int K[n+1][W+1]; 

   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
} 
int main() 
{ 
    int val[10000],wt[10000],n,t,W; 
    scanf("%d",&t);
    for(int i=1;i<=t;++i)
    {
        scanf("%d %d",&n,&W);
        for(int j=0;j<n;++j)
        {
           scanf("%d %d",&wt[j],&val[j]);
        }
        printf("%d\n", knapSack(W, wt, val, n)); 
    }
    
    return 0; 
}
