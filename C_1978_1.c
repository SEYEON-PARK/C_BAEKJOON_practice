/*
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
*/

#include <stdio.h>

int main(void)
{
    int N, a[100], sum=0; // 변수와 배열 선언
    scanf("%d", &N); // 변수 N 초기화
    
    for(int i=0;i<N;i++) // i가 0부터 N-1까지 1씩 증가하며
    {
        scanf("%d", &a[i]); // 숫자 입력받기
    }
    for(int i=0;i<N;i++)
    {
        if(a[i]==2)
        {    
            sum++;
            continue;
        }
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
                break;
            else if(j==a[i]-1)
                sum++;
        }
    }
    printf("%d\n", sum);
    
    return 0;
}
