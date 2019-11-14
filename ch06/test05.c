#include <stdio.h>
int sumup (int n)
{
	int i ;
	int sum=0;
	for(i=1;i<=n;i++)
	sum += i;
return sum;
}
int main()
{	
	int n;
	printf("输入一个整数：");
	scanf("%d",&n);
	printf("%4d\n",sumup(n) );



return 0;


}