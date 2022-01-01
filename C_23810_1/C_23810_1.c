/*
서준이는 아빠로부터 골뱅이가 들어 있는 상자를 생일 선물로 받았다. 상자 안에는 뒤집힌 ㅋ자 모양의 골뱅이가 들어있다. 
뒤집힌 ㅋ자 모양은 가로 및 세로로 각각 5개의 셀로 구성되어 있다. 
상자에는 정사각형 모양의 셀의 크기를 나타내는 숫자 하나가 적혀있다. 
셀의 크기 N이 주어지면 예제 출력과 같은 방식으로 골뱅이 모양을 출력하시오.

첫째 줄에 정수 N(1 ≤ N ≤ 100)이 주어진다.

셀의 크기가 N인 골뱅이를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N; // 정수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    for(int j=0;j<N;j++) // j가 0부터 N이 되기 전까지 1씩 증가하며 반복
    {
        for(int i=0;i<5*N;i++) // i가 0부터 5*N이 되기 전까지 1씩 증가하며 반복
        {
            printf("@"); // "@" 출력하기
        }
        printf("\n"); // 한 줄 띄기
    }
    
    for(int j=0;j<N;j++) // j가 0부터 N이 되기 전까지 1씩 증가하며 반복
    {
        for(int i=0;i<N;i++) // i가 0부터 N이 되기 전까지 1씩 증가하며 반복
        {
            printf("@"); // "@" 출력하기
        }
        printf("\n"); // 한 줄 띄기
    }
    
    for(int j=0;j<N;j++) // j가 0부터 N이 되기 전까지 1씩 증가하며 반복
    {
        for(int i=0;i<5*N;i++) // i가 0부터 5*N이 되기 전까지 1씩 증가하며 반복
        {
            printf("@"); // "@" 출력하기
        }
        printf("\n"); // 한 줄 띄기
    }
    
    for(int j=0;j<N;j++) // j가 0부터 N이 되기 전까지 1씩 증가하며 반복
    {
        for(int i=0;i<N;i++) // i가 0부터 N이 되기 전까지 1씩 증가하며 반복
        {
            printf("@"); // "@" 출력하기
        }
        printf("\n"); // 한 줄 띄기
    }
    
    for(int j=0;j<N;j++) // j가 0부터 N이 되기 전까지 1씩 증가하며 반복
    {
        for(int i=0;i<N;i++) // i가 0부터 N이 되기 전까지 1씩 증가하며 반복
        {
            printf("@"); // "@" 출력하기
        }
        printf("\n"); // 한 줄 띄기
    }
    
    return 0;
}