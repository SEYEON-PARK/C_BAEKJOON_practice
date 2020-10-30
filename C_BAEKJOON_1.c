//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. (0 < A, B < 10)

#include <stdio.h>

int main(void)
{
	int A, B;
	printf("0보다 큰 정수를 입력하시오. : ");
	scanf_s("%d", &A);
	do {
		if (A <= 0) {
			printf("잘못 입력하셨습니다. 다시 입력하십시오.");
			scanf_s("%d", &A);
		}
	} while (A <= 0); //제대로 된 A 값 입력받기.

	printf("10보다 작은 정수를 입력하시오. : ");
	scanf_s("%d", &B);
	do {
		if (B >= 10) {
			printf("잘못 입력하셨습니다. 다시 입력하십시오.");
			scanf_s("%d", &B);
		}
	} while (B >= 10); //제대로 된 B 값 입력받기.

	printf("두 정수의 합은 %d입니다.\n", A + B); //A와 B의 합 출력하기.

	return 0;
}