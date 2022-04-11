/*
상근이의 남자 친구의 수와 여자 친구의 수가 주어졌을 때, 친구는 총 몇 명인지 구하는 프로그램을 작성하시오.

입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 테스트 케이스는 두 정수 M과 F로 이루어져 있으며, 각각은 상근이의 남자 친구의 수와 여자 친구의 수이다. (1 ≤ M, F ≤ 5)
입력의 마지막 줄에는 0이 두 개 주어진다.

각 테스트 케이스마다 상근이의 친구의 수를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int M, F;
    for(;;)
    {
        scanf("%d %d", &M, &F);
        if(M==0 && F==0)
            break;
        printf("%d\n", M+F);
    }
    
    return 0;
}
