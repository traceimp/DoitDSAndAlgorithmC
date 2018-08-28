// 날  짜: 08/28/2018, 17:52
// 작성자: Kim92
// 내  용: 오른쪽처럼 이진 검색의 과정을 자세히 출력하는 프로그램을 작성하세요.
//			각 행의 맨 왼쪽에 현재 검색하고 있는 요소의 인덱스를 출력하고,
//			검색 범위의 맨 앞 요소 위애 <-, 맨 끝 요소 위에 ->,
//			현재 검색하고 있는 중앙 요소 위에 +를 출력하세요.

#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 이진 검색
int bin_search(const int a[], int n, int key)
{
	int i;
	int pl = 0;			// 검색 범위 맨 앞의 인덱스
	int pr = n - 1;		// 검색 범위 맨 끝의 인덱스
	int pc;				// 검색 범위 한가운데의 인덱스

	// 모든 인덱스 값 출력
	printf("  | ");
	for (i = 0; i < n; i++)
		printf("%d ", i);
	printf("\n");

	// 두번째 줄 출력
	printf("--+");
	for (i = 0; i < n+1; i++)
		printf("--");
	printf("\n");

	do {
		pc = (pl + pr) / 2;

		// 표시기 출력
		printf("  |");
		for (i = 0; i < 4 * pl; i++) printf(" ");
		printf(" <-");
		for (i = 0; i < 4 * (pc - pl); i++) printf(" ");
		printf("+");
		for (i = 0; i < 4 * (pr - pc) - 2; i++) printf(" ");
		printf("->\n");


		printf(" %d|", pc);
		
		for (int i = 0; i < n; i++)
			printf(" %d", a[i]);
		printf("\n");

		if (a[pc] == key)	// 검색 성공
		{
			return pc;
		}
		else if (a[pc] < key)

			pl = pc + 1;
		else
			pr = pc - 1;

		//printf("\n");
	} while (pl <= pr);

	return -1;		// 검색 실패
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;								// 배열의 첫 번째 요소에 대한 포인터

	puts("이진 검색");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));	// 요소의 개수가 nx인 int형 배열을 생성

	printf("오름차순으로 입력하세요.\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);		// 바로 앞의 값보다 작으면 다시 입력

	}
	printf("검색값: ");
	scanf("%d", &ky);
	idx = bin_search(x, nx, ky);		// 배열 x에서 값이 ky인 요소를 이진 검색

	if (idx == -1)
		puts("검색 실패!");
	else
		printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
	free(x);		// 배열 해제

	return 0;
}