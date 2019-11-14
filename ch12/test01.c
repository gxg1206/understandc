#include <stdio.h>
#define NAME_LEN 64
struct student
{
	int *name[NAME_LEN];
	int *height;
	int *weight;
	int *schols;
};
int main ()
{
	struct student takao = {"Takao", 173, 86.2};
	printf("姓名=%d\n", &takao.name);
	printf("身高=%d\n", &takao.height);
	printf("体重=%d\n", &takao.weight);
	printf("奖学金=%d\n", &takao.schols);
	return 0;



}