#include <stdio.h>
int sqr(int x)
{
	return x * x;
}
int pow4 (int x)
{
	return sqr(sqr(x));
}
int main ()
{
	int a ;
	printf("输入整数a:");
	scanf("%d", &a);
	printf("它的四次幂为:%d\n", pow4(a) );
	return 0;

}
