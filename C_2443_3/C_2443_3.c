/*
첫째 줄에는 별 2×N-1개, 둘째 줄에는 별 2×N-3개, ..., N번째 줄에는 별 1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

void fun1(int num);
void fun2(int num);

int main(void)
{
    int N, count=1;
    scanf("%d", &N);
    
    for(int i=0;i<N;i++)
    {
        fun1(i);
        fun2(2*N-count);
        count+=2;
        
        printf("\n");        
    }
    
    return 0;
}

void fun1(int num)
{
    for(int x=num;x>0;x--)
    {
        printf(" ");
    }
}

void fun2(int num)
{
    for(int x=num;x>0;x--)
    {
        printf("*");
    }
}
