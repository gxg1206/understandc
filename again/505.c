#include <stdio.h>
#define NUM 7
int main ()
{
	int i;
	int x[NUM];
for(i=0;i<NUM;i++){
	printf("x[%d]:",i);
	scanf("%d",&x[i]);
}
int temp=x[i];
	x[i]=x[NUM-1-i];
	x[NUM-1-i]=temp;
	for(i=0;i<NUM;i++){
		printf("x[%d]=%d\n",i,x[NUM-1-i]);
	}
return 0;


}