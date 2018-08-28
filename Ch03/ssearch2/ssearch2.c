// ��  ¥: 08/28/2018, 13:32
// �ۼ���: Kim92
// ��  ��: ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(����2 : for��)

#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(����2 : for��)
int search(const int a[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
			return i;	// �˻� ����
	}
	return -1;		// �˻� ����
}

int main(void)
{
	int i, nx, ky, idx;		// �迭�� ù��° ��ҿ� ���� ������
	int *x;

	puts("���� �˻�");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	// ����� ������ nx�� int�� �迭�� ����
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);		// �迭�� x�� ���� ky�� ��Ҹ� ���� �˻�
	if (idx == -1)
		puts("�˻� ����!");
	else
		printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);	// �迭 ����

	return 0;
}