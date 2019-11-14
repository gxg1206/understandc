#include<stdio.h>
int main ()
{
	int a,b;
	printf("请输入一个正整数：");
	scanf("%d",&a);
	b=1;
	while(b<=a)
	{putchar('*');
		putchar('\n');
		b++;}
	return 0;

 }

// int main(void)
// {
//     int num, i;

//    #include<stdio.h>
//  printf("要输入多少个整数: ");
//     scanf("%d", &num);
//     i = 0;
//     while (num >= 0 && i < num)
//     {
//         putchar('*');
//         printf("\n");
//         i++;
//     }

//     return 0;
// }
