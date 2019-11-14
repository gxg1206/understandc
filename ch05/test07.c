// #include <stdio.h>
// int main ()
// {
// 	int i , no;
// 	int num;
// 	int x[1000];
// 	printf("数据个数：");
// 	scanf ("%d", &num);
// 	for (i = 1; i <= num; i++)
// 	{
// 		printf("%2d号:", i);
// 		scanf("%d", &x[i-1]);
// 		putchar('\n');
// 	}
// 	putchar('{');
// 	for (i = 1; i <=num; i++)
// 	printf("%d ", x[i-1]);
// 	putchar('}');
// 	return 0;
// }
#include <stdio.h>
#define  NUM 4
int main()
{
	int i , a ;
	int x[NUM];
	printf("数据个数：" );
	scanf("%d", &a);
	for (i = 1; i <= NUM; i++)
	{
		printf("%d号：",i);
		scanf("%d",&x[i]);
	}
	putchar ('{');
	for (i = 1; i <= NUM; i++)
		{printf(", %d", x[i]);}
	putchar('}');



	return 0;



}