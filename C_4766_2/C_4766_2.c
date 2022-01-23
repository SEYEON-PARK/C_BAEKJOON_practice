/*

*/
#include <stdio.h>

int main(void)
{
    int i=0;
    double f[10000];
    
    while(1)
    {
        scanf("%lf", &f[i]);
        if(f[i]==999)
        {
            break;
        }
        i++;
    }
    
    i=1;
    
    for(int j=1;f[j]!=999;j++)
    {
        printf("%.2lf\n", f[i]-f[i-1]);
        ++i;
    }
    
    return 0;
}
