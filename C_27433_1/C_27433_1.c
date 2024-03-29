/*
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

첫째 줄에 정수 N(0 ≤ N ≤ 20)이 주어진다.

첫째 줄에 N!을 출력한다.
*/

#include <stdio.h>
long long fac(int n) // 팩토리얼 함수 fac() 선언(20까지의 수가 매개변수로 전달될 수 있기 때문에 반환형을 long long으로 해줘야만 한다!)
{
    if(n <= 1) // 만약, n이 1보다 작거나 같다면
        return 1; // 1 반환하기
    else // n이 1보다 작거나 같지 않다면(크다면)
        return n * fac(n-1); // n * fac(n-1) 반환하기
}

int main(void)
{
    int n; // 변수 선언
    scanf("%d", &n); // 사용자로부터 정수 입력받기!
    
    printf("%lld", fac(n)); // 결과 출력하기!(long long형으로!)
    
    return 0;
}
