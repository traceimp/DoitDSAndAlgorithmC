// 날  짜: 08/28/2018, 15:48
// 작성자: Kim92
// 내  용: 요소의 개수가 n인 배열 a에서 key와 일치하는 모든 요소의 인덱스를 배열 idx의 맨 앞부터 순서대로 저장하고,
//			일치한 요소의 개수를 반환하는 함수를 작성하세요.
//			예를 들어, 요소의 개수가 8인 배열 a의 요소가 {1, 9, 2, 9, 4, 6, 7, 9}이고 key가 9면
//			idx에 {1, 3, 7}을 저장하고 반환합니다.

#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(보초법)
int search_idx(int a[], int n, int key, int idx[])
{
	int i = 0, j = 0;
	a[n] = key;		// 보초 추가

	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
			idx[j++] = i;
		if (i == n)
			break;
			
	}

	return j;
}

int main(void)
{
	int i, nx, ky, idx;
	int *x, *idx_p;								// 배열의 첫 번째 요소에 대한 포인터

	puts("요소 idx 출력");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));	// 요소의 개수가 (nx+1)인 int형 배열을 생성
	idx_p = calloc(nx + 1, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &ky);

	idx = search_idx(x, nx, ky, idx_p);		// 배열 x에서 값이 ky인 요소를 선형 검색

	if (idx == -1)
		puts("검색 실패!");
	else
		//printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
		printf("%d개 입니다.\n", idx);

	free(x);		// 배열 해제
	free(idx_p);

	return 0;
}