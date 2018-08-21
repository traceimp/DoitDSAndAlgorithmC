// ��  ¥: 08/21/2018, 16:31
// �ۼ���: Kim92
// ��  ��: ���� ���α׷��� ���ʷ� ������ó�� ��� ��ȯ������ ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
//			*** �׸� 2-11, �׸� 2-13������ �������� �������� ������ �����ʿ� ���������
//				���⼭�� �������� ���������� ���� �����ʿ� ����մϴ�.

#include <stdio.h>

int card_conv(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;		// ���� �� �ڸ���

	if (x == 0)
		d[digits++] = dchar[0];
	else
	{
		while (x) {
			printf("%2d |	%2d �� %d\n", n, x, x%n);
			d[digits] = dchar[x % n];	// n���� ���� �������� ����
			digits++;
			if (x != NULL)
				printf("   +------\n");
			x /= n;
		}
		printf("%10d\n", 0);

	}

	return digits;
}

int main(void)
{
	int i;
	unsigned no;	// ��ȯ�ϴ� ����
	int cd;			// ��� (���� ���ʰ� �Ǵ� �� => ����� '�� ������ ��ȯ�� ����')
	int dno;		// ��ȯ �� �ڸ���
	char cno[512] = "";	// ��ȯ�� ���� �� �ڸ��� ���ڸ� �����ϴ� ���� �迭
	int retry;		// �� �� ��?
	puts("10������ ��� ��ȯ�մϴ�.");
	do {
		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
		scanf("%u", &no);
		do {
			printf("� ������ ��ȯ�ұ��?(2-36) : ");
			scanf("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_conv(no, cd, cno);	// no�� cd������ ��ȯ
		printf("\n%d�����δ� ", cd);
		for (i=dno-1; i>= 0; i--)
			printf("%c", cno[i]);
		printf("�Դϴ�.\n");
		printf("�� �� �� �ұ��?(1...�� / 0...�ƴϿ�) : ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
	{

	}
}