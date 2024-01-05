//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N); // 정수 N 입력받기
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
           printf("*");
        }
        printf("\n");
    } // 조건에 맞게 별 출력하기
    
    return 0;
}
