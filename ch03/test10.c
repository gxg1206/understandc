#include <stdio.h>
int main ()
{
	int a , b , c ;
	puts("请输入三个整数。");
	printf("整数A：\n");
	scanf("%d",&a);
	printf("整数B：\n");
	scanf("%d",&b);
	printf("整数C\n");
	scanf("%d",&c);
	if (a == b && b == c)
	puts("三个值都相等");	
 else if
 	((a == b || a == c || b == c)&& (a != b && b != c && c != a))
	puts("有两个值相等");
	else 
		puts("三个值都相等");
	return 0;





}