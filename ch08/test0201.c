#include<stdio.h>
#define max(x,y) ((x)>(y))?(x):(y)
int main()
{
	int a , b , c, d;
	printf("输入四个整数：");
	scanf("%d%d%d%d\n", &a, &b, &c, &d);
	printf("它们的最大值为：%d", max(max(max(a, b), c), d);
	       return 0;
}