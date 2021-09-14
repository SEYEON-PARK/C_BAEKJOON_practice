/*
대한고등학교에 재학 중인 민국이와 만세는 4과목(정보, 수학, 과학, 영어)에 대한 시험을 봤다. 
민국이와 만세가 본 4과목의 점수를 입력하면, 민국이의 총점 S와 만세의 총점 T 중에서 큰 점수를 출력하는 프로그램을 작성하시오. 
단, 서로 동점일 때는 민국이의 총점 S를 출력한다.

입력은 2줄로 이루어져 있다.
1번째 줄에는 순서대로 민국이의 정보, 수학, 과학, 영어 점수(정수형)가 있으며, 공백으로 구분되어 있다.
2번째 줄에는 1번째 줄과 마찬가지로 순서대로 만세의 정보, 수학, 과학, 영어 점수(정수형)가 있고, 공백으로 구분되어 있다.

문제에서 요구하는 정답을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int S=0, T=0, score[2][4];
    
    for (int i=0;i<=1;i++)
    {
        for(int k=0;k<4;k++)
        {
            scanf("%d", &score[i][k]);
        }
    }
    
    for (int j=0;j<=3;j++)
    {
        S+=score[0][j];
    }
    for (int j=0;j<=3;j++)
    {
        T+=score[1][j];
    }
    
    if(S>=T)
        printf("%d\n", S);
    else
        printf("%d\n", T);
    
    return 0;
}
