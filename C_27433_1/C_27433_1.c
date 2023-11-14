/*
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

첫째 줄에 정수 N(0 ≤ N ≤ 20)이 주어진다.

첫째 줄에 N!을 출력한다.
*/

#include <stdio.h>
long long fac(int n) // 팩토리얼 함수 fac() 선언(20까지의 수가 매개변수로 전달될 수 있기 때문에 반환형을 long long으로 해줘야만 한다!)
{
    if(n <= 1)
        return 1;
    else
        return n * fac(n-1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    
    printf("%lld", fac(n));
    
    return 0;
}
