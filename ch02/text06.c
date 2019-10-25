#include <stdio.h>
int main ()
{
	int heigt;
	printf("请输入您的身高：");
	scanf("%d",&heigt);
	printf("您的标准体重是%.1f公斤。\n",(heigt-100)*0.9);
		return 0;




}