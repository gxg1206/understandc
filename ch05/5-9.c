#include <stdio.h>
int main ()
{
	int i;
	int Grade[5];
	int sum = 0;
	printf("请输入5名学生的分数。\n");
	for (i = 1; i <= 5; i++)
	{
		printf("%4d号:", i);
		scanf("%d", &Grade[i]);
		sum += Grade[i];
	}
printf("总分：%4d\n",sum );
printf("平均分为：%4f\n",(double)sum/5 );
return 0;
}