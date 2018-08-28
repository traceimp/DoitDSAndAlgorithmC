// ��  ¥: 08/28/2018, 15:48
// �ۼ���: Kim92
// ��  ��: ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��� ����� �ε����� �迭 idx�� �� �պ��� ������� �����ϰ�,
//			��ġ�� ����� ������ ��ȯ�ϴ� �Լ��� �ۼ��ϼ���.
//			���� ���, ����� ������ 8�� �迭 a�� ��Ұ� {1, 9, 2, 9, 4, 6, 7, 9}�̰� key�� 9��
//			idx�� {1, 3, 7}�� �����ϰ� ��ȯ�մϴ�.

#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(���ʹ�)
int search_idx(int a[], int n, int key, int idx[])
{
	int i = 0, j = 0;
	a[n] = key;		// ���� �߰�

	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
			idx[j++] = i;
		if (i == n)
			break;
			
	}

	return j;
}

int main(void)
{
	int i, nx, ky, idx;
	int *x, *idx_p;								// �迭�� ù ��° ��ҿ� ���� ������

	puts("��� idx ���");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));	// ����� ������ (nx+1)�� int�� �迭�� ����
	idx_p = calloc(nx + 1, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);

	idx = search_idx(x, nx, ky, idx_p);		// �迭 x���� ���� ky�� ��Ҹ� ���� �˻�

	if (idx == -1)
		puts("�˻� ����!");
	else
		//printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
		printf("%d�� �Դϴ�.\n", idx);

	free(x);		// �迭 ����
	free(idx_p);

	return 0;
}