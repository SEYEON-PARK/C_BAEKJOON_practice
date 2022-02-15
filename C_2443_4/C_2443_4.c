/*
첫째 줄에는 별 2×N-1개, 둘째 줄에는 별 2×N-3개, ..., N번째 줄에는 별 1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

void fun(int num, int t) // 함수 fun() 선언
{
    if(t==0) // 만약, t가 0이라면
    {
        for(int x=num;x>0;x--) // x가 num부터 0보다 클 때까지 1씩 감소하며 반복
        {
            printf(" "); // 공백 출력하기
        }
    }
    else
    {
        for(int x=num;x>0;x--)
        {
            printf("*");
        }
    }
}


int main(void)
{
    int N, count=1;
    scanf("%d", &N);
    
    for(int i=0;i<N;i++)
    {
        fun(i, 0);
        fun(2*N-count, 1);
        count+=2;
        
        printf("\n");        
    }
    
    return 0;
}
