#include<stdio.h>
int main ()
{
	int a,b;
	printf("显示多少个*：" );
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		putchar('*');
		if(b%5==0)
			putchar('\n');

	}	

return 0;



}