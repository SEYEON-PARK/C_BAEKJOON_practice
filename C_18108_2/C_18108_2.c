/*
ICPC Bangkok Regional에 참가하기 위해 수완나품 국제공항에 막 도착한 팀 레드시프트 일행은 눈을 믿을 수 없었다. 
공항의 대형 스크린에 올해가 2562년이라고 적혀 있던 것이었다.
불교 국가인 태국은 불멸기원(佛滅紀元), 즉 석가모니가 열반한 해를 기준으로 연도를 세는 불기를 사용한다. 
반면, 우리나라는 서기 연도를 사용하고 있다. 불기 연도가 주어질 때 이를 서기 연도로 바꿔 주는 프로그램을 작성하시오.

서기 연도를 알아보고 싶은 불기 연도 y가 주어진다. (1000 ≤ y ≤ 3000)

불기 연도를 서기 연도로 변환한 결과를 출력한다.
*/

#include <stdio.h>

void print(int year) // print() 함수 선언
{
    printf("%d\n", year-543); // 결과(서기 연도) 출력하기
}

int main(void)
{
    int y; // 변수 선언
    scanf("%d", &y); // 사용자로부터 정수 입력받기
    
    print(y); // print() 함수 이용하기
    
    return 0;
}
