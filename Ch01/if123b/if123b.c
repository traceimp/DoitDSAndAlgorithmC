#include <stdio.h>

int main(void)
{
	int n;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	// if123a.c�� ������ else if�� ���� (���Ǹ� ����)
	if (n == 1)
		printf("�� ���� 1�Դϴ�. \n");
	else if (n == 2)
		printf("�� ���� 2�Դϴ�. \n");
	else
		printf("�� ���� 3�Դϴ�. \n");

	return 0;
}