// ��  ¥: 08/20/2018, 14:11
// �ۼ���: Kim92
// ��  ��: ������ ����!

#include <stdio.h>

int main(void)
{
	int *numPtr;
	int num1 = 10;
	int num2 = 20;

	numPtr = &num1;
	printf("%d\n", *numPtr);

	numPtr = &num2;
	printf("%d\n", *numPtr);

	return 0;
}