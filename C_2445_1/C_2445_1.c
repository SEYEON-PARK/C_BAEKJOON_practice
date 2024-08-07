/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    int starPrint = 1; // 출력할 별의 개수를 셀 변수 선언 및 초기화
    
    for(int i=0;i<2*N-1;i++) // i가 0부터 2*N-1보다 작을 때까지 1씩 증가시키며 반복
    {
        for(int j=0;j<starPrint;j++) // j가 0부터 starPrint보다 작을 때까지 1씩 증가시키며 반복
            printf("*"); // "*" 출력하기
        
        for(int k=0;k<2*(N-starPrint);k++) // k가 0부터 2*(N-starPrint)보다 작을 때까지 1씩 증가시키며 반복
            printf(" "); // " " 출력하기
        
        for(int j=0;j<starPrint;j++) // j가 0부터 starPrint보다 작을 때까지 1씩 증가시키며 반복
            printf("*"); // "*" 출력하기
        
        if(i < N-1) // 만약, i가 N-1보다 작다면
            starPrint++; // starPrint 1 더하기(별을 더 많이 출력해야 함)
        else // i가 N-1보다 크거나 같다면
            starPrint--; // starPrint 1 빼기(다시 별을 줄여가며 출력해야 함)
        
        printf("\n"); // 한 줄 띄기
    }
    
    return 0;
}
