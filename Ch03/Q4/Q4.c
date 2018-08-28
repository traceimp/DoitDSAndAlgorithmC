// ��  ¥: 08/28/2018, 17:52
// �ۼ���: Kim92
// ��  ��: ������ó�� ���� �˻��� ������ �ڼ��� ����ϴ� ���α׷��� �ۼ��ϼ���.
//			�� ���� �� ���ʿ� ���� �˻��ϰ� �ִ� ����� �ε����� ����ϰ�,
//			�˻� ������ �� �� ��� ���� <-, �� �� ��� ���� ->,
//			���� �˻��ϰ� �ִ� �߾� ��� ���� +�� ����ϼ���.

#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int bin_search(const int a[], int n, int key)
{
	int i;
	int pl = 0;			// �˻� ���� �� ���� �ε���
	int pr = n - 1;		// �˻� ���� �� ���� �ε���
	int pc;				// �˻� ���� �Ѱ���� �ε���

	// ��� �ε��� �� ���
	printf("  | ");
	for (i = 0; i < n; i++)
		printf("%d ", i);
	printf("\n");

	// �ι�° �� ���
	printf("--+");
	for (i = 0; i < n+1; i++)
		printf("--");
	printf("\n");

	do {
		pc = (pl + pr) / 2;

		// ǥ�ñ� ���
		printf("  |");
		for (i = 0; i < 4 * pl; i++) printf(" ");
		printf(" <-");
		for (i = 0; i < 4 * (pc - pl); i++) printf(" ");
		printf("+");
		for (i = 0; i < 4 * (pr - pc) - 2; i++) printf(" ");
		printf("->\n");


		printf(" %d|", pc);
		
		for (int i = 0; i < n; i++)
			printf(" %d", a[i]);
		printf("\n");

		if (a[pc] == key)	// �˻� ����
		{
			return pc;
		}
		else if (a[pc] < key)

			pl = pc + 1;
		else
			pr = pc - 1;

		//printf("\n");
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
	idx = bin_search(x, nx, ky);		// �迭 x���� ���� ky�� ��Ҹ� ���� �˻�

	if (idx == -1)
		puts("�˻� ����!");
	else
		printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);		// �迭 ����

	return 0;
}