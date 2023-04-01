#include <stdio.h>
#include <math.h>
 
int is_prime(int n);
 
int main()
{
    int t,m,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        for(i=m;i<=n;i++)
        {
            if(is_prime(i))
            {
                printf("%d\n",i);
            }
        }
        if(t)
            printf("\n");
    }
    return 0;
}
 
int is_prime(int n)
{
    int i,sq;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    sq = (int)sqrt(n);
    for(i=3;i<=sq;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
