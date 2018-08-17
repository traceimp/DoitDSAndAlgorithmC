#include <stdio.h>

int main(void)
{
	int x, y, i, j;

	puts("직사각형을 출력합니다.");
	printf("높이:");
	scanf("%d", &y);
	printf("너비:");
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