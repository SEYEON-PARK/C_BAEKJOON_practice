// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.(0 < A, B < 10)

#include <stdio.h>

int main(void)
{
	int A, B;

	printf("0보다 큰 정수를 입력하시오. ");
	scanf_s("%d", &A);
	do {
		if (A <= 0) {
			printf("잘못 입력하셨습니다. 다시 입력해주세요. ");
			scanf_s("%d", &A);
		}
	} while (A <= 0);

	printf("10보다 작은 정수를 입력하시오. ");
	scanf_s("%d", &B);
	do {
		if (B >= 10) {
			printf("잘못 입력하셨습니다. 다시 입력해주세요. ");
			scanf_s("%d", &B);
		}
	} while (B >= 10);

	printf("첫 번째 정수/두 번째 정수의 몫은 %d이고, 나머지는 %d다.\n", A / B, A % B);

	return 0;
}