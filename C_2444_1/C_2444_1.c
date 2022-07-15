/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, j, minus=3;
    scanf("%d", &N);
    
    for(int i=0;i<2*N-1;i++)
    {
        if(i<=N-1)
        {
            for(j=0;j<N-i-1;j++)
            {
                printf(" ");
            }
            for(int k=0;k<2*(i+1)-1;k++)
            {
                printf("*");
            }
            
            printf("\n");
        }
        else
        {
            for(j=0;j<i-N+1;j++)
            {
                printf(" ");
            }
            for(int k=2*N-minus;k>0;k--)
            {
                printf("*");
            }
            minus++;
            minus++;
            
            printf("\n");
        }
        
        
    }
    
    return 0;
}
