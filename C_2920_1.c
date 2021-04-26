/*
다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.
1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.
연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.
*/

#include <stdio.h>

int main(void)
{
    int A[8];
    for(int i=0;i<8;i++)
    {
        scanf("%d", &A[i]); // 숫자 8개 입력받기
    }
    for(int i=0, a=1;i<8;i++)
    {
        if(A[0]==1) // 만약 입력받은 첫 번째 숫자가 1이라면
        {
            if(A[i]!=a) // 만약 입력받은 첫 번째 숫자가 1이고 A[i]가 a와 같지 않다면
            {
                printf("mixed\n"); // "mixed"를 출력하고
                break; // 반복문을 빠져나가기
            }
            else if(i==7) // 만약 입력받은 첫 번쨰 숫자가 1이고 A[i]가 a와 같으며 i가 7이라면
            {
                printf("ascending\n"); // "ascending"을 출력하기
            }
            a++; // a에 1 더하기
        }
        else if(A[0]!=8) // 만약 입력받은 첫 번째 숫자가 1이 아니고 8도 아니라면
        {
            printf("mixed\n"); // "mixed"를 출력하고
            break; // 반복문을 빠져나가기
        }
    }
    for(int i=0, a=8;i<8;i++)
    {
        if(A[0]==8)
        {
            if(A[i]!=a)
            {
                printf("mixed\n");
                break;
            }
            else if(i==7)
            {
                printf("descending\n");
            }
            a--;
        }
    }
}
