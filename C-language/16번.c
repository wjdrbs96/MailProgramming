#include<stdio.h>
#include<stdlib.h>
#define max 6
int solution(int input[]) {
	int startIndex = 0;
	int index = startIndex;
	for (int i = 0; i < 5; i++) {
		if (i != 0 && index == startIndex) {
			return 0;
		}
		index = input[index];
	}
	if (index == startIndex) {
		return 1;
	}
	return 0;
}
int main()
{
	int s[max] = { 1,4,5,0,3,2 };
	if (solution(s) == 1)
		printf("true\n");
	else
		printf("false\n");
}