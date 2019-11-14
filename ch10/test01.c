#include <stdio.h>
void adjust_point (int *n)
{
	if(*n<0)
		*n=0;
	else if(*n>100)
		*n=100;
	else *n=*n;
}
int main ()
{
	int a ;
	printf("输入一个整数：");
	scanf("%d",&a);
	adjust_point(&a);
	printf("%d\n",a);
return 0;


}