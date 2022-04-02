/*
어떤 수 X가 주어졌을 때, X의 모든 자리수가 역순이 된 수를 얻을 수 있다. 
Rev(X)를 X의 모든 자리수를 역순으로 만드는 함수라고 하자. 예를 들어, X=123일 때, Rev(X) = 321이다. 그리고, X=100일 때, Rev(X) = 1이다.
두 양의 정수 X와 Y가 주어졌을 때, Rev(Rev(X) + Rev(Y))를 구하는 프로그램을 작성하시오.

첫째 줄에 수 X와 Y가 주어진다. X와 Y는 1,000보다 작거나 같은 자연수이다.

첫째 줄에 문제의 정답을 출력한다.
*/

#include <stdio.h>

int Rev(int a) // Rev() 함수 선언
{
    int result=0; // 변수 선언 및 초기화
    
    while(a!=0) // a가 0이 아니라면 반복
    {
        result*=10; // result에 result*10 값 대입하기
        result+=a%10; // result에 result+a%10 값 대입하기
        a/=10; // a에 a/10 값 대입하기
    }
    
    return result; // result 값 반환하기
}

int main(void)
{
    int X, Y; // 변수 선언
    scanf("%d %d", &X, &Y); // 사용자로부터 두 개의 정수 입력받기
    
    printf("%d", Rev(Rev(X)+Rev(Y))); // 함수 Rev()를 이용하여 결과 출력하기
    
    return 0; 
}
