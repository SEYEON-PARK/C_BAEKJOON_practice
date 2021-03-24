#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M); // 사용자로부터 N, M 입력받기!
        
    int cards[100]={0};
    int sum, big=0;
    
    for(int i=0;i<N;i++)
    {
        scanf("%d ", &cards[i]);
    } // 카드 숫자 초기화!
    
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
    } // for문과 if문을 이용하여 정답 알아보기!
    
    printf("%d\n", big); // 결과 출력하기!
    
    return 0;
    
}
