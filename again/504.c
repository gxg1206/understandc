#include <stdio.h>
#define NUM 5
int main (){
	int i;
	int a[NUM]={17,23,36};
	int b[NUM];
	//for(i=0;i<NUM;i++){
	//	b[i]=a[NUM-i];
	//}
	puts(" a     b");
	puts("----------");

for(i=0;i<NUM;i++){
		b[i]=a[NUM-i];
		printf("   %d    %d\n",a[i],b[NUM-i]);
	}

return 0;

}