#include <stdio.h>
enum color {Red, Green, Blue};
int main ()
{
	int color;
	printf("0~2的值：");
	scanf("%d", &color);
	printf("你选择了");
	switch (color)
	{
		case 0: printf("红色。\n"); break;
		case 1: printf("绿色。\n"); break;
		case 2: printf("蓝色。\n"); break;
	}
return 0;
}