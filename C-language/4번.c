#include<stdio.h>
#define max 5
int target = 8;
void search(int list[], int p, int q)
{
	int i, j;
	for (i = 0; i < max; i++)
	{
		if (p == list[i])
			break;
	}
	for (j = 0; j < max; j++)
	{
		if (q == list[j])
			break;
	}
	if (list[i] + list[j] == target)
	{
		if (i > j)
		{
			printf("�ε����� %d�� %d\n", j, i);
		}
		else
		{
			printf("�ε����� %d�� %d\n", i, j);
		}
	}

}
int main()
{
	int a, b, i;
	int s[max] = { 2,5,6,1,10 };
	for (i = 0; i <= target / 2; i++)
	{
		a = i;
		b = target - i;
		search(s, a, b);
	}
}