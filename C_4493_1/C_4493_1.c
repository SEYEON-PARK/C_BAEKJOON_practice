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
        scanf("%d", &n);
        
        for(int j=0;j<n;j++)
        {
            char a, b;
            scanf(" %c %c", &a, &b);
            
            if((a=='S' && b=='P') || (a=='P' && b=='R') || (a=='R' && b=='S'))
                player1++;
            else if((a=='S' && b=='R') || (a=='P' && b=='S') || (a=='R' && b=='P'))
                player2++;
        }
        
        if(player1 > player2)
            printf("Player 1\n");
        else if(player2 > player1)
            printf("Player 2\n");
        else
            printf("TIE\n");
    }
    
    return 0;
}
