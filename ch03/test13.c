#include<stdio.h>
int main()
{
 	int month;
 	printf("请输入月份");
 	scanf("%d",&month);
 	switch(month){
 	case 3:
 	case 4:
 	case 5:printf("这是春季\n");break;
 	case 6:
 	case 7:
 	case 8:printf("这是夏季\n");break;
 	case 9:
 	case 10:
 	case 11:printf("这是秋季\n");break;
 	case 1:
 	case 2:
 	case 12:printf("这是冬季\n");break;

default:
break;}

return 0;
}