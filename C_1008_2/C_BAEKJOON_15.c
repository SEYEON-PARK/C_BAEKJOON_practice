#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b); // 두 개의 실수 입력받기
    
    printf("%0.9lf", a/b); // 결과 출력하기
    
    return 0;
} // 백준 사이트에 제출해서 맞은 답안이다.
