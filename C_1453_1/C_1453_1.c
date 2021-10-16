/*
세준이는 피시방에서 아르바이트를 한다. 세준이의 피시방에는 1번부터 100번까지 컴퓨터가 있다.
들어오는 손님은 모두 자기가 앉고 싶은 자리에만 앉고싶어한다. 따라서 들어오면서 번호를 말한다. 
만약에 그 자리에 사람이 없으면 그 손님은 그 자리에 앉아서 컴퓨터를 할 수 있고, 사람이 있다면 거절당한다.
거절당하는 사람의 수를 출력하는 프로그램을 작성하시오. 자리는 맨 처음에 모두 비어있고, 어떤 사람이 자리에 앉으면 자리를 비우는 일은 없다.

첫째 줄에 손님의 수 N이 주어진다. N은 100보다 작거나 같다. 둘째 줄에 손님이 들어오는 순서대로 각 손님이 앉고 싶어하는 자리가 입력으로 주어진다.

첫째 줄에 거절당하는 사람의 수를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, num=0, pc[101]={0}, person[101]={0}; // 변수, 배열 선언 및 초기화
    scanf("%d", &N); // 사용자로부터 정수(손님의 수) 입력받기
    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 1씩 증가하며 반복
    {
        scanf("%d", &person[i]); // 사용자로부터 정수(각 손님이 앉고 싶어하는 자리) 입력받기
    }
    for(int j=0;j<N;j++) // j가 0부터 N보다 작을 때까지 1씩 증가하며 반복
    {
        if(pc[person[j]]==1) // 만약, pc[person[j]]가 1이라면
        {
            num++; // num에 1 더하기
            continue; // 반복문 처음으로 돌아가서 계속 반복 진행하기
        }
        pc[person[j]]=1; // pc[person[j]]에 1 대입하기
    }
    
    printf("%d\n", num); // num 출력하기
    return 0;
}