/*
첫째 줄에는 별 2×N-1개, 둘째 줄에는 별 2×N-3개, ..., N번째 줄에는 별 1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

void fun1(int num) // 함수 fun1() 선언
{
    for(int x=num;x>0;x--) // x는 num부터 0보다 클 때까지 1씩 감소하며 반복
    {
        printf(" "); // 공백 출력하기
    }
}

void fun2(int num) // 함수 fun2() 선언
{
    for(int x=num;x>0;x--) // x는 num부터 0보다 클 때까지 1씩 감소하며 반복
    {
        printf("*"); // "*" 출력하기
    }
}

int main(void)
{
    int N, count=1; // 변수 선언 및 초기화
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 1씩 증가하며 반복
    {
        fun1(i); // i를 인수로 하여 fun1() 함수 호출 
        fun2(2*N-count); // 2*N-count를 인수로 하여 fun2() 함수 호출
        count+=2; // count에 count+2 대입
        
        printf("\n"); // 한 줄 띄기
    }
    
    return 0;
}
