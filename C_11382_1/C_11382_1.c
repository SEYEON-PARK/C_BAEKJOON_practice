/*
꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!

첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 1012)이 공백을 사이에 두고 주어진다.

A+B+C의 값을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    long a, b, c; // 변수 선언
    scanf("%ld %ld %ld", &a, &b, &c); // 사용자로부터 세 개의 정수 입력받기(자료형이 long이므로, 형식지정자는 '%ld'로 해야 한다.)
    
    printf("%ld", a+b+c); // 결과 출력하기
    
    return 0;
}
