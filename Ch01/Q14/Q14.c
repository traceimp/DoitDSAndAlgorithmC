#include <stdio.h>

int main(void)
{
	int num, i, j;

	puts("정사각형을 출력합니다.");
	printf("값:");
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