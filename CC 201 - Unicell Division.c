#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int c=0; 
    while(n)
    {
        c+=n%2; 
        n=n/2;
    }
    printf("%d",c);
    return 0;
}
