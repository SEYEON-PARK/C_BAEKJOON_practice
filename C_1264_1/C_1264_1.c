/*
영문 문장을 입력받아 모음의 개수를 세는 프로그램을 작성하시오. 모음은 'a', 'e', 'i', 'o', 'u'이며 대문자 또는 소문자이다.

입력은 여러 개의 테스트 케이스로 이루어져 있으며, 각 줄마다 영어 대소문자, ',', '.', '!', '?', 공백으로 이루어진 문장이 주어진다. 각 줄은 최대 255글자로 이루어져 있다.
입력의 끝에는 한 줄에 '#' 한 글자만이 주어진다.

각 줄마다 모음의 개수를 세서 출력한다.
*/

#include <stdio.h>
#include <ctype.h> // toupper()을 사용하기 위해서

int main(void)
{
    while(1) // 무한 반복
    {
        char s[256]; // 배열 선언
        gets(s); // 사용자로부터 문자열 입력받기
        
        if(s[0]=='#')
            break;
        
        int count=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(isalpha(s[i]))
            {
                char a=toupper(s[i]);
                if(a=='A' || a=='E' || a=='O' || a=='I' || a=='U')
                    count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
