// ��  ¥: 08/20/2018, 16:20
// �ۼ���: Kim92
// ��  ��: P.74 �ǽ� 2-5�� �����Ͽ� Ű�� �հ踦 ���ϴ� ���α׷� ����

#include <stdio.h>
#include <stdlib.h>

// ��� ������ n�� �迭 a�� ����� �հ踦 ���մϴ�.
int sumof(const int a[], int n)
{
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int main(void)
{
	int i;
	int *height;	// �迭 ù��° ����� ������
	int number;		// �ο� = �迭 height�� ��� ����
	printf("��� ��: ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));	// ��� ���� number���� �迭�� ����
	printf("%d ����� Ű�� �Է��ϼ���.\n", number);
	for (i = 0; i < number; i++)
	{
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}
	printf("�հ�� %d�Դϴ�.\n", sumof(height, number));
	free(height);

	return 0;
}