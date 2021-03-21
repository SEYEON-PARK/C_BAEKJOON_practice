#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
        
    int cards[100]={0};
    int sum, big=0;
    
    for(int i=0;i<N;i++)
    {
        scanf("%d ", &cards[i]);
    }
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(j==i)
                continue;
            for(int k=0;k<N;k++)
            {
                if(k==i || k==j)
                    continue;
                sum=cards[i]+cards[j]+cards[k];
                if(sum>big && sum<=M)
                    big=sum;
                
            }
        }
    }
    
    printf("%d\n", big);
    
    return 0;
    
}
