#include <stdio.h>

void triangleLB(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		} putchar('\n');
	}
}

void triangleLU(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= i; j--)
		{
			putchar('*');
		} putchar('\n');
	}
}

void triangleRU(int n)
{
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (k = 2; k <= i; k++)
			putchar(' ');
		for (j = n; j >= i; j--)
		{
			putchar('*');
		} putchar('\n');
	}
}

void triangleRB(int n)
{
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (k = n; k > i; k--)
			putchar(' ');
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		} putchar('\n');
	}
}

int main(void)
{
	int n;
	do {
		printf("몇 단 삼각형입니까? :");
		scanf("%d", &n);
	} while (n <= 0);

	triangleLB(n);
	printf("----------\n");
	triangleLU(n);
	printf("----------\n");
	triangleRU(n);
	printf("----------\n");
	triangleRB(n);


	return 0;
}