#include <stdio.h>

int main(void)
{
    int N, sum = 0;
    char num[100];

    scanf("%d", &N);
    scanf("%s", num, sizeof(num));

    for (int i = 0; i < N; i++)
    {
        sum += (int)num[i]-48; 
        /* 문자 '3'을 정수 형태로 형변환하면, 아스키 코드 값인 51로 바뀐다. 
        따라서, 10진수 숫자 3으로 바꿔주기 위해, 문자 '0'의 아스키 코드 값인 48을 빼준다.*/
    }

    printf("%d\n", sum);

    return 0;
}
