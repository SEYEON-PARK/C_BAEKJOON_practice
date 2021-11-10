#include <stdio.h>

int main(void)
{
    int d[4], sum=0, x, y;
    for(int i=0;i<4;i++)
    {
       scanf("%d", &d[i]);
       sum+=d[i]; 
    } 
    
    x=sum/60; 
    y=sum%60;
    
    printf("%d\n", x); 
    printf("%d\n", y); 
    
    return 0;
}
