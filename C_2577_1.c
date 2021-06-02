/*
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.

첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다. 
마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의 결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int A, B, C, T; // 변수 선언
    int num[10]={0}; // 배열 선언 및 초기화
    scanf("%d", &A); // 사용자로부터 정수 입력받기
    scanf("%d", &B);
    scanf("%d", &C);
    T=A*B*C; // T에 AxBxC 값 대입하기
    
    while(T/10!=0 || T%10!=0) // T를 10으로 나눈 몫이 0이 아니거나 T를 10으로 나눈 나머지가 0이 아니면 계속 반복
    {
        switch(T%10) // T를 10으로 나눈 나머지가
        {
            case 0: // 0이라면
                num[0]++; // num[0]에 1 더하기
                break; // switch문을 여기까지만 실행
            case 1:
                num[1]++;
                break;
            case 2:
                num[2]++;
                break;
            case 3:
                num[3]++;
                break;
            case 4:
                num[4]++;
                break;
            case 5:
                num[5]++;
                break;
            case 6:
                num[6]++;
                break;
            case 7:
                num[7]++;
                break;
            case 8:
                num[8]++;
                break;
            case 9:
                num[9]++;
                break;
        }
        T/=10;
    }
    
    for(int a=0;a<10;a++) // a가 0부터 10보다 작을 때까지 1씩 커지면서 반복
    {
        printf("%d\n", num[a]); // 결과 출력하기
    }
    
    return 0;
}
