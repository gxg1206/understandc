#include <stdio.h>
#define NUM 4
int main (void)
{
	int i, no;
	int a[NUM];
	printf("数据个数:%d\n", NUM );
	for (i = 1;i <= NUM; i++)
	{	printf("%d号:", i);
		scanf("%d", &a[i-1]);	
	}
	putchar('{');
	for (i = 1; i<= NUM; i++)
	printf("%d, ",a[i-1]);
	putchar('}');
	return 0;
 
	}