/*
정수 n(0 < n < 1000)과 수의 목록이 주어졌을 때, 목록에 들어있는 수가 n의 배수인지 아닌지를 구하는 프로그램을 작성하시오.

첫째 줄에 n이 주어진다. 다음 줄부터 한 줄에 한 개씩 목록에 들어있는 수가 주어진다. 이 수는 0보다 크고, 10,000보다 작다. 목록은 0으로 끝난다.

목록에 있는 수가 n의 배수인지 아닌지를 구한 뒤 예제 출력처럼 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int standardNumber, getNumber;
    scanf("%d %d", &standardNumber, &getNumber);
    
    while(getNumber != 0)
    {
        if(getNumber % standardNumber == 0)
            printf("%d is a multiple of %d.\n", getNumber, standardNumber);
        else
            printf("%d is NOT a multiple of %d.\n", getNumber, standardNumber);
        
        scanf("%d", &getNumber);
    }
    
    return 0;
}
