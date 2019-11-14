#include<stdio.h>
#define swap(int,a,b)  {int temp;temp=a;a=b;b=temp}  
int main()
{
	int x=5;
	int y=10;
	printf("两数位置互换之后：%d%d",swap(int,x,y) );
	return 0;

}   	