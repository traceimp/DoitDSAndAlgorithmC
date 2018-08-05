#include <stdio.h>

int main(void)
{
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	// if123a.c의 마지막 else if문 변경 (조건만 삭제)
	if (n == 1)
		printf("이 수는 1입니다. \n");
	else if (n == 2)
		printf("이 수는 2입니다. \n");
	else
		printf("이 수는 3입니다. \n");

	return 0;
}