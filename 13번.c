#include<stdio.h>
#include<stdlib.h>
#define max 5

//���ĵ� ���� �迭�ȿ� ���� k �� �����ϴ��� üũ�Ͻÿ�.
//���ĵ� �迭���� Ž���Ҷ��� ����Ž���� �����ϴ�. 
int search_binary(int list[], int key, int low, int high)
{
	int mid;
	if (low <= high)
	{
		mid = (low + high) / 2;
		if (list[mid] < key)
			return search_binary(list, key, mid + 1, high);
		else if (list[mid] > key)
			return search_binary(list, key, low, mid - 1);
		else
			return mid;
	}
	return -1;
}
int main()
{
	int list[max] = { -1,3,8,9,10 };
	int key;
	printf("Ž���� ���� �Է��ϼ���");
	scanf_s("%d", &key);
	if (search_binary(list, key, 0, 4) == -1)
		printf("Ž������\n");
	else
		printf("Ž������\n");
}