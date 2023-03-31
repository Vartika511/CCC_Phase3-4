#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n,c = 0;
char s[1005][1005];

void f(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=n || s[i][j]!='T')
        return;

    s[i][j] = 'W';
    f(i-1,j);
    f(i,j-1);
    f(i+1,j);
    f(i,j+1);
}

int main() 
{
    scanf("%d",&n);

    int i, j;

    for(i=0;i<n;i++)
        scanf("%s",s[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j] == 'T')
            {
                c++;
                f(i,j);
            }
        }
    }

    printf("%d",c);
    return 0;
}
