#include <stdio.h>
#define NUM 4
int main ()
{
	int i,no;
	int num[NUM];
	printf("数据个数：");
	scanf("%d",&no);	
	for (int i = 0; i < NUM; i++)
	{
		printf("%d号：",i+1);
		scanf("%d",&num[i]);
	}
putchar('{');
for (int i = 0; i < NUM; i++)
{
	printf("%d, ",num[i]);
}
putchar('}');
return 0;
}