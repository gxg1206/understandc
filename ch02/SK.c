#include<stdio.h>
int main ()
// {
// 	int a;
// 	printf("请输入一个整数：");
// 	scanf("%d",&a);

// 	if(a>=1 && a<=5)
// 		printf("星期%d",a);
// 	else if (a>=6 && a<=7)
// 	{
// 		printf("星期%d"，a);
// 	}
// 	else
// 		printf("没了")；

// }
{

	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);
	switch (a) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5: printf("上课"); break;
	case 6:

	case 7: printf("休息"); break;
	default:
		break;

	}

	return 0;

}