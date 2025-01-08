/*
초등학생인 도겸이는 숫자를 좋아한다. 어느 날 도겸이는 숫자 책을 보다가 간단한 놀이를 하나 생각해냈다. 숫자 놀이의 규칙은 다음과 같다.
- 주어진 숫자의 각 자릿수를 더한다.
- 결과가 한 자릿수가 될 때 까지 규칙1을 반복한다.
예를들어, 숫자 673에 규칙을 적용해보면 결과는 7이 된다 ; 6 + 7 + 3 = 16, 1 + 6 = 7 
도겸이는 당신과 함께 숫자놀이를 하고 싶어 한다. 도겸이가 주는 숫자들을 풀어보자.

각 줄에 숫자 N이 주어진다. N은 100,000보다 작은 양의 정수이다. 마지막 입력은 0이며, 0에 대한 결과는 출력하지 않는다.

한 줄에 하나씩 한 자릿수 결과를 출력한다.
*/

#include <stdio.h>

int return_each_sum(int N)
{
    int each_sum = 0;
    while(N != 0)
    {
        each_sum += (N % 10);
        N /= 10;
    }
    
    if(each_sum / 10 != 0)
        return return_each_sum(each_sum);
    else
        return each_sum;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    
    while(N != 0)
    {
        printf("%d\n", return_each_sum(N));
        scanf("%d", &N);
    }
    
    return 0;
}
