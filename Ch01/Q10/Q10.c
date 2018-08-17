#include <stdio.h>

int main(void)
{
	int num1=NULL, num2=NULL;

	do {

		if (num1 == NULL && num2 == NULL)
		{
			puts("b - a를 진행합니다.");
			printf("a의 값:");
			scanf("%d", &num1);
			printf("b의 값:");
			scanf("%d", &num2);
		}
		else 
		{
			puts("b값이 a값보다 같거나 작습니다.");
			printf("다시 b의 값: ");
			scanf("%d", &num2);
		}

	} while (num2 < num1 || num2 == num1);
	
	printf("%d - %d = %d\n", num2, num1, num2 - num1);

	return 0;
}