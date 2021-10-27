/*
(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
    472 ......(1)
  x 385 ......(2)
--------
   2360 ......(3)
  3776  ......(4)
 1416   ......(5)
--------
 181720 ......(6)
(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.

첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int a, b, result[4]; // 정수 및 배열 선언
    scanf("%d", &a); // 사용자로부터 정수 입력받기
    scanf("%d", &b); // 사용바로부터 정수 입력받기
    
    result[3]=a*b; // result[3]에 a*b 값 대입하기
    
    for(int i=0;i<3;i++) // i가 0부터 3보다 작을 때까지 1씩 증가하며 반복
    {
        result[i]=a*(b%10); // result[i]에 a*(b%10) 값 대입하기
        b=b/10; // b에 b/10 값 대입하기
    }
    
    for(int i=0;i<4;i++) // i가 0부터 4보다 작을 때까지 1씩 증가하며 반복
    {
        printf("%d\n", result[i]); // 결과 출력하기
    }
    
    return 0;
}
