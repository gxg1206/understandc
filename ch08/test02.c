#include <stdio.h>
#define max(x,y) ((x>y) ? (x) : (y))
int main ()
{
	int a , b, c , d;
	printf("分别输入4个整数：\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("它们的最大值为：%d\n", max(max(a, b), max(c, d)));
	return 0;
}