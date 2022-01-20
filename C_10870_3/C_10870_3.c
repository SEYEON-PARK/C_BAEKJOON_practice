/*
피보나치 수는 0과 1로 시작한다. 0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1이다. 그 다음 2번째 부터는 바로 앞 두 피보나치 수의 합이 된다.
이를 식으로 써보면 Fn = Fn-1 + Fn-2 (n ≥ 2)가 된다.
n=17일때 까지 피보나치 수를 써보면 다음과 같다.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성하시오.

첫째 줄에 n이 주어진다. n은 20보다 작거나 같은 자연수 또는 0이다.

첫째 줄에 n번째 피보나치 수를 출력한다.
*/

#include <stdio.h>

void f(int i, int *b); // f() 함수의 함수 원형

int main(void)
{
    int N, i=2; // 정수 선언 및 초기화
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    int B[21]={0, 1}; // 배열 선언 및 초기화
    
    if(N==0)
    {
        printf("0");
        return 0;
    }
    else if(N==1)
    {
        printf("1");
        return 0;
    }
    
    for(int j=1;j<N;j++)
    {
        f(i++, B);
    }
    printf("%d", B[N]);
    return 0;
}

void f(int i, int *b)
{
    b[i]=b[i-2]+b[i-1];
}
