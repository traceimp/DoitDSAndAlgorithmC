// 날  짜: 08/20/2018, 16:20
// 작성자: Kim92
// 내  용: P.74 실습 2-5를 수정하여 키의 합계를 구하는 프로그램 개발

#include <stdio.h>
#include <stdlib.h>

// 요소 개수가 n인 배열 a의 요소의 합계를 구합니다.
int sumof(const int a[], int n)
{
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int main(void)
{
	int i;
	int *height;	// 배열 첫번째 요소의 포인터
	int number;		// 인원 = 배열 height의 요소 개수
	printf("사람 수: ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));	// 요소 개수 number개인 배열을 생성
	printf("%d 사람의 키를 입력하세요.\n", number);
	for (i = 0; i < number; i++)
	{
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}
	printf("합계는 %d입니다.\n", sumof(height, number));
	free(height);

	return 0;
}