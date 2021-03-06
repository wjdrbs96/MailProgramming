#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 8
int sorted[max];
void merge(int list[], int left, int mid, int right)
{
	int i, j, k, l;
	i = left, j = mid + 1, k = left;
	while (i <= mid && j <= right)
	{
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}
	if (i > mid)
	{
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	}
	else
	{
		for (l = i; l <= mid; l++)
			sorted[k++] = list[l];
	}
	for (l = left; l <= right; l++)
		list[l] = sorted[l];

}
void merge_sort(int list[], int left, int right)
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}
void search(int list[], int count)
{
	printf("count=%d\n", count);
	printf("%d ", list[count - 1]);
}
int main()
{
	int list[max] = { 27,10,12,20,25,13,15,22 };
	merge_sort(list, 0, 7);
	for (int i = 0; i < max; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
	srand(time(NULL));
	search(list, rand() % 8 + 1);
	printf("\n");
}
