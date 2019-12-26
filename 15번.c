#include <iostream>
#include<stdio.h>
#define max 5
int main(int argc, char** argv) {
	int s[max] = { 1,2,3,4,5 };
	int n, tmp;
	int i, k;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		tmp = s[0];
		for (k = 0; k<max - 1; k++)
		{
			s[k] = s[k + 1];
		}
		s[k] = tmp;
	}
	for (i = 0; i<max; i++)
	{
		printf("%d ", s[i]);
	}
	printf("\n");
	return 0;
}