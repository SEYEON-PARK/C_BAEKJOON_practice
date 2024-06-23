/*
배틀그라운드라는 게임에서는 머리와 몸을 보호하기 위해 헬멧과 조끼를 입는다. 
맵에는 다양한 헬멧과 조끼가 있으며 각각 방어력을 갖고 있다. 또한 최대 1개의 헬멧과 조끼밖에 입지 못한다.
경수는 배틀그라운드에서 승리하고 싶기 때문에 시간이 걸리더라도 최고의 헬멧과 조끼를 주워서 최대의 방어력을 얻고 싶어한다.
맵에 존재하는 조끼와 헬멧의 방어력이 주어졌을 때 경수를 도와 경수가 얻을 수 있는 방어력의 최댓값을 구해주자.

입력의 첫째 줄에 맵에 존재하는 헬멧의 개수 N(N은 1000이하의 자연수)과 조끼의 개수 M(M은 1000이하의 자연수)이 주어진다.
둘째 줄에 각 헬멧의 방어력 h[i] (h[i]는 10억 이하의 자연수)가 N개 만큼 주어지며, 셋째 줄에 각 조끼의 방어력 a[i] (a[i]는 10억 이하의 자연수)가 M개 만큼 주어진다.

경수가 얻을 수 있는 방어력의 최댓값을 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M; // 변수 선언
    scanf("%d %d", &N, &M); // 사용자로부터 두 개의 정수 입력받기
    
    int *helmet = (int *)malloc(sizeof(int) * N); // int형 배열 요소를 동적으로 N개 만들어서 helmet과 연결
    int *vest = (int *)malloc(sizeof(int) * M); // int형 배열 요소를 동적으로 M개 만들어서 vest와 연결
    
    for(int i=0;i<N;i++) // i에 0부터 N이 되기 전까지 1씩 증가시킨 값을 대입하며 반복
    {
        scanf("%d", &helmet[i]); // 사용자로부터 정수 입력받기
    }
    
    for(int i=0;i<M;i++) // i에 0부터 M이 되기 전까지 1씩 증가시킨 값을 대입하며 반복
    {
        scanf("%d", &vest[i]); // 사용자로부터 정수 입력받기
    }
    
    int bigHelmet = helmet[0]; // bigHelmet에 helmet[0]의 값 대입하기
    int bigVest = vest[0]; // bigVest에 vest[0]의 값 대입하기
    
    for(int i=1;i<N;i++) // i에 1부터 N이 되기 전까지 1씩 증가시킨 값을 대입하며 반복
    {
        if(helmet[i]>bigHelmet) // 만약, helmet[i]가 bigHelmet보다 크다면
            bigHelmet = helmet[i]; // bigHelmet에 helmet[i]의 값 대입하기
    }
    
    for(int i=1;i<M;i++) // i에 1부터 M이 되기 전까지 1씩 증가시킨 값을 대입하며 반복
    {
        if(vest[i]>bigVest) // 만약, vest[i]가 bigVest보다 크다면
            bigVest = vest[i]; // bigVest에 vest[i]의 값 대입하기
    }
    
    printf("%d", bigHelmet + bigVest); // 결과 출력하기
    
    free(helmet); // helmet 동적 메모리 해제
    free(vest); // vest 동적 메모리 해제
    
    return 0;
}
