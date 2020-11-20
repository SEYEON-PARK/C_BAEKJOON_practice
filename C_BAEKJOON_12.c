//두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오. (-10,000 ≤ A, B ≤ 10,000)
#include <stdio.h>

int main(void)
{
	int A, B;
	printf("-10,000보다 크거나 같고, 10,000보다 작거나 같은 두 정수를 입력하시오. : ");
	scanf_s("%d %d", &A, &B);
	do {
		if (A < -10000 || A > 10000) {
			printf("첫 번째 정수를 잘못 입력하셨습니다. 다시 입력해주세요. : ");
			scanf_s("%d", &A);
		}
	} while (A < -10000 || A > 10000); //A 제대로 입력 받았는지 확인하기.

	do {
		if (B < -10000 || B > 10000) {
			printf("두 번째 정수를 잘못 입력하셨습니다. 다시 입력해주세요. : ");
			scanf_s("%d", &B);
		}
	} while (B < -10000 || B > 10000); //B 제대로 입력 받았는지 확인하기.

	if (A > B)
		printf(">\n");
	else if (A == B)
		printf("==\n");
	else
		printf("<\n");

	return 0;
}