
// ���� :: �־��� ���� x�� y �� �ִ������� ���Ͻÿ�
// ex) Input: 24 ,18
//     Output: 6
// ex) Input :9, 12
//     Output : 3 

//���� �غ� �ڵ�

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i = 2, x, y, z = 1;
	printf("2���� ������ �Է��ϼ���");
	scanf_s("%d %d", &x, &y);
	while (i <= x && i <= y)
	{
		if (x%i == 0 && y%i == 0)
		{
			x = x / i;
			y = y / i;
			z *= i;
		}
		i++;
	}
	printf("%d\n", z);
}


//���ͳݿ� �ִ� �������� ���� ������ ���� �ڵ� 
#include <stdio.h>
int main(void)
{
	int m, n; //�ΰ��� ���� �Է¹��� 
	int i; // 
	int gcd = 0; // �ִ�����
	scanf("%d %d", &m, &n);    // m �� n ���� Ŭ���� m �� n ���� �������� ��츦 ������ ���� ������ ����
	for (i = 1; i <= m; i++)
	{
		if (m%i == 0 && n%i == 0)
			gcd = i;
	}
	printf("%d", gcd);

	return 0;
}