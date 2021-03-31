#include <stdio.h>

int R(int a);

int main(void)
{
    int a, new;
    scanf("%d", &a); // 숫자 입력받기
    
    while(a!=0)
    {
        new=R(a);
        if(a==new)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        } // 원래 입력받았던 수와 입력받은 수를 거꾸로 뒤집은 수가 같은지 확인한 후, 상황에 맞게 출력하기! 
        scanf("%d", &a); // 다시 숫자 입력받기
    }
}

int R(int a)
{
    int r=0;
    while(a!=0)
    {
      r=r*10+a%10;
      a/=10;
    } // 숫자 뒤집어주기!
    
    return r; // 숫자 반환하기
}
