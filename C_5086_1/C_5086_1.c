/*
4 × 3 = 12이다.
이 식을 통해 다음과 같은 사실을 알 수 있다.
3은 12의 약수이고, 12는 3의 배수이다.
4도 12의 약수이고, 12는 4의 배수이다.
두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.
   1. 첫 번째 숫자가 두 번째 숫자의 약수이다.
   2. 첫 번째 숫자가 두 번째 숫자의 배수이다.
   3. 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.
   
입력은 여러 테스트 케이스로 이루어져 있다. 각 테스트 케이스는 10,000이 넘지않는 두 자연수로 이루어져 있다. 마지막 줄에는 0이 2개 주어진다. 두 수가 같은 경우는 없다.

각 테스트 케이스마다 첫 번째 숫자가 두 번째 숫자의 약수라면 factor를, 배수라면 multiple을, 둘 다 아니라면 neither를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    while(1) // 무한 반복
    {
        int A, B; // 변수 선언
        scanf("%d %d", &A, &B); // 사용자로부터 두 개의 정수 입력받기
        
        if(A==0 && B==0) // 만약, A가 0이고 B도 0이라면
        {
            break; // 가장 가까운 반복문을 빠져 나간다.
        }
        
        if(B%A==0) // 만약, B%A의 값이 0과 같다면
        {
            printf("factor\n");
        }
        else if(A%B==0)
        {
            printf("multiple\n");
        }
        else
        {
            printf("neither\n");
        }
    }
    
    return 0;
}
