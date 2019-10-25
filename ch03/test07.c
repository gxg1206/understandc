#include<stdio.h>
int main ()
{
	int a , b , c , d;
	puts("请输入四个整数。");
	printf("整数A：\n");
	scanf("%d",&a);
	printf("整数B：\n");
	scanf("%d",&b);
	printf("整数C：\n");
	scanf("%d",&c);
	printf("整数D：\n");
	scanf("%d",&d);
	if(a>b && a>c && a>d)
		printf("最大值为%d\n",a);
	else if(b>a && b>c && b>d)
		printf("最大值为%d\n",b);	
	else if(c>a && c>b && c>d)
		printf("最大值为%d\n",c);
	else
		printf("最大值为%d\n",d);
	return 0;
}