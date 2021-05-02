/*
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 
예를 들어, 10번 문제의 점수는 3이 된다.
"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
*/

#include <stdio.h>

int main(void)
{
    int num, sum1, sum2; // 변수 선언
    char s[100][80]; // 2차원 배열 선언

    scanf("%d", &num); // 사용자로부터 정수 입력받기

    for (int i = 0; i < num; i++) // i가 0부터 num보다 작을 때까지 i에 1씩 더하면서 반복
    {
        scanf("%s", &s[i], sizeof(s[i])); // 사용자로부터 num개의 문자열 입력받기
    }

    for (int i = 0; i < num; i++) // i가 0부터 num보다 작을 때까지 1씩 더하면서 반복
    {
        sum1 = 0, sum2 = 0; // 변수 sum1, sum2을 0으로 초기화
        for (int j = 0; s[i][j] != NULL; j++) // j가 0부터 s[i][j]가 NULL이 아닐 때까지 j에 1씩 더하면서 반복
        {
            if (s[i][j] == 'O') // 만약, s[i][j]가 문자 'O'라면
            {
                sum1++; // sum1에 1 더하기
                sum2 += sum1; // sum2에 sum2+sum1 값 대입하기
            }
            else if (s[i][j] == 'X') // 만약, s[i][j]가 문자 'O'이 아니고, 문자 'X'라면
            {
                sum1 = 0; // sum1에 0 대입하기
            }
        }
        printf("%d\n", sum2); // sum2를 
    }

    return 0;
}
