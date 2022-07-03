/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, a;
    scanf("%d", &N);
    
    if(N==1)
    {
        printf("*");
        return 0;
    }
    
    for(int i=0;i<2*N;i++)
    {
        if(i%2==0)
            a=1;
        else
            a=0;
            
        for(int j=0;j<N;j++)
        {
            if(a%2==1)
            {
                printf("*");
                a++;
            }
            else
            {
                printf(" ");
                a++;
            }
        }
        printf("\n");
    }
    
    return 0;
}
