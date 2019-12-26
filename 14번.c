#include<stdio.h>
#include<stdlib.h>
//팰린드롬 인지 알아내시오. 팰린드롬이란 앞에서부터 읽으나 뒤에서 부터 읽으나 같은 것을 말함.
int main()
{
	int n, r = 0;
	printf("정수를 입력하세요");
	scanf_s("%d", &n);
	while (n > r)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	if (n == r || n == r / 10)
		printf("펠린드롬입니다\n");
	else
		printf("펠림드롬이 아닙니다\n");
}