#include<stdio.h>
#include<stdlib.h>
//�Ӹ���� ���� �˾Ƴ��ÿ�. �Ӹ�����̶� �տ������� ������ �ڿ��� ���� ������ ���� ���� ����.
int main()
{
	int n, r = 0;
	printf("������ �Է��ϼ���");
	scanf_s("%d", &n);
	while (n > r)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	if (n == r || n == r / 10)
		printf("�縰����Դϴ�\n");
	else
		printf("�縲����� �ƴմϴ�\n");
}