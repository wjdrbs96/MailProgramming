#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int recursive(int n)
{
	int sum = 0;
	if (n > 0)
	{
		return (n + recursive(n - 1));
	}
	return 0;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", recursive(n));
}