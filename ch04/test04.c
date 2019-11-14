#include<stdio.h> 

int main()
{
	int a ;

	
	printf("输入一个正整数：" );
	scanf("%d",&a);
	while (a>=1)
		printf("%d",a-- );
	while (a>=0)
		printf("\n");
	return 0;
		
}