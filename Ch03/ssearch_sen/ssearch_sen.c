// 날  짜: 08/28/2018, 14:04
// 작성자: Kim92
// 내  용: 선형 검색(보초법)

#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(보초법)
int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;		// 보초 추가

	while (1)
	{
		if (a[i] == key)
			break;	// 원하는 키 값을 찾은 경우
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
		printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
	free(x);		// 배열 해제

	return 0;
}