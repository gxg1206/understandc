#include <stdio.h>
int main()
{
	int i;
	int x[5];
	for(i=0;i<5;i++)
		x[i]=i;
	for(i=0;i<5;i++)
		printf("v[%d]=%d\n",i,x[i] );
	return 0;
}