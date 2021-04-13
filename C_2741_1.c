
#include <stdio.h>

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // N 입력받기
    
    for(int i=1;i<=N;i++) // i를 1부터 N까지 1씩 증가시키면서
    {
        printf("%d\n", i); // i 출력하기
    } 
    
    return 0;
}
