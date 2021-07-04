/*
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

첫째 줄에 정수 N(0 ≤ N ≤ 12)가 주어진다.

첫째 줄에 N!을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, result=1; // 변수 선언 및 초기화
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=N;i>=1;i--) // i가 N부터 1보다 크거나 같을 때까지 1씩 감소하며 반복
    {
        result*=i; // result에 result*i 값 대입하기
    }
    
    printf("%d\n", result);
    
    return 0;
}
