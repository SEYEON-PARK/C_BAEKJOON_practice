/*
자연수 N이 주어졌을 때, 2의 제곱수면 1을 아니면 0을 출력하는 프로그램을 작성하시오.

첫째 줄에 N(1 ≤ N ≤ 230)이 주어진다.

N이 2의 제곱수면 1을 아니면 0을 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#include <math.h> // pow()를 사용하기 위해서

int main(void)
{
    int N; // 정수 변수 선언
    double i=0; // 실수 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    while(1) // 무한 반복
    {
        if(N<pow(2.0, i)) // 만약, N보다 2.0의 i 제곱이 더 크다면 
            break; // 가장 가까운 반복문을 빠져 나가기
        if(N==pow(2.0, i)) // 만약, N과 2.0의 i 제곱이 같다면
        {
            printf("1\n"); // 1 출력하기
            return 0; // 0을 반환하고 프로그램 종료하기
        }
        i++; // i에 1 더하기
    }
    printf("0\n"); // 0 출력하기
    return 0;
}
