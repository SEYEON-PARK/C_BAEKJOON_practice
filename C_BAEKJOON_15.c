#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    
    printf("%0.9lf", a/b);
    
    return 0;
} // 백준 사이트에 제출해서 맞은 답안이다.
