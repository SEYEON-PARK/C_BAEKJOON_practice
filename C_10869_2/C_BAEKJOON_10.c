//두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
//(1 ≤ A, B ≤ 10,000)

#include <stdio.h>

int main(void)
{
	int A, B;

	printf("1보다 크거나 같은 정수를 입력하시오. ");
	scanf_s("%d", &A);
	do {
		if (A < 1) {
			printf("잘못 입력하셨습니다. 다시 입력해주세요. ");
			scanf_s("%d", &A);
		}
	} while (A < 1);

	printf("10,000보다 작거나 같은 정수를 입력하시오. ");
	scanf_s("%d", &B);
	do {
		if (B > 10000) {
			printf("잘못 입력하셨습니다. 다시 입력해주세요. ");
			scanf_s("%d", &B);
		}
	} while (B > 10000);

	printf("첫 번째 정수 + 두 번째 정수는 %d이다.\n", A + B);
	printf("첫 번째 정수 - 두 번째 정수는 %d이다.\n", A - B);
	printf("첫 번째 정수 * 두 번째 정수는 %d이다.\n", A * B);
	printf("첫 번째 정수 / 두 번째 정수는 %d이다.\n", A / B);
	printf("첫 번째 정수 %% 두 번째 정수는 %d이다.\n", A % B);

	return 0;
}
