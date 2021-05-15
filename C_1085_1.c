/*

한수는 지금 (x, y)에 있다. 직사각형의 왼쪽 아래 꼭짓점은 (0, 0)에 있고, 오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

첫째 줄에 x, y, w, h가 주어진다.

첫째 줄에 문제의 정답을 출력한다.

1 ≤ w, h ≤ 1,000
1 ≤ x ≤ w-1
1 ≤ y ≤ h-1
x, y, w, h는 정수

*/

#include <stdio.h>

int main(void)
{
    int x, y, w, h, min;
    int r[4];
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &w);
    scanf("%d", &h);
    
    r[0]=x;
    r[1]=y;
    r[2]=w-x;
    r[3]=h-y;
    min=r[0];
    
    for(int i=0;i<4;i++)
    {
        if(r[i]<min)
            min=r[i];
    }
    
    printf("%d\n", min);
    
    return 0;
}
