/*
단어 S와 정수 i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램을 작성하시오.

첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 S가 주어진다. 단어의 길이는 최대 1,000이다.
둘째 줄에 정수 i가 주어진다. (1 <= i <= 절댓값 S)

S의 i번째 글자를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    char s[1001]; // 배열 선언
    int i; // 변수 선언
    
    scanf("%s", s); // 사용자로부터 단어(문자열) 입력받기
    scanf("%d", &i); // 사용자로부터 정수 입력받기(몇 번째 글자를 출력할 건지)
    
    printf("%c", s[i-1]); // 결과 출력하기
    
    return 0;
}
