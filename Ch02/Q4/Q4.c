// ��  ¥: 08/20/2018, 16:27
// �ۼ���: Kim92
// ��  ��: �ǽ� 2-6�� Ű�� ������� ������ ������ �� Ű�� �ִ��� ���ϴ� ���α׷�

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxof(const int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
}

int main(void)
{
	int i;
	int *height;
	int number;
	srand(time(NULL));
	number = 5 + rand() % 16;		// ����� : 5 ~ 20 ������ ����
	printf("��� �� : %d\n", number);
	//scanf("%d", &number);
	height = calloc(number, sizeof(int));
	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;		// Ű�� 100 ~ 189 ����
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
	free(height);

	return 0;
}