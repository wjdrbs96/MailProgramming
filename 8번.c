#include<stdio.h>
#include<stdlib.h>
#define max 5
void rotate(int list[], int n)
{
	int i, k, tmp;
	for (i = 0; i < n; i++)  // �� ��� �̵������� �����ϴ� for �� 
	{
		tmp = list[max - 1];   // �迭�������� tmp �� ���� 
		for (k = max - 1; k >0; k--)      // ���� �̵� for �� 
		{
			list[k] = list[k - 1];
		}
		list[0] = tmp;   // �������� �����س����� ù��°���� �ֱ� 
	}
	for (i = 0; i < max; i++)   // ��¿� for �� 
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	int list[max] = { 1,2,3,4,5 };
	printf("�̵��� ĭ���� �Է��ϼ���");
	scanf_s("%d", &n);
	rotate(list, n);
}