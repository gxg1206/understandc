#include<stdio.h>
int main ()
{
	int a , b , i;
	puts("让我们来画一个向下的金字塔。");

	printf("金字塔有几层：");
	scanf("%d", &i);
	for (a = 1; a <= i;a++)
	{
		for (b = 0; b<=; b++)
			putchar(' ');
		for (b = 0; b <=2*a-1 ; b++)
			printf("%d",a%10);
		putchar('\n');

	}
	return 0;
	}