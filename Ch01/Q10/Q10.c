#include <stdio.h>

int main(void)
{
	int num1=NULL, num2=NULL;

	do {

		if (num1 == NULL && num2 == NULL)
		{
			puts("b - a�� �����մϴ�.");
			printf("a�� ��:");
			scanf("%d", &num1);
			printf("b�� ��:");
			scanf("%d", &num2);
		}
		else 
		{
			puts("b���� a������ ���ų� �۽��ϴ�.");
			printf("�ٽ� b�� ��: ");
			scanf("%d", &num2);
		}

	} while (num2 < num1 || num2 == num1);
	
	printf("%d - %d = %d\n", num2, num1, num2 - num1);

	return 0;
}