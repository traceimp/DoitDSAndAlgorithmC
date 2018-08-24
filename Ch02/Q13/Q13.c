// 날  짜: 08/24/2018, 16:28
// 작성자: Kim92
// 내  용: 날짜를 나타내는 구조체가 오른쪽처럼 주어져 있습니다.
//			아래의 함수를 작성하세요.
// ***** 원리 파악 필요!

#include <stdio.h>

typedef struct {
	int y;	// 년
	int m;	// 월(1~12)
	int d;	// 일(1~31)
} Date;

// 1. y년 m월 d일을 나타내는 구조체를 반환하는 함수
Date DateOf(int y, int m, int d)
{
	Date date;
	date.y = y;
	date.m = m;
	date.d = d;

	return date;
}

/*--- 각 달의 일수 ---*/
static int mdays[2][13] = {
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },			/* 평년 */
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }			/* 윤년 */
};

/*--- year년이 윤년인지 검사하는 함수 ---*/
int isleap(int year)
{
	return year % 4 == 0 && year % 100!= 0 || year % 400 == 0;
}



// 2. 날짜 x의 n일 뒤의 날짜를 반환하는 함수
Date After(Date x, int n)
{
	x.d += n;

	while (x.d > mdays[isleap(x.y)][x.m - 1]) {
		x.d -= mdays[isleap(x.y)][x.m - 1];
		if (++x.m > 12) {
			x.y++;
			x.m = 1;
		}
	}
	return x;
}

// 3. 날짜 x의 n일 앞의 날짜를 반환하는 함수
Date Before(Date x, int n)
{
	x.d -= n;

	while (x.d < 1) {
		if (--x.m < 1) {
			x.y--;
			x.m = 12;
		}
		x.d += mdays[isleap(x.y)][x.m - 1];
	}
	return x;
}

int main(void)
{
	Date date, date_after, date_before;
	int y, m, d, n;

	printf("년을 입력하세요: ");
	scanf("%d", &y);
	printf("월을 입력하세요: ");
	scanf("%d", &m);

	// 월이 1 ~ 12가 아닐 때
	while (m < 1 || 12 < m)
	{
		printf("월(1~12월)을 입력하세요: ");
		scanf("%d", &m);
		
	};

	printf("일을 입력하세요: ");
	scanf("%d", &d);

	// 일이 1 ~ 31가 아닐 때
	while (d < 1 || 31 < d)
	{
		printf("일(1~31일)을 입력하세요: ");
		scanf("%d", &d);

	};

	date = DateOf(y, m, d);
	printf("입력하신 날짜는 %d년 %d월 %d일입니다.\n\n", date.y, date.m, date.d);
	
	printf("며칠 전 또는 며칠 후의 날짜를 원하십니까? \n(전->음수 / 후->양수 입력) : ");
	scanf("%d", &n);

	if (n < 0)
		Before(date, n);
	else
	{
		date_after = After(date, n);
		printf("n일 후는 %d년 %d월 %d일입니다.\n", date_after.y, date_after.m, date_after.d);
	}
		
	
	//
	return 0;
}