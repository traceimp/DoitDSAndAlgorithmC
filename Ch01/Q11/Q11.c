#include <stdio.h>

int main(void)
{
	int num, i = 1, result = 0, sum = 0;

	puts("���� ������ �Է��ϼ���.");
	printf("�Է°�:");
	scanf("%d", &num);

	do {
		result = num / i;
		sum += 1;
		i *= 10;
	} while (result > 0);

	printf("%d�� %d�ڸ��Դϴ�.\n", num, sum-1);

	return 0;
}