/*
첫째 줄과 N+2번째 줄에는 골뱅이 N+2개를 출력한다.
둘째 줄부터 N+1번째 줄까지는 예제 출력과 같은 방식으로 골뱅이 2개와 공백 N개를 출력한다.

첫째 줄에 정수 N(1 <= N <= 100)이 주어진다.

첫째 줄부터 N+2번째 줄까지 차례대로 골뱅이를 출력한다.
*/

#include <stdio.h>

void f1(int n); // 함수 f1()의 함수 원형 
void f2(int n);

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    f1(N); // 함수 f1() 호출
    f2(N);
    f1(N);
    
    return 0;
}

void f1(int n) // 함수 f1() 정의
{
    for(int i=0;i<n+2;i++) // i가 0부터 n+2보다 작을 때까지 1씩 증가하며 반복
    {
        printf("@"); // "@" 출력하기
    }
    printf("\n"); // 한 줄 띄기
}

void f2(int n) // 함수 f2() 정의
{
    for(int j=0;j<n;j++) // j가 0부터 n보다 작을 때까지 1씩 증가하며 반복
    {
        printf("@"); // "@" 출력하기
        for(int i=0;i<n;i++) // i가 0부터 n보다 작을 때까지 1씩 증가하며 반복
        {
            printf(" "); // 공백 출력하기
        }
        printf("@\n"); // "@" 출력 후, 한 줄 
    }
}
