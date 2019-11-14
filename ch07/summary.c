#include <stdio.h>
int main()
{	int  b, i;
	float a;
	float sum = 0.0f;
	puts("对浮点数进行多次加法运算。");
	printf("值：" );
	scanf("%f", &a);
	printf("次数:");
	scanf("%d", &i);
	for (b = 0; b < i; b++)
		sum += a;
	printf("加法运算的结果是 %f\n", sum );
	return 0;
}