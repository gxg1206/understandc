#include<stdio.h>
int main()
{
	int a, i;
	printf("请输入一个整数：" );
	scanf("%d", &a);
	i = 2;
	while (i <= a)
	{	printf("%d ", i );
		i *= 2;
	}
	return 0;



}