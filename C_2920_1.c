#include <stdio.h>

int main(void)
{
    int A[8];
    for(int i=0;i<8;i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i=0, a=1;i<8;i++)
    {
        if(A[0]==1)
        {
            if(A[i]!=a)
            {
                printf("mixed\n");
                break;
            }
            else if(i==7)
            {
                printf("ascending\n");
            }
            a++;
        }
        else if(A[0]!=8)
        {
            printf("mixed\n");
            break;
        }
    }
    for(int i=0, a=8;i<8;i++)
    {
        if(A[0]==8)
        {
            if(A[i]!=a)
            {
                printf("mixed\n");
                break;
            }
            else if(i==7)
            {
                printf("descending\n");
            }
            a--;
        }
    }
}
