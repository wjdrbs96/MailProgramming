#include<stdio.h>
#include<stdlib.h>
#define max 5
void rotate(int list[], int n)
{
	int i, k, tmp;
	for (i = 0; i < n; i++)  // 총 몇번 이동할지를 결정하는 for 문 
	{
		tmp = list[max - 1];   // 배열마지막값 tmp 에 저장 
		for (k = max - 1; k >0; k--)      // 값의 이동 for 문 
		{
			list[k] = list[k - 1];
		}
		list[0] = tmp;   // 마지막꺼 저장해놓은거 첫번째에다 넣기 
	}
	for (i = 0; i < max; i++)   // 출력용 for 문 
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	int list[max] = { 1,2,3,4,5 };
	printf("이동할 칸수를 입력하세요");
	scanf_s("%d", &n);
	rotate(list, n);
}