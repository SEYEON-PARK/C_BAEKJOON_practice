#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int i=1;i<=9;i++)
    {
        printf("%d * %d = %d\n", N, i, N*i);
    }
    
    return 0;
}
