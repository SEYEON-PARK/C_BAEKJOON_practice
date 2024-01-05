// 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
// (2 ≤ A, B, C ≤ 10000)

#include <stdio.h>

int main(void)
{
	int A, B, C;
	printf("2보다 크거나 같고 10,000보다 작거나 같은 정수 세 개를 입력하시오. : ");
	scanf_s("%d %d %d", &A, &B, &C);

	do {
		if (A < 2 || A>10000)
		{
			printf("첫 번째 값을 잘못 입력하셨습니다. 다시 입력해주세요. ");
			scanf_s("%d", &A);
		}
		if (B < 2 || B>10000)
		{
			printf("두 번째 값을 잘못 입력하셨습니다. 다시 입력해주세요.");
			scanf_s("%d", &B);
		}
		if (C < 2 || C>10000)
		{
			printf("세 번째 값을 잘못 입력하셨습니다. 다시 입력해주세요. ");
			scanf_s("%d", &C);
		}
	} while (A < 2 || B < 2 || C < 2 || A>10000 || B>10000 || C>10000);

	printf("첫 번째 값을 A, 두 번째 값을 B, 세 번째 값을 C라고 할 때, \n");
	printf("(A+B)%%C는 %d입니다.\n", (A + B) % C);
	printf("((A%%C) + (B%%C))%%C는 %d입니다.\n", ((A % C) + (B % C)) % C);
	printf("(A×B)%%C는 %d입니다.\n", (A * B) % C);
	printf("((A%%C) × (B%%C))%%C는 %d입니다.\n", ((A % C) *(B % C)) % C);

	return 0;
}