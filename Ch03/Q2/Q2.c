// 날  짜: 08/28/2018, 14:57
// 작성자: Kim92
// 내  용: 오른쪽처럼 선형 검색의 스캐닝 과정을 상세하게 표시하는 프로그램을 작성하세요.
//			이때 각 행의 맨 왼쪽에 현재 검색하는 요소의 인덱스를 표시하고,
//			현재 검색하고 있는 요소 위에 별표 기호(*)를 표시하세요.

#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(보초법)
int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;		// 보초 추가

	printf("  | ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", i);
	}printf("\n");
	puts("------------------");

	i = 0;
	while (1)
	{
		printf("  |");

		for (int j = 0; j < i; j++)
		{
			printf("  ");
		}

		printf("*\n");
		printf(" %d|", i);

		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[j]);
		}printf("\n");

		if (a[i] == key)
			break;				// 원하는 키 값을 찾은 경우
		else
			printf("  |\n");	// 아니라면 한 칸 내리기
		i++;
	}

	return i == n ? -1 : i;
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;								// 배열의 첫 번째 요소에 대한 포인터

	puts("선형 검색(보초법)");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));	// 요소의 개수가 (nx+1)인 int형 배열을 생성
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);		// 배열 x에서 값이 ky인 요소를 선형 검색
	if (idx == -1)
		puts("검색 실패!");
	else
		printf("%d(은)는 x[%d]에 존재합니다.\n", ky, idx);
	free(x);		// 배열 해제

	return 0;
}