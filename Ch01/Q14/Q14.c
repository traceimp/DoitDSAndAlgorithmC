#include <stdio.h>

int main(void)
{
	int num, i, j;

	puts("���簢���� ����մϴ�.");
	printf("��:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("*");
		}
		putchar('\n');
	}

	return 0;
}