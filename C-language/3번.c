#include<stdio.h>
#define max 10
int main()
{
	int count = 0, i;
	int s[max] = { 0,0,1,2,3,4,-5,-6,0 };
	for (i = 0; i < max; i++)
	{
		if (s[i] > 0 || s[i] < 0)    // 0보다 크거나 작은 값이 나타나면 순서대로 넣기 위해서 앞에서 부터 넣는다.
		{
			s[count] = s[i];
			count++;
		}
	}
	for (i = count; i < max; i++)   // 0 을 넣는 for 문 
		s[i] = 0;

	for (i = 0; i < max; i++)       // 배열 출력 for 문 
		printf("%d ", s[i]);
	printf("\n");
}