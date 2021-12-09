/*
자연수 N이 주어졌을 때, 2의 제곱수면 1을 아니면 0을 출력하는 프로그램을 작성하시오.

첫째 줄에 N(1 ≤ N ≤ 230)이 주어진다.

N이 2의 제곱수면 1을 아니면 0을 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int N; // 정수 변수 선언
    double i=0; // 실수 변수 선언
    scanf("%d", &N); //
    
    while(1)
    {
        if(N<pow(2.0, i))
            break;
        if(N==pow(2.0, i))
        {
            printf("1\n");
            return 0;
        }
        i++;
    }
    printf("0\n");
    return 0;
}
