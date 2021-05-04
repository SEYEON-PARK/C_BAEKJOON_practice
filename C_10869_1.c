/*
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int A, B; // 변수 선언
    scanf("%d %d", &A, &B); // 사용자로부터 두 개의 정수 입력받기
    
    printf("%d\n", A+B); // 두 정수의 합 출력하기
    printf("%d\n", A-B);
    printf("%d\n", A*B);
    printf("%d\n", A/B);
    printf("%d\n", A%B);
    
    return 0;
}
