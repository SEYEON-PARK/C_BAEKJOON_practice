#include <stdio.h>

int main(void)
{
    int A[100];
    int B[100];
    int i=0;
    
    while(1)
    {
        scanf("%d %d", &A[i], &B[i]);
        
        if(A[i]==0 && B[i]==0)
            break;
        i++;
    }
    
    for(i=0;A[i]!=0 && B[i]!=0;i++)
    {
        printf("%d\n", A[i]+B[i]);
    }
    
    return 0;
}
