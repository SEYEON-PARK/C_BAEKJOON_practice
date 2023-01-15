/*
알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.

첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    char s[101]; // 배열 선언
    scanf("%s", s, sizeof(s)); // 사용자로부터 문자열 입력받기
    
    int count=0; // 변수 count 선언 및 초기화
    
    for(int i=0;s[i]!=NULL;i++) // i가 0부터 s[i]가 NULL이 되기 전까지 i를 1씩 증가시키며 반복
    {
        count++; // count에 1 더하기
    }
    
    printf("%d", count); // 결과 출력하기
    
    return 0;
}
