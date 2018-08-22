// ��  ¥: 08/22/2018, 16:42
// �ۼ���: Kim92
// ��  ��: dayofyear �Լ��� ���� i�� days�� ������� �ʰ� ������ ������.
//		  ����, for���� �ƴ� while���� ����غ�����.

#include <stdio.h>

// �� ���� �� ��
int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

// year�� �����ΰ�?
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

// y�� m�� d���� �� �� ���� �� ���� ���մϴ�.
int dayofyear(int y, int m, int d)
{
	// ���
	/*while (--m)
		d += mdays[isleap(y)][m - 1];
	return (d);*/

	--m;
	while (0 < m) {
		d += mdays[isleap(y)][m-1];
		--m;
	}

	return d;
}

int main(void)
{
	int year, month, day;	// ��, ��, ��
	int retry;				// �ٽ�?

	do {
		printf("��: "); scanf("%d", &year);
		printf("��: "); scanf("%d", &month);
		printf("��: "); scanf("%d", &day);

		printf("%d���� %d��°�Դϴ�.\n", year, dayofyear(year, month, day));
		printf("�ٽ� �ұ��? (1 -> �� / 0 -> �ƴϿ�) : ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}