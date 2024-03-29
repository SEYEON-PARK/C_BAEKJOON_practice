/*
사파리월드는 인터넷으로만 존재하는 미스테리한 나라이다. 
사파리월드에는 2개의 서브도메인이 seunghwan.royal.gov.sw와 kyuhyun.royal.gov.sw 이 있는데, 이것이 couple.royal.gov.sw으로 합쳐질 것이다. 
그러나 도메인 관리 센터 SWNIC(센터장: 김동규)에는 엄격한 룰이 있다. 두 서브도메인을 합칠 때, 유명도의 차이가 너무 차이나지 않을 경우에만 두 서브도메인을 결혼시키는 것이다. 
서브도메인의 유명도는 정수이다. 
두 서브도메인의 유명도가 주어졌을 때, 그 차이를 구하는 프로그램을 작성하시오.

첫째 줄에 두 도메인의 유명도 N과 M이 주어진다. (-2,000,000,000 ≤ N, M ≤ 2,000,000,000)

첫째 줄에 두 유명도의 차이 (|N-M|)을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int a, b; // 변수 선언
    scanf("%d %d", &a, &b); // 사용자로부터 정수 입력받기
    
    long long m=(long long)b-a; // m에 b-a의 값 저장하기(b-a의 값이 int로는 표현하기 어려운 값일 수도 있으므로 long long형으로 형변환하기!)
    
    if(m<0) // 만약, m이 0보다 작다면
    {
        m=-m; // m에 -m의 값 저장하기
    }
    
    printf("%lld", m); // 결과 출력하기
    
    return 0;
}
