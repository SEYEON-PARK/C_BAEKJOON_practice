/*
*/

#include <stdio.h>

int main(void)
{
    int i=0;
    float f[10000];
    
    while(1)
    {
        scanf("%f", &f[i]);
        if(f[i]==999)
        {
            break;
        }
        i++;
    }
    
    i=0;
    
    for(int j=0;f[j+1]!=999;j++)
    {
        printf("%.2f\n", f[i+1]-f[i]);
        i++;
    }
    
    return 0;
}
