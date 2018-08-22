// 날  짜: 08/22/2018, 14:09
// 작성자: Kim92
// 내  용: 1,000 이하의 소수를 나열합니다(ver.2)

#include <stdio.h>

int main(void)
{
	int i, n;
	int prime[500];				// 소수를 저장하는 배열
	int ptr = 0;				// 이미 얻은 소수의 개수
	unsigned long counter = 0;	// 나눗셈 횟수
	prime[ptr++] = 2;			// 2는 소수입니다.
	for (n = 3; n <= 1000; n+=2)
	{
		for (i = 1; i < ptr; i++)
		{
			counter++;
			if (n%prime[i] == 0)		// 나누어떨어지면 소수가 아닙니다.
				break;					// 더이상의 반복은 불필요합니다.
		}
		if (ptr == i)					// 마지막까지 나누어떨어지지 않았다면
			prime[ptr++] = n;			// 배열에 저장합니다.
	}
	for  (i = 0; i < ptr; i++)
	{
		printf("%d\n", prime[i]);
	}
	printf("나눗셈을 실행한 횟수: %lu\n", counter);

	return 0;
}