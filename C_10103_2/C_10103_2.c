/*
*/

#include <stdio.h>

int main(void)
{
    int A=100, B=100;
    int roundCount, a, b;
    
    scanf("%d", &roundCount);
    
    for(int i=0;i<roundCount;i++)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
            B-=a;
        else if(b>a)
            A-=b;
    }
    
    printf("%d\n", A);
    printf("%d", B);
    
    return 0;
}
