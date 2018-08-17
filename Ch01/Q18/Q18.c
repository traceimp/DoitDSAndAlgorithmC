#include <stdio.h>
void nrpira(int n);

void nrpira(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
			printf(" ", i%10);

		for (j = n; j >= (i-1)+1; j--)
		{
			printf("%d", i%10);
		}

		for(j = n-1; j >= (i - 1) + 1; j--)
			printf("%d", i%10);
		putchar('\n');
	}

	
}

int main(void)
{
	int n;

	printf("´Ü:");
	scanf("%d", &n);

	nrpira(n);

	return 0;
}