#include <stdio.h>

int main(void)
{
	int x, y, i, j;

	puts("���簢���� ����մϴ�.");
	printf("����:");
	scanf("%d", &y);
	printf("�ʺ�:");
	scanf("%d", &x);

	for (i=0; i < y; i++)
	{
		for (j=0; j < x; j++)
		{
			printf("*");
		}
		putchar('\n');
	}

	return 0;
}