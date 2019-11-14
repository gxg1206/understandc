#include<stdio.h>
#include<stdlib.h>
#define diff(x,y) (abs((x)-(y)))
int main ()
{
 	int x, y;
 	printf("x:");
 	scanf("%d",&x);
 	printf("y:");
 	scanf("%d",&y);
 	printf("x,y的差为：%d\n",diff(x,y));
 	return 0;

}
