 # include<stdio.h>
int main ()
{
 int a, b;
 puts("请输入两个整数。");
 printf("整数A：\n");
 scanf("%d",&a); 
 printf("整数B：\n");
 scanf("%d",&b); 
 if(a-b>=11 ||a-b<=-11)
	puts("它们的差大于11\n");
else
	puts("它们的差小于等于10");
return 0;	
}

// #include <stdio.h>
 
// int main(void)
// {
// 	int n1, n2;
// 	puts("请输入两个整数。");
// 	printf("整数1：");
// 	scanf("%d",&n1);
// 	printf("整数2：");
// 	scanf("%d", &n2);
// 	if((n1 - n2>=11)||(n1 - n2 <=-11))
// 		puts("它们的差大于等于11。");
// 	else
// 		puts("它们的差小于等于10。");
// 	return 0;

// }