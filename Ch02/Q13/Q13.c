// ��  ¥: 08/24/2018, 16:28
// �ۼ���: Kim92
// ��  ��: ��¥�� ��Ÿ���� ����ü�� ������ó�� �־��� �ֽ��ϴ�.
//			�Ʒ��� �Լ��� �ۼ��ϼ���.
// ***** ���� �ľ� �ʿ�!

#include <stdio.h>

typedef struct {
	int y;	// ��
	int m;	// ��(1~12)
	int d;	// ��(1~31)
} Date;

// 1. y�� m�� d���� ��Ÿ���� ����ü�� ��ȯ�ϴ� �Լ�
Date DateOf(int y, int m, int d)
{
	Date date;
	date.y = y;
	date.m = m;
	date.d = d;

	return date;
}

/*--- �� ���� �ϼ� ---*/
static int mdays[2][13] = {
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },			/* ��� */
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }			/* ���� */
};

/*--- year���� �������� �˻��ϴ� �Լ� ---*/
int isleap(int year)
{
	return year % 4 == 0 && year % 100!= 0 || year % 400 == 0;
}



// 2. ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date After(Date x, int n)
{
	x.d += n;

	while (x.d > mdays[isleap(x.y)][x.m - 1]) {
		x.d -= mdays[isleap(x.y)][x.m - 1];
		if (++x.m > 12) {
			x.y++;
			x.m = 1;
		}
	}
	return x;
}

// 3. ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date Before(Date x, int n)
{
	x.d -= n;

	while (x.d < 1) {
		if (--x.m < 1) {
			x.y--;
			x.m = 12;
		}
		x.d += mdays[isleap(x.y)][x.m - 1];
	}
	return x;
}

int main(void)
{
	Date date, date_after, date_before;
	int y, m, d, n;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &y);
	printf("���� �Է��ϼ���: ");
	scanf("%d", &m);

	// ���� 1 ~ 12�� �ƴ� ��
	while (m < 1 || 12 < m)
	{
		printf("��(1~12��)�� �Է��ϼ���: ");
		scanf("%d", &m);
		
	};

	printf("���� �Է��ϼ���: ");
	scanf("%d", &d);

	// ���� 1 ~ 31�� �ƴ� ��
	while (d < 1 || 31 < d)
	{
		printf("��(1~31��)�� �Է��ϼ���: ");
		scanf("%d", &d);

	};

	date = DateOf(y, m, d);
	printf("�Է��Ͻ� ��¥�� %d�� %d�� %d���Դϴ�.\n\n", date.y, date.m, date.d);
	
	printf("��ĥ �� �Ǵ� ��ĥ ���� ��¥�� ���Ͻʴϱ�? \n(��->���� / ��->��� �Է�) : ");
	scanf("%d", &n);

	if (n < 0)
		Before(date, n);
	else
	{
		date_after = After(date, n);
		printf("n�� �Ĵ� %d�� %d�� %d���Դϴ�.\n", date_after.y, date_after.m, date_after.d);
	}
		
	
	//
	return 0;
}