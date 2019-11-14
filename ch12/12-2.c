#include <stdio.h>
#include <string.h>
#define NAME_LEN 64 
struct student
{	
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};
int main()
{
	struct student gxg;
	strcpy(gxg.name,"Gxg");
	gxg.height=175;
	gxg.weight=62.5;
	gxg.schols=73000;
	printf("姓名=%s\n",gxg.name);
	printf("身高=%d\n",gxg.height);	
	printf("体重=%.1lf\n",gxg.weight);
	printf("奖学金=%ld\n",gxg.schols);
	return 0;
}