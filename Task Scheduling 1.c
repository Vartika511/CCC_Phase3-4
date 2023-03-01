#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct job
{
    int deadLine;
    int profit;
};

int compare(const void *x,const void *y)
{
    return (((struct job*)y)->profit) - (((struct job*)x)->profit);
}

int main() 
{
    int testCases;
    scanf("%d",&testCases);//Reading the value of testcases
    
    while(testCases--)
    {
        int n;
        scanf("%d",&n);//Reading total number of job records
        
        struct job jobDetails[n];
        int i, maximumDeadline = 0;
        //Reading job deadline
        for(i=0;i<n;i++)
        {
            scanf("%d",&jobDetails[i].deadLine);
            if(maximumDeadline < jobDetails[i].deadLine)
                maximumDeadline = jobDetails[i].deadLine;
        }
        //Reading profit values
        for(i=0;i<n;i++)
            scanf("%d",&jobDetails[i].profit);
        
        qsort(jobDetails,n,sizeof(struct job),compare);
        
        int task[1001] = {0}, j, maxProfit = 0;
        for(i=0;i<n;i++)
        {
            if(task[jobDetails[i].deadLine] == 0)
            {
                task[jobDetails[i].deadLine] = jobDetails[i].profit;
                maxProfit += jobDetails[i].profit;
            }
                
            else
            {
                int temp = jobDetails[i].profit;
                for(j=jobDetails[i].deadLine;j>0;j--)
                {
                    if(task[j]<temp)
                    {
                        task[j] = temp;
                        maxProfit += temp;
                        break;
                    }
                }
            }
        }
        printf("%d\n",maxProfit);        
    }
    
    return 0;
}
