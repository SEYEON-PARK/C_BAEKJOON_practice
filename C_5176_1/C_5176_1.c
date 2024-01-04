/*
이번 ACM-ICPC 대회의 자리는 참가자들이 직접 정한다. 참가자들은 예비 소집일에 자신이 원하는 자리를 미리 정해놓았고, 대회 당일에 어제 적어놓은 자리에 앉으면 된다. 
여러명이 같은 자리를 적어논 경우에는, 먼저 도착한 사람이 그 자리에 앉게되고, 앉지 못한 사람은 대회에 참가할 수 없다.
각 사람이 선호하는 자리가 주어졌을 때, 대회에 참가하지 못하는 사람의 수를 구하는 프로그램을 작성하시오.

첫째 줄에 테스트 케이스의 개수 K가 주어진다. 각 테스트 케이스는 다음과 같이 구성되어 있다.
첫째 줄에 참가자의 수 P와 자리의 수 M이 주어진다. (1 ≤ P, M ≤ 500) 다음 P개 줄에는 각 참가자가 원하는 자리가 주어진다. 
자리는 1번부터 M번까지 있다. 입력으로 주어지는 참가자가 도착하는 순서이다.

각 테스트 케이스에 대해서, 대회에 참가하지 못하는 사람의 수를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int T; // 변수 선언
    scanf("%d", &T); // 사용자로부터 정수 입력받기
    
    for (int i=0;i<T;i++) // i가 0부터 T보다 작을 때까지 1씩 증가하며 반복
    {
        int P, M, person[500], seat[501]={0}, num=0; // 변수, 배열 선언 및 초기화
        scanf("%d %d", &P, &M); // 사용자로부터 두 개의 정수 입력받기
        for(int j=0;j<P;j++) // j가 0부터 P보다 작을 때까지 1씩 증가하며 반복
        {
            scanf("%d", &person[j]); // 사용자로부터 정수 입력받기
            if(seat[person[j]]==1) // 만약, seat[person[j]]가 1이라면
                num++; // num에 1 더하기
            else // seat[person[j]]가 1이 아니라면
                seat[person[j]]=1; // seat[person[j]]에 1 대입하기
        }
        
        printf("%d\n", num); // 결과 출력하기
    }
    return 0;
}