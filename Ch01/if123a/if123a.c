// 입력받은 정수 값을 판단하여 1 또는 2 또는 3 구분하기
#include <stdio.h>

int main(void)
{
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	// sign.c의 if문 변경
	if (n == 1)
		printf("이 수는 1입니다. \n");
	else if (n == 2)
		printf("이 수는 2입니다. \n");
	else if(n == 3)
		printf("이 수는 3입니다. \n");

	return 0;
}