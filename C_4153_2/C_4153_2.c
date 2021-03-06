/*
과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세 변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0이 입력된다. 
각 테스트케이스는 모두 30,000보다 작은 양의 정수로 주어지며, 각 입력은 변의 길이를 의미한다.

각 입력에 대해 직각 삼각형이 맞다면 "right", 아니라면 "wrong"을 출력한다.
*/

#include <stdio.h>
#include <math.h> // 함수 pow()를 사용하기 위해

int main(void)
{
    int a, b, c; // 변수 선언
    while(1) // 무한 반복
    {
        scanf("%d %d %d", &a, &b, &c); // 사용자로부터 세 개의 정수 입력받기
        if(a==0 && b==0 && c==0) // a가 0이 아니고 b도 0이 아니고 c도 0이 아니라면
            break; // while문 빠져나가기
        if(pow((double)a, 2.0)+pow((double)b, 2.0)==pow((double)c, 2.0) || pow((double)a, 2.0)+pow((double)c, 2.0)==pow((double)b, 2.0) || pow((double)b, 2.0)+pow((double)c, 2.0)==pow((double)a, 2.0)) // 주어진 세 변의 길이가 직각 삼각형이라면
            printf("right\n"); // "right" 출력하기
        else // 주어진 세 변의 길이가 직각 삼각형이 아니라면
            printf("wrong\n"); "wrong" 출력하기
    }
    
    return 0;
}
