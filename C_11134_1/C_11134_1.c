/*
철수는 쿠키를 세상에서 제일 좋아한다. 쿠키가 있는 곳이라면 철수도 반드시 있다고 할 정도이다. 철수는 날마다 자신이 가지고 있는 쿠키 중 C개를 먹는다.
C개 미만의 쿠키가 남아 있다면 전부 먹는다. 철수가 쿠키 N개를 가지고 있으면 며칠 동안 먹을 수 있는지 구하시오.

첫 번째 줄에는 테스트케이스의 개수 T가 주어진다. 그 다음 줄부터 T개의 줄에 테스트케이스가 한 줄씩 주어진다.
테스트케이스는 철수가 가진 쿠키의 개수 N과 날마다 먹는 쿠키의 개수 C로 이루어져 있다.

각 테스트케이스마다 한 줄씩 철수가 며칠 동안 쿠키를 먹을 수 있는지 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int T; // 변수 선언
    scanf("%d", &T); // 사용자로부터 정수 입력받기
    
    for(int i = 0; i < T; i++) // i가 0부터 T보다 작을 때까지 1씩 증가시키며 반복
    {
        int N, C, count = 0; // 변수 선언 및 초기화
        scanf("%d %d", &N, &C); // 사용자로부터 두 개의 정수 입력받기
        
        while(1) // 무한 반복
        {
            count = N / C; // count에 N을 C로 나눴을 때의 몫을 저장하기(정수 나눗셈)
            N %= C; // N에 N % C의 값 대입하기(N을 C로 나눴을 때의 나머지)
            
            if(N % C != 0) // 만약, N % C의 값이 0이 아니라면(나머지가 남아 있다면)
            {
                count++; // count에 1 더하기
                break; // 반복문 빠져 나가기
            }
            else // 만약, N % C의 값이 0이라면(나머지가 남아 있지 않다면)
            {
                break; // 반복문 빠져 나가기
            }
        }
        
        printf("%d\n", count); // 결과 출력하기
    }
    
    return 0;
}
