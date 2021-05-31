/*
영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 
단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 
단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.

첫째 줄에 단어의 개수를 출력한다.
*/

#include <stdio.h>
#include <string.h> // strlen()을 사용하기 위해서

int main(void)
{
    int num=1; // 변수 선언 및 초기화
    char word[1000001]; // 배열 선언
    scanf("%[^\n]", word); // 한 줄 띄는 것을 제외하고 전부 입력받기
    int len=strlen(word); // len에 배열 word의 길이 대입
    
    for(int i=0;word[i]!=0;i++) // i가 0부터 word[i]가 0이 아닐 때까지 반복
    {   
        if(word[i]==32) // 만약, word[i]가 32(Space)라면
            num++; // num에 1 더하기
    }
    if(word[0]==32 && word[len-1]==32)
        printf("%d\n", num-2);
    else if(word[0]==32 || word[len-1]==32)
        printf("%d\n", num-1);
    else
        printf("%d\n", num);
    
    return 0;
}
