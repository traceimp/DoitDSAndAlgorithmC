// ��  ¥: 08/21/2018, 17:05
// �ۼ���: Kim92
// ��  ��: �迭 a�� ��� ����� ������ �ڼ��� shuffle �Լ��� �ۼ��ϼ���(n�� �����Դϴ�).

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE(b) sizeof(b) / sizeof(b[0])

void ary_copy(int a[], const int b[], int n)
{
	int i = 0, j = n - 1;

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

void shuffle(int a[], int n)
{
	int temp = a[0];
	int i, j;
	srand(time(NULL));
	

	for (i=0; i < n; i++)
	{
		j = rand() % (n + 1);
		if (j < n)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	// �迭 a ��� => ����
	printf("�迭a�� ���� ��: ");
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
	shuffle(a, sizeof(a) / sizeof(a[0]));
	return 0;
}