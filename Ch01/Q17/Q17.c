#include <stdio.h>

void spira(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = n; j > i; j--)
			putchar(' ');
		
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		}

		for (j = 2; j <= i; j++)
		{
			putchar('*');
		}
		
	putchar('\n');
	}
}

int main(void)
{
	int n;

	printf("´Ü:");
	scanf("%d", &n);

	spira(n);

	return 0;
}