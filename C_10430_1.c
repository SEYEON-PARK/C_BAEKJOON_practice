/*
(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)

첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int A, B, C; // 변수 선언
    scanf("%d %d %d", &A, &B, &C); // 사용자로부터 세 개의 정수 입력받기
    
    printf("%d\n", (A+B)%C); // (A+B)%C 결과 출력하기
    printf("%d\n", ((A%C) + (B%C))%C); // ((A%C) + (B%C))%C 결과 출력하기
    printf("%d\n", (A*B)%C); // (AxB)%C 결과 출력하기
    printf("%d\n", ((A%C) * (B%C))%C); // ((A%C) x (B%C))%C 결과 출력하기
    
    return 0;
}
