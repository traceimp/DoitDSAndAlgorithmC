#include <stdio.h>

// 네 값의 최댓값을 구하는 함수 max4
int max4(int a, int b, int c, int d)
{
	int max = 0;
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}

// 세 값의 최소값을 구하는 함수 min3
int min3(int aa, int bb, int cc)
{
	int min = 0;
	min = aa > bb ? bb : aa;
	min = min > cc ? cc : min;
	return min;
}

// 네 값의 최소값을 구하는 함수 min4
int min4(int a, int b, int c, int d)
{
	int min = a;
	min = min > b ? b : min;
	min = min > c ? c : min;
	min = min > d ? d : min;
	return min;
}

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0, aa = 0, bb = 0, cc=0;
	printf("4개의 값 입력:");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	
	printf("3개의 값 입력:");
	scanf_s("%d %d %d", &aa, &bb, &cc);

	printf("4개 중 최대값 : %d\n", max4(a, b, c, d));
	printf("4개 중 최소값 : %d\n", min4(a, b, c, d));

	printf("최소값 : %d\n", min3(aa, bb, cc));
	return 0;
}