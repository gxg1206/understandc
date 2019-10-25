#include<stdio.h>
int main ()
{
	int a , b , c;
	puts("请输入三个整数。");
	printf("整数A：\n");
	scanf("%d",&a);
	printf("整数B：\n");
	scanf("%d",&b);
	printf("整数C：\n");
	scanf("%d",&c);
	if(a<b && a<c)
		printf("最小值为%d\n",a);
	else if(b<a && b<c)
		printf("最小值为%d\n",b);	
	else 
		printf("最小值为%d\n",c );
return 0;




}