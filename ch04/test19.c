#include<stdio.h>
int main ()
{
	int a,b,c=0; 
	printf("整数值：");
	scanf("%d",&a);
for(b=1;b<=a;b++)
 {	
 	if(a%b==0)	
 		{
 			printf("%d\n",b);
 		c++;
 		}

 }
printf("约数有%d个",c);
return 0;
}