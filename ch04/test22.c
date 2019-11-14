#include <stdio.h>
int main ()
{
	int a , b , i, j;
	puts("让我们来画一个长方形。");
	printf("一边：");
	scanf("%d", &a);
	printf("另一边：");
	scanf("%d", &b);
	if (a > b)
	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < a; j++)
				putchar('*');
			putchar('\n');
		}

	}
	else
		for (i = 0; i < a; i++)

		{
			for (j = 0; j < b; j++)
				putchar('*');
			putchar('\n');
		}


	return 0;
}