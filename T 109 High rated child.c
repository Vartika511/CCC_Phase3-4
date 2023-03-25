#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n], brr[n], i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        brr[i] = 1;
    }
    for(i=0;i<n-1;i++)
        if(arr[i] < arr[i+1])
            brr[i+1] = brr[i]+1;

    for(i=n-1;i>0;i--)
        if(arr[i]<arr[i-1] && brr[i-1]<brr[i]+1)
            brr[i-1] = brr[i]+1;
    int result = 0;
    for(i=0;i<n;i++)
        result += brr[i];
    printf("%d",result);
    return 0;
}
