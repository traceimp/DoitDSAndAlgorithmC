// 날  짜: 08/21/2018, 17:05
// 작성자: Kim92
// 내  용: 배열 a의 모든 요소의 순서를 뒤섞는 shuffle 함수를 작성하세요(n은 개수입니다).

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE(b) sizeof(b) / sizeof(b[0])

void ary_copy(int a[], const int b[], int n)
{
	int i = 0, j = n - 1;

	// 배열 b 출력
	printf("배열b의 요소: ");
	for (; i < n; i++)
	{
		printf("%d ", b[i]);
	}printf("\n");


	for (i = 0; i <= n; i++)
		a[j--] = b[i];

	// 배열 a 출력
	printf("배열a의 요소: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}printf("\n");
}

void shuffle(int a[], int n)
{
	int temp = a[0];
	int i, j;
	srand(time(NULL));
	

	for (i=0; i < n; i++)
	{
		j = rand() % (n + 1);
		if (j < n)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	// 배열 a 출력 => 랜덤
	printf("배열a의 셔플 후: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}printf("\n");
}

int main(void)
{
	int b[] = { 10, 20, 30, 40, 50 };
	int a[ARR_SIZE(b)];
	ary_copy(a, b, sizeof(b) / sizeof(b[0]));
	shuffle(a, sizeof(a) / sizeof(a[0]));
	return 0;
}