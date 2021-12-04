/*
정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
작성해야 하는 함수는 다음과 같다.
-C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
   a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
   n: 합을 구해야 하는 정수의 개수
   리턴값: a에 포함되어 있는 정수 n개의 합
*/

long long sum(int *a, int n) // 함수 정의
{
    long long ans = 0; // 변수 선언 및 초기화
    for(int i=0;i<n;i++) // i가 0부터 n보다 작을 때까지 1씩 증가하며 반복
    {
        ans+=a[i]; // ans에 ans+a[i] 대입하기
    }
    
	return ans; // 변수 ans의 값 반환하고 함수 종료하기
}
