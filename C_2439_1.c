/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.*/

#include <stdio.h>

int main(void)
{

  int N, k=1; // 변수 선언 및 초기화

  scanf("%d", &N); // N 입력받기

  for(int i=N;i>0;i--) // N번 반복
  {
      for(int j=N-k;j>0;j--)
      {
          printf(" "); // N-k번 출력(k는 반복횟수)
      }
    
      for(int h=0;h<k;h++)
      {
          printf("*"); // k번 출력
      }
      printf("\n"); // 줄바꿈하기
      k++; // k에 1 더하기
      
  }
  return 0;
}
