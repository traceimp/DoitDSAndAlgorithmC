// 1, 2, ..., n의 합을 구합니다. (while문)
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;	// 합
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값:");
	scanf("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n)	// i가 n 이하면 반복한다.
	{
		sum += i;	// sum에 i값을 더한다.
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	printf("i의 값: %d\n", i);

	return 0;
}