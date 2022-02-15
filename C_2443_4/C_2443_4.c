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
    else // t가 0이 아니라면
    {
        for(int x=num;x>0;x--) // x가 num부터 0보다 클 때까지 1씩 감소하며 반복
        {
            printf("*"); // "*" 출력하기
        }
    }
}


int main(void)
{
    int N, count=1; // 변수 선언 및 초기화
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 1씩 증가하며 반복
    {
        fun(i, 0); // i의 값과 0을 인수로 하여 함수 fun() 호출
        fun(2*N-count, 1); // 2*N-count의 값과 1을 인수로 하여 함수 fun() 호출
        count+=2; // count에 count+2 값 대입하기
        
        printf("\n"); // 한 줄 띄기
    }
    
    return 0;
}
