/*
가위 바위 보는 두 명이서 하는 게임이다. 보통 미리 정해놓은 수 만큼 게임을 하고, 많은 게임을 이긴 사람이 최종 승자가 된다.
가위 바위 보를 한 횟수와 매번 두 명이 무엇을 냈는지가 주어졌을 때, 최종 승자를 출력하는 프로그램을 작성하시오.
  -바위는 가위를 이긴다.
  -가위는 보를 이긴다.
  -보는 바위를 이긴다.

첫째 줄에는 테스트 케이스의 개수 t(0 < t < 1000)가 주어진다. 각 테스트 케이스의 첫째 줄에는 가위 바위 보를 한 횟수 n(0 < n < 100)이 주어진다.
다음 n개의 줄에는 R, P, S가 공백으로 구분되어 주어진다. R, P, S는 순서대로 바위, 보, 가위이고 첫 번째 문자는 Player 1의 선택, 두 번째 문자는 Player 2의 선택이다.

각 테스트 케이스에 대해서 승자를 출력한다. (Player 1 또는 Player 2) 만약, 비겼을 경우에는 TIE를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int T; // 변수 선언
    scanf("%d", &T); // 사용자로부터 정수 입력받기
    
    for(int i=0;i<T;i++) // i에 0부터 T보다 작을 때까지 1씩 증가시킨 값을 대입하며 반복
    {
        int n, player1=0, player2=0; // 변수 선언 및 초기화
        scanf("%d", &n); // 사용자로부터 정수 입력받기
        
        for(int j=0;j<n;j++) // j에 0부터 n보다 작을 때까지 1씩 증가시킨 값을 대입하며 반복
        {
            char a, b; // 변수 선언
            scanf(" %c %c", &a, &b); // 사용자로부터 두 개의 문자 입력받기(이전 '\n' 값이 남아있을 수 있으므로 앞에 띄어쓰기가 있어야만 한다.)
            
            if((a=='S' && b=='P') || (a=='P' && b=='R') || (a=='R' && b=='S')) // 만약, a가 이길 상황이라면
                player1++; // player1에 1 더하기
            else if((a=='S' && b=='R') || (a=='P' && b=='S') || (a=='R' && b=='P')) // 만약 a가 이길 상황이 아니라, b가 이길 상황이라면
                player2++; // player2에 1 더하기
        }
        
        if(player1 > player2) // 만약, player1이 player2보다 크다면
            printf("Player 1\n"); // "Player 1\n" 출력하기
        else if(player2 > player1) // 만약 player1이 player2보다 크지 않고, player2가 player1보다 크다면 
            printf("Player 2\n"); // "Player 2\n" 출력하기
        else // player1이 player2보다 크지 않고, player2가 player1보다 크지도 않다면(같다면)
            printf("TIE\n"); // "TIE\n" 출력하기
    }
    
    return 0;
}
