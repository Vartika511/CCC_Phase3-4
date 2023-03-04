#include <stdio.h>  
// Function that finds the largest sum contiguous array  
int maxSubArraySum(int a[], int size)  
{  
    int current_sum = 0, maximum_sum = 0;  
   
    for (int i = 0; i < size; i++)  
    {  
        current_sum = current_sum + a[i];  
        if (current_sum > maximum_sum)  
           maximum_sum = current_sum;  
   
        if (current_sum< 0)  
           current_sum = 0;  
    }  
    return maximum_sum;  
}  
// main method  
int main()  
{  
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);    
    int max_sum = maxSubArraySum(a, n);  
   printf("%d", max_sum);  
    return 0;  
}  
