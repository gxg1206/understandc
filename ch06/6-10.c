#include <stdio.h>
#define NUMBER 5
int main()
{
	int i , max;
	int x[NUMBER] = {0};
	printf("请输入%d名学生的分数。\n", NUMBER );
	for (i = 1; i <= NUMBER; i++)
	{
		printf("%d:", i);
		scanf("%d", &x[i - 1]);
	}

	for (i = 1; i < NUMBER; i++)
	{
		max = x[0];
		if (x[i - 1] < x[i])
			max = x[i];

	}
	printf("最高分为：%d\n", max );
	return 0;

}

