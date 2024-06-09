/*
오늘도 서준이는 알고리즘의 수행시간 수업 조교를 하고 있다. 아빠가 수업한 내용을 학생들이 잘 이해했는지 문제를 통해서 확인해보자.
입력의 크기 n이 주어지면 MenOfPassion 알고리즘 수행 시간을 예제 출력과 같은 방식으로 출력해보자.
MenOfPassion 알고리즘은 다음과 같다.
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}

첫째 줄에 입력의 크기 n(1 ≤ n ≤ 500,000)이 주어진다.

첫째 줄에 코드1 의 수행 횟수를 출력한다.
둘째 줄에 코드1의 수행 횟수를 다항식으로 나타내었을 때, 최고차항의 차수를 출력한다. 단, 다항식으로 나타낼 수 없거나 최고차항의 차수가 3보다 크면 4를 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    long long cal = 0; // 누적하여 계산할 때 사용할 변수 cal 선언 및 초기화
    long long result = 0; // 결과 값을 저장할 변수 result 선언 및 초기화
    
    for(int i=1 ; i<=N-2 ; i++) // i가 1부터 N-2보다 작거나 같을 때까지 1씩 증가시키며 반복
    {
        cal += i; // cal에 cal + i의 값 대입하기
        result += cal; // result에 result + cal의 값 대입하기
    }
    
    printf("%lld\n%lld", result, 3); // 결과 출력하기
    
    return 0;
}
