/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, a; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기

    for(int i=0;i<2*N;i++) // i가 0부터 2*N이 되기 전까지 1씩 증가하며 반복
    {
        if(i%2==0) // i%2의 값이 0과 같다면
            a=1; // a에 1 대입하기
        else 
            a=0;
            
        for(int j=0;j<N;j++)
        {
            if(a%2==1)
            {
                printf("*");
                ++a;
            }
            else
            {
                printf(" ");
                ++a;
            }
        }
        printf("\n");
    }
    
    return 0;
}
