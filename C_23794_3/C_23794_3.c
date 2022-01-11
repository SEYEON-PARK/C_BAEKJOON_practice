/*
첫째 줄과 N+2번째 줄에는 골뱅이 N+2개를 출력한다.
둘째 줄부터 N+1번째 줄까지는 예제 출력과 같은 방식으로 골뱅이 2개와 공백 N개를 출력한다.

첫째 줄에 정수 N(1 <= N <= 100)이 주어진다.

첫째 줄부터 N+2번째 줄까지 차례대로 골뱅이를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    
    f1(N);
    f2(N);
    f1(N);
    
    return 0;
}

void f1(int n)
{
    for(int i=0;i<n+2;i++)
    {
        printf("@");
    }
    printf("\n");
}

void f2(int n)
{
    for(int j=0;j<n;j++)
    {
        printf("@");
        for(int i=0;i<n;i++)
        {
            printf(" ");
        }
        printf("@\n");
    }
}
