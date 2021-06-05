/*
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, A[1000], B[1000], temp=-1000, j=0;
    scanf("%d", &N);
    
    for(int i=0;i<N;i++)
        scanf("%d", &A[i]);
    
    for(int i=0;i<2001;i++, temp++)
    {
        for(int k=0;k<N;k++)
        {
            if(A[k]==temp)
            {
                B[j]=A[k];
                j++;
                break;
            }
        }
    }
    
    for(int i=0;i<N;i++)
    {
        printf("%d\n", B[i]);
    }
    
    return 0;
}
