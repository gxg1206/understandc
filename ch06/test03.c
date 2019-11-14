#include<stdio.h>
int cube(int x)
{
	return x * x * x;
}
int main()
{
	int a;
	printf("整数a：");
	scanf("%d",&a);
	printf("它的立方为：%d\n",cube(a));
	return 0;
}