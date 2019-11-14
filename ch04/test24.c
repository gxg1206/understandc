#include <stdio.h>
int main ()
{
	int a, i, j ;
	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：" );
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{	for (j = 0; j < a - i ; j++)
			putchar(' ');
		for (j = 0; j < (2 * i - 1); j++)
			putchar('*');
		putchar('\n');

	}
	return 0;
}