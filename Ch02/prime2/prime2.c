// ��  ¥: 08/22/2018, 14:09
// �ۼ���: Kim92
// ��  ��: 1,000 ������ �Ҽ��� �����մϴ�(ver.2)

#include <stdio.h>

int main(void)
{
	int i, n;
	int prime[500];				// �Ҽ��� �����ϴ� �迭
	int ptr = 0;				// �̹� ���� �Ҽ��� ����
	unsigned long counter = 0;	// ������ Ƚ��
	prime[ptr++] = 2;			// 2�� �Ҽ��Դϴ�.
	for (n = 3; n <= 1000; n+=2)
	{
		for (i = 1; i < ptr; i++)
		{
			counter++;
			if (n%prime[i] == 0)		// ����������� �Ҽ��� �ƴմϴ�.
				break;					// ���̻��� �ݺ��� ���ʿ��մϴ�.
		}
		if (ptr == i)					// ���������� ����������� �ʾҴٸ�
			prime[ptr++] = n;			// �迭�� �����մϴ�.
	}
	for  (i = 0; i < ptr; i++)
	{
		printf("%d\n", prime[i]);
	}
	printf("�������� ������ Ƚ��: %lu\n", counter);

	return 0;
}