/*
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

첫째 줄에 정수 N(0 ≤ N ≤ 12)가 주어진다.

첫째 줄에 N!을 출력한다.
*/

#include <stdio.h>

int f(int n) // 함수 f 정의
{
    if(n>=2) // 만약 n이 2보다 크거나 같다면
        return n*f(n-1); // n*f(n-1)을 반환하기
    if(n==1 || n==0) // 만약, n이 1이거나 0이라면
        return 1; // 1을 반환하기
}

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    printf("%d\n", f(N)); // f(N)의 반환값 출력하기
    
    return 0;
}
