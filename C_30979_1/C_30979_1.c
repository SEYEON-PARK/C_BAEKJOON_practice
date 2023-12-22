/*
유치원생 파댕이는 아직 어리기 때문에 단것을 매우 좋아한다.
또한, 파댕이는 사탕을 주지 않으면 시도 때도 없이 울곤 한다.
파댕이를 사랑하는 여러분은 일정 시간 동안 파댕이를 돌봐주기로 했다.
여러분은 파댕이를 돌보는 동안 파댕이가 우는 것을 보고 싶지 않기에, 파댕이가 울지 않도록 사탕을 챙겨왔다.
하지만 파댕이를 빨리 보고 싶은 마음에 급하게 사탕을 챙기느라, 돌보는 동안 파댕이가 울지 않게 만들 수 있는 충분한 사탕의 개수인지 확인하지 못했다.
여러분이 가지고 있는 사탕으로 파댕이를 돌보는 동안 파댕이를 울지 않게 만들 수 있는지 알아보자!
여러분은 T분 동안 파댕이를 돌봐야 하며, N개의 사탕을 가지고 있다.
파댕이는 사탕의 맛에 따라 울음을 그치는 시간이 다르며, 사탕의 맛이 F일 때 F분 동안 울음을 멈춘다.

첫 번째 줄에 파댕이를 돌봐야 하는 시간을 나타내는 정수 T (1 <= T <= 1,000)가 주어진다.
두 번째 줄에 가지고 있는 사탕의 총 개수를 나타내는 정수 N (1 <= N <= 100)이 주어진다.
세 번째 줄에 각 사탕의 맛을 나타내는 정수 F (1 <= F <= 10)가 공백으로 구분되어 총 N개가 주어진다.

파댕이를 T분 동안 울지 않게 만들 수 있다면 "Padaeng_i Happy"를 출력한다. 이외의 경우에는 "Padaeng_i Cry"를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int T; // 변수(파댕이를 돌봐야 하는 시간 저장) 선언
    int candyNum; // 변수(가지고 있는 사탕의 총 개수 저장) 선언
    int sum=0; // 변수 선언 및 초기화
    
    scanf("%d", &T); // 사용자로부터 정수(파댕이를 돌봐야 하는 시간) 입력받기
    scanf("%d", &candyNum); // 사용자로부터 정수(가지고 있는 사탕의 총 개수) 입력받기
    
    for(int i=0;i<candyNum;i++) // i에 0부터 candyNum보다 작을 때까지 1씩 증가시킨 값을 대입하며 반복
    {
        int candy; // 변수(각 사탕의 맛 저장) 선언
        scanf("%d", &candy); // 사용자로부터 정수(각 사탕의 맛) 입력받기
        
        sum += candy; // sum에 sum + candy의 값 대입하기
    }
    
    if(sum >= T) // 만약, sum이 T보다 크거나 같다면
        printf("Padaeng_i Happy\n"); // "Padaeng_i Happy\n" 출력하기
    else // sum이 T보다 크거나 같지 않다면(작다면)
        printf("Padaeng_i Cry\n"); // "Padaeng_i Cry\n" 출력하기
    
    return 0;
}
