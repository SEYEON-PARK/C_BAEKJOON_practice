/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int starPrint = 1;
    
    for(int i=0;i<2*N-1;i++)
    {
        for(int j=0;j<starPrint;j++)
            printf("*");
        
        for(int k=0;k<2*(N-starPrint);k++)
            printf(" ");
        
        for(int j=0;j<starPrint;j++)
            printf("*");
        
        if(i < N-1)
            starPrint++;
        else
            starPrint--;
        
        printf("\n");
    }
    
    return 0;
}
