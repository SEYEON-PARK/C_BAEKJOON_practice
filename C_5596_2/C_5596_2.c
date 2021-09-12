#include <stdio.h>

int main(void)
{
    int S=0, T=0, score[2][4];
    
    for (int i=0;i<=1;i++)
    {
        scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
    }
    
    for (int j=0;j<=3;j++)
    {
        S+=score[0][j];
    }
    for (int j=0;j<=3;j++)
    {
        T+=score[1][j];
    }
    
    if(S>=T)
        printf("%d\n", S);
    else
        printf("%d\n", T);
    
    return 0;
}
