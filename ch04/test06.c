#include<stdio.h>
int main ()
{
	int a, b ;
	printf("请输入一个整数：");
	scanf("%d", &a);
	b = 0;
	while (b + 1 < a) {
		printf("%d ", b+=2);

	}

	return 0;
}