// ��  ¥: 08/21/2018, 15:39
// �ۼ���: Kim92
// ��  ��: P.75 �ǽ� 2-8�� card_convr �Լ��� �����Ͽ� �迭�� �� ���ʿ� �Ʒ��ڸ��� �ƴ϶�
//		  ���ڸ��� �����ϴ� card_conv �Լ��� �ۼ��ϼ���.

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
			d[digits++] = dchar[x % n];	// n���� ���� �������� ����
			x /= n;
		}
		
	}

	return digits;
}

int main(void)
{
	int i;
	unsigned no;	// ��ȯ�ϴ� ����
	int cd;			// ��� (���� ���ʰ� �Ǵ� �� => ����� '�� ������ ��ȯ�� ����')
	int dno;		// ��ȯ �� �ڸ���
	char cno[512]="";	// ��ȯ�� ���� �� �ڸ��� ���ڸ� �����ϴ� ���� �迭
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
		printf("%d�����δ� ", cd);
		for (i = 0; i < dno; i++)
			printf("%c", cno[i]);
		printf("�Դϴ�.\n");
		printf("�� �� �� �ұ��?(1...�� / 0...�ƴϿ�) : ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
	{

	}
}