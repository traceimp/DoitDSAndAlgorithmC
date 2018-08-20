// ��  ¥: 08/20/2018, 17:10
// �ۼ���: Kim92
// ��  ��: 

#include <stdio.h>
#include <stdlib.h>

// type�� x�� y���� ��ȯ
#define swap(type, x, y) do{ type t = x; x=y; y=t; } while(0)

// ��� ������ n�� �迭 a�� ��Ҹ� �������� ����
void ary_reverse(int a[], int n)
{
	int i, j;
	for (i = 0; i < n / 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);
	}

	for (j = 0; j < n; j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");

	printf("���� ������ �����մϴ�.\n\n");

}

int main(void)
{
	int i;
	int *x;		// �迭 ù��° ����� ������
	int nx;		// �迭 x�� ��� ����

	printf("��� ����:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));		// ��� ������ nx�� int�� �迭 x�� ����
	printf("%d���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("----------------------------\n");

	ary_reverse(x, nx);		// �迭 x�� ��Ҹ� �������� ����
	printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);

	return 0;
}