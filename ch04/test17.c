#include<stdio.h>
int main ()
{
	int a,b ;
	printf("n的值：" );
	scanf("%d",&a);
	b=1;
	while(b<=a)
    { printf("%d的二次方是%d\n",b,b*b );
		b++;
	}
return 0;
}
//Q：c=b*b结果不正确。