/*
첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    
    for(int i=1;i<=N;i++)
    {
        for(int x=N-i;x>0;x--)
        {
            printf(" ");
        }
        for(int y=i*2-1;y>0;y--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
