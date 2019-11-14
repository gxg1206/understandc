#include <stdio.h>
#define NUM 5
int main ()
{
	int i;
	int v[NUM];
	for (i=0;i<NUM;i++){
		v[i]=NUM-i;
		printf("v[%d]=%d\n",i,v[i]);
	}


return 0;

}