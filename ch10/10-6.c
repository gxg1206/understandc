#include <stdio.h>
void swap(int *pa , int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int  main ()
{
	int x, y;
	puts("请输入两个整数。");
	printf("整数A："); scanf("%d", &x);
	printf("整数B："); scanf("%d", &y);
	swap(&x,&y);
	puts("互换了两数的值。");
	printf("整数A是%d\n",x);
	printf("整数B是%d\n",y);
	return 0;
}