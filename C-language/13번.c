#include<stdio.h>
#include<stdlib.h>
#define max 5

//정렬된 정수 배열안에 정수 k 가 존재하는지 체크하시오.
//정렬된 배열에서 탐색할때는 이진탐색이 적합하다. 
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
	printf("탐색할 값을 입력하세요");
	scanf_s("%d", &key);
	if (search_binary(list, key, 0, 4) == -1)
		printf("탐색실패\n");
	else
		printf("탐색성공\n");
}