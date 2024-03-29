/*
X대학 M교수님은 프로그래밍 수업을 맡고 있다. 교실엔 학생이 30명이 있는데, 학생 명부엔 각 학생별로 1번부터 30번까지 출석번호가 붙어 있다.
교수님이 내준 특별과제를 28명이 제출했는데, 그 중에서 제출 안 한 학생 2명의 출석번호를 구하는 프로그램을 작성하시오.

입력은 총 28줄로 각 제출자(학생)의 출석번호 n(1 ≤ n ≤ 30)가 한 줄에 하나씩 주어진다. 출석번호에 중복은 없다.

출력은 2줄이다. 1번째 줄엔 제출하지 않은 학생의 출석번호 중 가장 작은 것을 출력하고, 2번째 줄에선 그 다음 출석번호를 출력한다.
*/

#include <stdio.h>
#define NUM1 28 # 기호상수 NUM1 선언
#define NUM2 31 # 기호상수 NUM2 선언

int main(void)
{
    int n; // 변수 선언
    int num[NUM2]={0}; // 배열 선언 및 0으로 초기화
    
    for(int i=0;i<NUM1;i++) // i가 0부터 NUM1보다 작을 때까지 i를 1씩 증가시키며 반복
    {
        scanf("%d", &n); // 사용자로부터 정수 입력받기
        num[n]=1; // num[n]에 1 대입하기
    }
    
    for(int i=1;i<NUM2;i++) // i가 1부터 NUM2보다 작을 때까지 i를 1씩 증가시키며 반복
    {
        if(num[i]==0) // 만약, num[i]가 0과 같다면
        {
            printf("%d\n", i); // 결과(i의 값) 출력하기
        }
    }
    
    return 0;
}
