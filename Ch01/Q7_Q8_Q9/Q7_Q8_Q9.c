#include <stdio.h>

// a���� b���� ������ ��� ������ ���� ���ϴ� �Լ�
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
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� ��:");
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
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� ��:");
	scanf("%lf", &n);

	result = (1 + n) * (n / 2);
	printf("������ �� : %.0lf\n", result);*/

	// Q9
	int a=0, b=0;
	puts("a���� b������ ���� ���մϴ�.");
	printf("a�� ��:");
	scanf("%d", &a);
	printf("b�� ��:");
	scanf("%d", &b);

	printf("���� a���� b������ ��: %d\n", sumof(a, b));
	return 0;

}