#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return(gcd(b, a%b));
}
int main()
{
	int x, y, g;
	printf("2개의 정수를 입력하세요");
	scanf_s("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
}