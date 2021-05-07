/*
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

입력으로 주어진 숫자 N개의 합을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, sum=0;
    char num[100];
    scanf("%d", &N);
    scanf("%s", &num);

    for(int i=0;i<N;i++)
    {
        sum+=num[i]-'0';
    }
    
    printf("%d\n", sum);
    
    return 0;
}
