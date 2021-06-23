/*
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

1부터 n까지 합을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int n, N, sum=0; // 변수 선언 및 초기화
    scanf("%d", &n); // 사용자로부터 정수 입력받기
    N=n; // N에 n 대입하기
    
    for(int i=0;i<n;i++) // i가 0부터 n이 되기 전까지 1씩 증가하며 반복
    {
        sum+=N--; // sum에 sum+N을 대입한 후, N에서 1 빼기
    }
    
    printf("%d\n", sum); // 결과 출력하기
    
    return 0;
}


