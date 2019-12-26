#include<stdio.h>
#include<stdlib.h>
#define max 5
int list[max];
void calcul(int s[], int j)
{
	int i, sum = 1;
	if (j < max)
	{
		calcul(s, j + 1);
		for (i = 0; i < max; i++)
		{
			if (i == j)
				continue;
			sum *= s[i];
		}
		list[j] = sum;
	}
}
int main()
{
	int s[max] = { 1,2,3,4,5 };
	calcul(s, 0);
	for (int i = 0; i < max; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}