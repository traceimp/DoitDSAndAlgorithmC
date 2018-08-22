// 날  짜: 08/22/2018, 14:00
// 작성자: Kim92
// 내  용: 1,000 이하의 소수를 나열합니다. (ver.1)

#include <stdio.h>

int main(void)
{
	int i, n;
	unsigned long counter = 0;		// 나눗셈 횟수
	for (n = 2; n < 1000; n++)
	{
		for (i = 2; i < n; i++)
		{
			counter++;
			if (n%i == 0)		// 나누어떨어지면 소수가 아닙니다.
				break;			// 더이상의 반복은 불필요합니다.
		}
		if (n == i)				// 마지막까지 나누어떨어지지 않습니다.
			printf("%d\n", n);
	}
	printf("나눗셈을 실행한 횟수: %lu\n", counter);

	return 0;
}