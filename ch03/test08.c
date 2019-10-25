#include<stdio.h>
int main ()
{
	int a,b ;
	puts("请输入两个整数。");
	printf("整数1:\n" );
	scanf("%d",&a);
	printf("整数2:\n" );
	scanf("%d",&b);
	if(a>=b)
		printf("他们的差是%d\n",a-b);
	else
		printf("他们的差是%d\n",b-a );
	return 0;




}