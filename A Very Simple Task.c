#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isp(int n){
    if(n==1)
        return 0;
    if(n<=3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(int i=5;i<=(int)sqrt(n);i+=6)
        if(n%i==0 || n%(i+2)==0)
            return 0;
    return 1;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++)
            if(isp(i))
                printf("%d\n",i);
        printf("\n");
    }
    return 0;
}
