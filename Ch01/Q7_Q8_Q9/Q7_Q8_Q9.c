#include <stdio.h>

// a부터 b까지 사이의 모든 정수의 합을 구하는 함수
int sumof(int a, int b)
{
	int i, sum = 0;
	for (i=a; i <= b; i++)
	{
		sum += i;
	}

	return sum;
}

int main(void)
{
	// Q7
	/*int i, n, sum=0;
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;

		if (i == 7)
			printf("%d", i);
		else
			printf("%d + ", i);;
	}

	printf(" = %d\n", sum);*/

	// Q8
	/*double n, result=0;
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값:");
	scanf("%lf", &n);

	result = (1 + n) * (n / 2);
	printf("정수의 합 : %.0lf\n", result);*/

	// Q9
	int a=0, b=0;
	puts("a부터 b까지의 합을 구합니다.");
	printf("a의 값:");
	scanf("%d", &a);
	printf("b의 값:");
	scanf("%d", &b);

	printf("정수 a부터 b까지의 합: %d\n", sumof(a, b));
	return 0;

}