#include <stdio.h>

int main(void)
{
	int num, i = 1, result = 0, sum = 0;

	puts("양의 정수를 입력하세요.");
	printf("입력값:");
	scanf("%d", &num);

	do {
		result = num / i;
		sum += 1;
		i *= 10;
	} while (result > 0);

	printf("%d는 %d자리입니다.\n", num, sum-1);

	return 0;
}