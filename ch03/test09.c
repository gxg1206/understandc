#include<stdio.h>
int main ()
{
	int a ,b ; 
	printf("整数1:\n" );
	scanf("%d",&a);
	printf("整数2：\n");
	scanf("%d",&b);
	(a == b)?puts("他们相等"):puts("他们不相等");
	return 0;
}