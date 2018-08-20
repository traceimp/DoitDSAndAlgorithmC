// 날  짜: 08/20/2018, 16:27
// 작성자: Kim92
// 내  용: 실습 2-6의 키와 사람수를 난수로 생성한 후 키의 최댓값을 구하는 프로그램

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxof(const int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
}

int main(void)
{
	int i;
	int *height;
	int number;
	srand(time(NULL));
	number = 5 + rand() % 16;		// 사람수 : 5 ~ 20 사이의 난수
	printf("사람 수 : %d\n", number);
	//scanf("%d", &number);
	height = calloc(number, sizeof(int));
	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;		// 키는 100 ~ 189 제한
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("최댓값은 %d입니다.\n", maxof(height, number));
	free(height);

	return 0;
}