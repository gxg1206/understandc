#include <stdio.h>
int main ()
{
	int a , b ;
	puts("请输入一个整数。");
	printf("整数A：\n");
	scanf("%d",&a);
	printf("整数B：\n");
	scanf("%d",&b);
	if(a>b)
		puts("A大于B\n");
	else if(a<b)
		puts("A小于B\n");
	else
		puts("A和B相等");
	return 0;
}