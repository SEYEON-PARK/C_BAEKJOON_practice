#include <stdio.h>

int main(void)
{
    int d[4], sum=0, x, y; // 변수 선언
    for(int i=0;i<4;i++)
    {
       scanf("%d", &d[i]);
       sum+=d[i]; 
    } 
    
    x=sum/60; // x에 sum을 60으로 나눈 몫 대입하기
    y=sum%60; // y에 sum을 60으로 나눈 나머지 대입하기
    
    printf("%d\n", x); // x값 출력하기
    printf("%d\n", y); // y값 출력하기
    
    return 0;
}
