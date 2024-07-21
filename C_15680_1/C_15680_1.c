/*
연세대학교의 영문명은 YONSEI, 슬로건은 Leading the Way to the Future이다.
이를 출력하는 프로그램을 작성해보도록 하자.

첫째 줄에 N이 주어진다. (N = 0 또는 1)

N = 0일 경우: 연세대학교의 영문명을 출력한다.
N = 1일 경우: 연세대학교의 슬로건을 출력한다.
대소문자 구별에 주의하도록 하자.
*/

#include <stdio.h>

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    if(N) // 만약, N이 참이라면(0이 아닌 수라면)
        printf("Leading the Way to the Future"); // 출력하기
    else // N이 거짓이라면(0이라면)
        printf("YONSEI"); // 출력하기
    
    return 0;
}
