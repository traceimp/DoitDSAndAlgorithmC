// ��  ¥: 08/28/2018, 20:13
// �ۼ���: Kim92
// ��  ��: �츮�� ���캻 ���� �˻� �˰��� ���α׷��� �˻��� ���� ���� ���� ���� ��Ұ� �ϳ� �̻��� ���
//			�� ��� �߿��� �� ���� ��Ҹ� ã�� ���մϴ�. �������, �Ʒ� �׸��� �迭���� 7�� �˻��ϸ�
//			�߾ӿ� ��ġ�ϴ� a[5]�� �˻��մϴ�. �� ���� ��Ҹ� ã�� bin_search2 �Լ��� �ۼ��غ�����.

#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key)
{
	int pl = 0;			// �˻� ���� �� ���� �ε���
	int pr = n - 1;		// �˻� ���� �� ���� �ε���
	int pc;				// �˻� ���� �Ѱ���� �ε���
	int result = 0;

	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)	// �˻� ����
		{
			for (int i = pc; 0 <= i; i--)
			{
				result = (a[pc] == a[i]) ? i : pc;
			}
			return result;
		}
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;		// �˻� ����
}

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int bin_search(const int a[], int n, int key)
{
	int pl = 0;			// �˻� ���� �� ���� �ε���
	int pr = n - 1;		// �˻� ���� �� ���� �ε���
	int pc;				// �˻� ���� �Ѱ���� �ε���

	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)	// �˻� ����
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;		// �˻� ����
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;								// �迭�� ù ��° ��ҿ� ���� ������

	puts("���� �˻�");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));	// ����� ������ nx�� int�� �迭�� ����

	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);		// �ٷ� ���� ������ ������ �ٽ� �Է�

	}
	printf("�˻���: ");
	scanf("%d", &ky);
	idx = bin_search2(x, nx, ky);		// �迭 x���� ���� ky�� ��Ҹ� ���� �˻�

	if (idx == -1)
		puts("�˻� ����!");
	else
		printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);		// �迭 ����

	return 0;
}