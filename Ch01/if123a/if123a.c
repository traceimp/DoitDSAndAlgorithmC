// �Է¹��� ���� ���� �Ǵ��Ͽ� 1 �Ǵ� 2 �Ǵ� 3 �����ϱ�
#include <stdio.h>

int main(void)
{
	int n;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	// sign.c�� if�� ����
	if (n == 1)
		printf("�� ���� 1�Դϴ�. \n");
	else if (n == 2)
		printf("�� ���� 2�Դϴ�. \n");
	else if(n == 3)
		printf("�� ���� 3�Դϴ�. \n");

	return 0;
}