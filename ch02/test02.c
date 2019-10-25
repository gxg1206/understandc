#include<stdio.h>
int main ()
{
	int a, b,sum,k;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d",&a);
	printf("整数b：");
	scanf("%d",&b);
	sum=a+b,k=a*b;
	printf("他们的和是%d,积是%d",sum,k );
	return 0;


}