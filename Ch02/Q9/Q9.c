// ��  ¥: 08/21/2018, 17:01
// �ۼ���: Kim92
// ��  ��: �迭 b�� ��� ��Ҹ� �迭 a�� �������� �����ϴ� �Լ��� �ۼ��ϼ���. (n�� ��� �����Դϴ�.)

#include <stdio.h>

#define ARR_SIZE(b) sizeof(b) / sizeof(b[0])

void ary_copy(int a[], const int b[], int n)
{
	int i = 0, j=n-1;

	// �迭 b ���
	printf("�迭b�� ���: ");
	for (; i < n; i++)
	{
		printf("%d ", b[i]);
	}printf("\n");


	for (i = 0; i <= n; i++)
		a[j--] = b[i];

	// �迭 a ���
	printf("�迭a�� ���: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}printf("\n");
}

int main(void)
{
	int b[] = { 10, 20, 30, 40, 50 };
	int a[ARR_SIZE(b)];
	ary_copy(a, b, sizeof(b) / sizeof(b[0]));
	return 0;
}