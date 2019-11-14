#include <stdio.h>
#define NUMBER 5
int main ()
{
	int x[NUMBER][2];
	int i, eng_max, math_max;
	printf("请输入%d名学生的分数。\n", NUMBER);
	for (i = 1; i <= NUMBER; i++)
	{
		putchar('[');
		printf("%d", i);
		putchar(']');
		printf("英语：");
		scanf("%d", &x[i - 1][0]);
		printf("   数学：");
		scanf("%d", &x[i - 1][1]);
	}
	for (i = 1; i < NUMBER; i++)
	{
		x[0][0] = eng_max;
		x[0][1] = math_max;
		if (x[i - 1][0] < x[i][0])
			eng_max = x[i][0];
		if (x[i - 1][1] < x[i][1])
			math_max = x[i][1];
	}
	printf("英语最高分=%d\n", eng_max );
	printf("数学最高分=%d\n", math_max);
	return 0;
}