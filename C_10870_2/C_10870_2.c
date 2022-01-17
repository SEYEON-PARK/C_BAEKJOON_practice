/*
*/

#include <stdio.h>

void f(int i, int *b)
{
    b[i]=b[i-2]+b[i-1];
}

int main(void)
{
    int N, i=2;
    scanf("%d", &N);
    int B[21]={0, 1};
    
    if(N==0)
    {
        printf("0");
        return 0;
    }
    else if(N==1)
    {
        printf("1");
        return 0;
    }
    
    for(int j=1;j<N;j++)
    {
        f(i++, B);
    }
    printf("%d", B[N]);
    return 0;
}
