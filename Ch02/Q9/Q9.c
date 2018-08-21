// 날  짜: 08/21/2018, 17:01
// 작성자: Kim92
// 내  용: 배열 b의 모든 요소를 배열 a에 역순으로 복사하는 함수를 작성하세요. (n은 요소 개수입니다.)

#include <stdio.h>

#define ARR_SIZE(b) sizeof(b) / sizeof(b[0])

void ary_copy(int a[], const int b[], int n)
{
	int i = 0, j=n-1;

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

int main(void)
{
	int b[] = { 10, 20, 30, 40, 50 };
	int a[ARR_SIZE(b)];
	ary_copy(a, b, sizeof(b) / sizeof(b[0]));
	return 0;
}