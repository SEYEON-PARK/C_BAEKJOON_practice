#include <stdio.h>

int main(void)
{
    int A[100]; // 배열 A 선언
    int B[100]; // 배열 B 선언
    int i=0; // 변수 i 선언 및 초기화
    
    while(1) // 무한 
    {
        scanf("%d %d", &A[i], &B[i]); // 사용자로부터 A[i], B[i] 값 입력받기
        
        if(A[i]==0 && B[i]==0)
            break; // 센티널 값(0, 0)이 입력되면 반복문 종료!
        i++; // i에 1 더하기
    }
    
    for(i=0;A[i]!=0 && B[i]!=0;i++)
    {
        printf("%d\n", A[i]+B[i]);
    }
    
    return 0;
}
