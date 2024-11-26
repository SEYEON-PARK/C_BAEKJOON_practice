/*
정수 n(0 < n < 1000)과 수의 목록이 주어졌을 때, 목록에 들어있는 수가 n의 배수인지 아닌지를 구하는 프로그램을 작성하시오.

첫째 줄에 n이 주어진다. 다음 줄부터 한 줄에 한 개씩 목록에 들어있는 수가 주어진다. 이 수는 0보다 크고, 10,000보다 작다. 목록은 0으로 끝난다.

목록에 있는 수가 n의 배수인지 아닌지를 구한 뒤 예제 출력처럼 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int standardNumber; // 변수(기준 숫자) 선언
    scanf("%d", &standardNumber); // 사용자로부터 정수(기준 숫자) 입력받기
    
    int getNumber; // 변수(배수인지 검사할 숫자) 선언
    scanf("%d", &getNumber); // 사용자로부터 정수(배수인지 검사할 숫자) 입력받기
    
    while(getNumber != 0) // getNumber(배수인지 검사할 숫자)가 0이 아니면 계속 반복
    {
        if(getNumber % standardNumber == 0) // 만약, getNumber(배수인지 검사할 숫자)가 standardNumber(기준 숫자)로 나누어 떨어진다면
            printf("%d is a multiple of %d.\n", getNumber, standardNumber); // 결과(배수) 출력하기
        else // getNumber(배수인지 검사할 숫자)가 standardNumber(기준 숫자)로 나누어 떨어지지 않는다면
            printf("%d is NOT a multiple of %d.\n", getNumber, standardNumber); // 결과(배수 아님) 출력하기
        
        scanf("%d", &getNumber); // 사용자로부터 정수(배수인지 검사할 숫자) 입력받기
    }
    
    return 0;
}
