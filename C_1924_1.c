/*
오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.

첫째 줄에 빈 칸을 사이에 두고 x(1 ≤ x ≤ 12)와 y(1 ≤ y ≤ 31)이 주어진다. 
참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.

첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT중 하나를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int m, d; // 변수 선언
    scanf("%d %d", &m, &d); // 사용자로부터 변수 입력받기
    
    switch(m) // m이
    {
        case 1: // 1이라면
            if(d%7==1)
                printf("MON");
            else if(d%7==2)
                printf("TUE");
            else if(d%7==3)
                printf("WED");
            else if(d%7==4)
                printf("THU");
            else if(d%7==5)
                printf("FRI");
            else if(d%7==6)
                printf("SAT");
            else if(d%7==0)
                printf("SUN"); // 상황에 맞게 출력하기
            break; 
        case 2: // 2
            if(d%7==5)
                printf("MON");
            else if(d%7==6)
                printf("TUE");
            else if(d%7==0)
                printf("WED");
            else if(d%7==1)
                printf("THU");
            else if(d%7==2)
                printf("FRI");
            else if(d%7==3)
                printf("SAT");
            else if(d%7==4)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 3: // 3이라면
            if(d%7==5)
                printf("MON");
            else if(d%7==6)
                printf("TUE");
            else if(d%7==0)
                printf("WED");
            else if(d%7==1)
                printf("THU");
            else if(d%7==2)
                printf("FRI");
            else if(d%7==3)
                printf("SAT");
            else if(d%7==4)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 4: // 4
            if(d%7==2)
                printf("MON");
            else if(d%7==3)
                printf("TUE");
            else if(d%7==4)
                printf("WED");
            else if(d%7==5)
                printf("THU");
            else if(d%7==6)
                printf("FRI");
            else if(d%7==0)
                printf("SAT");
            else if(d%7==1)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 5: // 5라면
            if(d%7==0)
                printf("MON");
            else if(d%7==1)
                printf("TUE");
            else if(d%7==2)
                printf("WED");
            else if(d%7==3)
                printf("THU");
            else if(d%7==4)
                printf("FRI");
            else if(d%7==5)
                printf("SAT");
            else if(d%7==6)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 6: // 6이라면
            if(d%7==4)
                printf("MON");
            else if(d%7==5)
                printf("TUE");
            else if(d%7==6)
                printf("WED");
            else if(d%7==0)
                printf("THU");
            else if(d%7==1)
                printf("FRI");
            else if(d%7==2)
                printf("SAT");
            else if(d%7==3)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 7: // 7이라면
            if(d%7==2)
                printf("MON");
            else if(d%7==3)
                printf("TUE");
            else if(d%7==4)
                printf("WED");
            else if(d%7==5)
                printf("THU");
            else if(d%7==6)
                printf("FRI");
            else if(d%7==0)
                printf("SAT");
            else if(d%7==1)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 8: // 8이라면
            if(d%7==6)
                printf("MON");
            else if(d%7==0)
                printf("TUE");
            else if(d%7==1)
                printf("WED");
            else if(d%7==2)
                printf("THU");
            else if(d%7==3)
                printf("FRI");
            else if(d%7==4)
                printf("SAT");
            else if(d%7==5)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 9: // 9라면
            if(d%7==3)
                printf("MON");
            else if(d%7==4)
                printf("TUE");
            else if(d%7==5)
                printf("WED");
            else if(d%7==6)
                printf("THU");
            else if(d%7==0)
                printf("FRI");
            else if(d%7==1)
                printf("SAT");
            else if(d%7==2)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 10: // 10이라면
            if(d%7==1)
                printf("MON");
            else if(d%7==2)
                printf("TUE");
            else if(d%7==3)
                printf("WED");
            else if(d%7==4)
                printf("THU");
            else if(d%7==5)
                printf("FRI");
            else if(d%7==6)
                printf("SAT");
            else if(d%7==0)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 11: // 11이라면
            if(d%7==5)
                printf("MON");
            else if(d%7==6)
                printf("TUE");
            else if(d%7==0)
                printf("WED");
            else if(d%7==1)
                printf("THU");
            else if(d%7==2)
                printf("FRI");
            else if(d%7==3)
                printf("SAT");
            else if(d%7==4)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
        case 12: // 12라면
            if(d%7==3)
                printf("MON");
            else if(d%7==4)
                printf("TUE");
            else if(d%7==5)
                printf("WED");
            else if(d%7==6)
                printf("THU");
            else if(d%7==0)
                printf("FRI");
            else if(d%7==1)
                printf("SAT");
            else if(d%7==2)
                printf("SUN"); // 상황에 맞게 출력하기
            break;
    }
    
    return 0;
}
