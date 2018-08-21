// 날  짜: 08/21/2018, 16:31
// 작성자: Kim92
// 내  용: 앞의 프로그램을 기초로 오른쪽처럼 기수 변환과정을 상세히 출력하는 프로그램을 작성하세요.
//			*** 그림 2-11, 그림 2-13에서는 나눗셈의 나머지를 몫으로 오른쪽에 출력했지만
//				여기서는 나머지를 나누어지는 수의 오른쪽에 출력합니다.

#include <stdio.h>

int card_conv(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;		// 변한 후 자릿수

	if (x == 0)
		d[digits++] = dchar[0];
	else
	{
		while (x) {
			printf("%2d |	%2d … %d\n", n, x, x%n);
			d[digits] = dchar[x % n];	// n으로 나눈 나머지를 저장
			digits++;
			if (x != NULL)
				printf("   +------\n");
			x /= n;
		}
		printf("%10d\n", 0);

	}

	return digits;
}

int main(void)
{
	int i;
	unsigned no;	// 변환하는 정수
	int cd;			// 기수 (수의 기초가 되는 수 => 현재는 '몇 진수로 변환할 건지')
	int dno;		// 변환 후 자릿수
	char cno[512] = "";	// 변환한 값의 각 자리의 숫자를 저장하는 문자 배열
	int retry;		// 한 번 더?
	puts("10진수를 기수 변환합니다.");
	do {
		printf("변환하는 음이 아닌 정수 : ");
		scanf("%u", &no);
		do {
			printf("어떤 진수로 변환할까요?(2-36) : ");
			scanf("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_conv(no, cd, cno);	// no를 cd진수로 변환
		printf("\n%d진수로는 ", cd);
		for (i=dno-1; i>= 0; i--)
			printf("%c", cno[i]);
		printf("입니다.\n");
		printf("한 번 더 할까요?(1...예 / 0...아니오) : ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
	{

	}
}