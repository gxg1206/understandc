#include <stdio.h>
int main ()
{
	int i , j;
	int x, y, z;
	do {
		printf("0～100的整数值：");
		scanf("%d", &x);
	}
	while (x < 0 || x > 100);
		y = x;
	z = x;
	while (y >= 0)
		printf("%d %d\n", y--, ++z);
	printf("宽和高为整数面积为%d"
	       "的长方形的边长是：\n", x);
	for (i = 1; i < x; i++)
	{
		if (i * i > x) break;
		if (x % i != 0) continue;
		printf("%d × %d\n", i, x / i);
	}
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 7; j++)
			putchar('*');
		putchar('\n');
	}

return 0;

}
