// �� ���� A�� B�� �Է¹��� ����, A��B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(0 < A, B < 10)

#include <stdio.h>

int main(void)
{
	int A, B;

		printf("0���� ū ������ �Է��Ͻÿ�. ");
		scanf_s("%d", &A);
	do {
		if (A <= 0) {
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���. ");
			scanf_s("%d", &A);
		}
	} while(A<=0);

	printf("10���� ���� ������ �Է��Ͻÿ�. ");
	scanf_s("%d", &B);
	do {
		if (B >= 10) {
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���. ");
			scanf_s("%d", &B);
		}
	} while (B >= 10);

	printf("�� ���� ���� %d�Դϴ�.\n", A * B);

	return 0;
}