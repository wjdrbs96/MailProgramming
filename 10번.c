#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gcd(int a, int b)
{
	int tmp, n;
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}
int main()
{
	int x, y, g;
	printf("2개의 정수를 입력하세요");
	scanf_s("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
}