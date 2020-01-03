#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
	long int n, sum = 0, j, i = 0, s[max];
	s[0] = 0, s[1] = 1;
	printf("n의값을 입력하세요");
	scanf_s("%d", &n);
	for (i = 0; i < max - 2; i++)
	{
		s[i + 2] = s[i] + s[i + 1];
	}
	for (i = 0; i < max; i++)
	{
		if (n < s[i])
			break;
	}
	for (j = 0; j <i; j++)
	{
		if (s[j] % 2 == 0)
			sum += s[j];
	}
	printf("합: %d\n", sum);
}