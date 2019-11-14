#include<stdio.h>
int main ()
{
	int a , b;
	printf("输入一个正整数：" );
	scanf("%d",&a);
	b=1;
	while(b>0 && b<=a)
	{	

		if(b%2)
			putchar('+');
		else
			putchar('-');
		b++;

	}


return 0;


}