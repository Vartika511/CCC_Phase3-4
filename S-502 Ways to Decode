#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long m=1e9+7;
long  numDecodings(char* A)
{
int *count,i,n;    
if(!A)    return 0;    
n=strlen(A);    
if(n==1)    return 1;    
count = (int*)malloc(sizeof(int)*(n+1));    
count[0] = count[1] = 1;     
for (i = 2; i <= n; i++)    
{        
count[i] = 0; 
if (A[i-1] >= '0')    count[i] = count[i-1]; 
if (A[i-2]=='0'||A[i-2] == '1' || (A[i-2] == '2' && A[i-1] < '6') ) count[i] = (count[i]+count[i-2])%m;    
}    
return count[n]%m;}

int main()
{
    char ch[1000005];
    scanf("%s",ch);
    long x=numDecodings(ch);
    printf("%ld",x);
}
