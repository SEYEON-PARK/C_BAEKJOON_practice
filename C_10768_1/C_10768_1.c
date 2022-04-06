/*
2월 18일은 올해 CCC에 있어서 특별한 날이다.
사용자로부터 정수인 월과 일을 입력받아 날짜가 2월 18일인지 전인지 후인지를 출력하는 프로그램이다.
만약 날짜가 2월 18일 전이면, "Before"을 출력한다. 만약 날짜가 2월 18일 후면, "After"을 출력한다. 만약 2월 18일이라면 "Special" 을 출력한다.

입력은 두 개의 정수가 각 줄에 걸쳐 입력된다. 이 정수들은 2015년의 날짜에 포함된다.
첫 번째 줄은 1에서 12사이의 월을 입력한다.
두 번째 줄은 1에서 31사이의 그 달에 들어있는 날짜를 입력한다 .

마지막 줄에 "Before", "After"나 "Special"을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int month, day; // 변수 선언
    scanf("%d %d", &month, &day); // 사용자로부터 두 개의 정수(월과 날짜) 입력받기
    
    if(month>2) // 만약, month(월)가 2보다 크다면
    {
        printf("After\n"); // "After" 출력하기
    }
    else // month(월)가 2보다 작거나 같다면
    {
        if(month==1) // 만약, month(월)이 1과 같다면
        {
            printf("Before\n"); // "Before" 출력하기
        }
        else // month(월)이 1이 아니라면
        {
            if(day>18) // 만약, day(날짜)가 18보다 크다면
            {
                printf("After\n"); // "After" 출력하기
            }
            else if(day<18) // 만약, day(날짜)가 18보다 크지 않고 작다면
            {
                printf("Before\n"); // "Before" 출력하기
            }
            else // day(날짜)가 18보다 크지 않고 작지도 않으면(18과 같다면)
            {
                printf("Special\n"); // "Special" 출력하기
            }
        }
    }
    
    return 0;
}
