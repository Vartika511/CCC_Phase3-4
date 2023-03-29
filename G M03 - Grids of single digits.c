#include<stdio.h>
#include<stdlib.h>

int compare(const void *x,const void *y)
{
    return *(int*)x - *(int*)y;
}


int main()
{
    int tc;
    scanf("%d",&tc);
    
    while(tc--)
    {
        int sudoku[9][9], flag = 1;
        int i, j;
        for(i=0;i<9;i++)
        {
            int sum = 45, t[9];
            for(j=0;j<9;j++)
            {
                scanf("%d",&sudoku[i][j]);
                sum -= sudoku[i][j];
                t[j] = sudoku[i][j];
            }
            if(sum)
            {
                flag = 0;
                break;
            }
            qsort(t,9,sizeof(int),compare);
            if(t[0]==1 && t[1]==2 && t[2]==3 && t[3]==4 && t[4]==5 && t[5]==6 && t[6]==7 && t[7]==8 && t[8]==9);
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            printf("inValid\n");
        else
        {
            for(i=0;i<9;i++)
            {
                int sum = 45, t[9], c[9];
                for(j=0;j<9;j++)
                {
                    t[j] = sudoku[j][i];
                    sum = sum - sudoku[j][i];
                    c[j] = sudoku[(i / 3) * 3 + j / 3][i * 3 % 9 + j % 3];
                }
                if(sum)
                {
                    flag = 0;
                    break;
                }
                qsort(t,9,sizeof(int),compare);
                qsort(c,9,sizeof(int),compare);
                if(t[0]==1 && t[1]==2 && t[2]==3 && t[3]==4 && t[4]==5 && t[5]==6 && t[6]==7 && t[7]==8 && t[8]==9 && c[0]==1 && c[1]==2 && c[2]==3 && c[3]==4 && c[4]==5 && c[5]==6 && c[6]==7 && c[7]==8 && c[8]==9);
                else
                {
                    flag = 0;
                    break;
                }
            }
            flag ? printf("Valid\n") : printf("inValid\n");
        }
    }
    return 0;
}
