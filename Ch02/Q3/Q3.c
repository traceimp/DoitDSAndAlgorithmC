// ��  ¥: 08/20/2018, 16:22
// �ۼ���: Kim92
// ��  ��: P.75 �ǽ� 2-5�� �����Ͽ� Ű�� ����� ���ϴ� ���α׷� ����

#include <stdio.h>
#include <stdlib.h>

// ��� ������ n�� �迭 a�� ����� ����� ���մϴ�.
double avgof(const int a[], int n)
{
	int i;
	int sum = 0;
	double avg = 0.0;
	for (i = 0; i < n; i++)
		sum += a[i];
	avg = (double)sum / n;
	return avg;
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
	printf("����� %.2lf�Դϴ�.\n", avgof(height, number));
	free(height);

	return 0;
}