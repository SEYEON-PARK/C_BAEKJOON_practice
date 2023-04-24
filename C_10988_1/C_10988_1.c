/*
알파벳 소문자로만 이루어진 단어가 주어진다. 이때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.
팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다. 
level, noon은 팰린드롬이고, baekjoon, online, judge는 팰린드롬이 아니다.

첫째 줄에 단어가 주어진다. 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.

첫째 줄에 팰린드롬이면 1, 아니면 0을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    char s[101]; // 배열 선언
    scanf("%s", s); // 사용자로부터 문자열 입력받기
    int count=0; // 변수 선언 및 초기화
    
    for(int i=0;s[i]!=NULL;i++) // i가 0부터 s[i]가 NULL이 되기 전까지 i를 1씩 증가시키며 반복
    {
        count++; // count에 1 더하기
    }
    
    for(int i=0;i<=count/2;i++) // i가 0부터 count/2의 값과 작거나 같을 때까지 i를 1씩 증가시키며 반복
    {
        if(s[i]==s[count-i-1]) // 만약, s[i]의 값이 s[count-i-1]의 값과 같다면
            continue;
        else
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
    
}
