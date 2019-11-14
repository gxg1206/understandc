#include<stdio.h>		
int min2(int a,int b)
{
	int min=a;
	if(b<min)
		min=b;
	return min;
}
int main()
{
	int a,b;
	printf("整数a：");
	scanf("%d",&a);
	printf("整数b：");
	scanf("%d",&b);
	printf("较小值是%d\n",min2(a,b) );
	return 0;
}