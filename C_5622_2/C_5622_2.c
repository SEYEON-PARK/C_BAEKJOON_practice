/*
상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.
(그림)
전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다. 
숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.
숫자 1을 걸려면 총 2초가 필요하다. 1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.
상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다. 즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다. 예를 들어, UNUCIC는 868242와 같다.
할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.

첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.

첫째 줄에 다이얼을 걸기 위해서 필요한 최소 시간을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    char s[16]; // 문자열 선언
    scanf("%s", s, sizeof(s)); // 사용자로부터 문자열 입력받기
    int i=0, number=0; // 정수 선언 및 초기화
    
    while(s[i]!=NULL) // s[i]가 NULL이 아니라면 계속 반복
    {
        if((int)s[i]==65 || (int)s[i]==66 || (int)s[i]==67) // 만약 (int)s[i]가 65와 같거나 66과 같거나 67과 같다면
        {
            number+=3; // number에 number+3 값 대입하기
        }
        else if((int)s[i]==68 || (int)s[i]==69 || (int)s[i]==70) // 앞 조건에 맞지 않고, (int)s[i]가 68과 같거나 69와 같거나 70과 같다면
        {
            number+=4; // number에 number+4 값 대입하기
        }
        else if((int)s[i]==71 || (int)s[i]==72 || (int)s[i]==73) // 앞 조건들에 맞지 않고, (int)s[i]가 71과 같거나 72와 같거나 73과 같다면
        {
            number+=5; // number에 number+5 값 대입하기
        }
        else if((int)s[i]==74 || (int)s[i]==75 || (int)s[i]==76) // 앞 조건들에 맞지 않고, (int)s[i]가 74와 같거나 75와 같거나 76과 같다면
        {
            number+=6; // number에 number+6 값 대입하기
        }
        else if((int)s[i]==77 || (int)s[i]==78 || (int)s[i]==79) // 앞 조건들에 맞지 않고, (int)s[i]가 77과 같거나 78과 같거나 79와 같다면
        {
            number+=7; // number에 number+7 값 대입하기
        }
        else if((int)s[i]==80 || (int)s[i]==81 || (int)s[i]==82 || (int)s[i]==83) // 앞 조건들에 맞지 않고, (int)s[i]가 80과 같거나 81과 같거나 82와 같거나 83과 같다면
        {
            number+=8; // number에 number+8 값 대입하기
        }
        else if((int)s[i]==84 || (int)s[i]==85 || (int)s[i]==86) // 앞 조건들에 맞지 않고, (int)s[i]가 84와 같거나 85와 같거나 86과 같다면
        {
            number+=9; // number에 number+9 값 대입하기
        }
        else if((int)s[i]==87 || (int)s[i]==88 || (int)s[i]==89 || (int)s[i]==90) // 앞 조건들에 맞지 않고, (int)s[i]가 87과 같거나 88과 같거나 89와 같거나 90과 같다면
        {
            number+=10; // number에 number+10 값 대입하기
        }
        i++; // i에 1 더하기
    }
    
    printf("%d\n", number); // 결과 출력하기
    return 0;
}
