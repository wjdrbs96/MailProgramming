
// 문제 :: 주어진 정수 x와 y 의 최대공약수를 구하시오
// ex) Input: 24 ,18
//     Output: 6
// ex) Input :9, 12
//     Output : 3 

//내가 해본 코드

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i = 2, x, y, z = 1;
	printf("2개의 정수를 입력하세요");
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


//인터넷에 있는 내꺼보단 좀더 나은거 같은 코드 
#include <stdio.h>
int main(void)
{
	int m, n; //두개의 수를 입력받음 
	int i; // 
	int gcd = 0; // 최대공약수
	scanf("%d %d", &m, &n);    // m 이 n 보다 클때랑 m 이 n 보다 작을때의 경우를 나누면 좀더 나을거 같다
	for (i = 1; i <= m; i++)
	{
		if (m%i == 0 && n%i == 0)
			gcd = i;
	}
	printf("%d", gcd);

	return 0;
}